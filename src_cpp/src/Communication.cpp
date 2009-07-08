/* ----------------------------------------------------------------------
 * This file is part of the WISEBED project.
 * Copyright (C) 2009 by the Institute of Telematics, University of Luebeck
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the BSD License. Refer to bsd-licence.txt
 * file in the root of the source tree for further details.
 ------------------------------------------------------------------------*/

#include <isense/isense_memory.h>
#include <isense/uart.h>
#include <isense/util/util.h>
#include <isense/protocols/routing/flooding.h>
#include "Communication.h"
#include "roombatest.h"
#include "RobotLogic.h"

static uint16 BROADCAST = 0;
static uint16 GUI_ID = 0;
static uint8 messageId = 0;

Communication::Communication(isense::Os& os) :
	m_os(os) {
}

Communication::~Communication() {
}

//int sensorLength, String[] sensors, int[] sensorRange

void Communication::sendFeatures(uint16 robotId, uint8 taskListLength,
		const char ** taskList, const uint8 * paramListLength,
		const char *** paramList, uint8 sensorLength, char ** sensors,
		uint8 * sensorRange) {

	uint8 buf[500];
	uint8 len = 2 + taskListLength + sensorLength * 2;
	for (int i = 0; i < taskListLength; ++i) {
		//calculate amount of bytes we need for the task list.
		uint8 tmp = strlen(taskList[i]) + 1;
		len += tmp;
		for (int j = 0; j < paramListLength[i]; ++j) {
			len += strlen(paramList[i][j]) + 1;
		}
	}
	for (int i = 0; i < sensorLength; ++i) {
		//calculate amount of bytes we need for the sensor list.
		len += strlen(sensors[i]) + 1;
	}

	buf[0] = taskListLength;

	int pos = 1;
	for (int i = 0; i < taskListLength; ++i) {
		buf[pos++] = paramListLength[i];
	}

	buf[pos++] = sensorLength;

	for (int i = 0; i < sensorLength; ++i) {
		buf[pos++] = sensorRange[i * 2];
		buf[pos++] = sensorRange[i * 2 + 1];
	}

	for (int i = 0; i < taskListLength; ++i) {
		int str_len = strlen(taskList[i]);
		memcpy(&buf[pos], taskList[i], str_len);
		buf[pos + str_len] = '\0';
		pos += str_len + 1;
	}

	for (int i = 0; i < taskListLength; ++i) {
		for (int j = 0; j < paramListLength[i]; ++j) {
			int str_len = strlen(paramList[i][j]);
			memcpy(&buf[pos], paramList[i][j], str_len);
			buf[pos + str_len] = '\0';
			pos += str_len + 1;
		}
	}
	for (int i = 0; i < sensorLength; ++i) {
		int str_len = strlen(sensors[i]);
		memcpy(&buf[pos], sensors[i], str_len);
		buf[pos + str_len] = '\0';
		pos += str_len + 1;
	}



	Flooding& flooding = ((roombatest *) m_os.application())->getFlooding();
	uint8 allowedMessageLength = 80 - 6;
	uint8 amountMessages = len / allowedMessageLength + 1;
	uint8 sendBuf[80];
	for (int i = 0; i < amountMessages; ++i) {
		sendBuf[0] = 203;
		sendBuf[1] = robotId >> 8;
		sendBuf[2] = robotId;
		sendBuf[3] = getActualMessageId();
		sendBuf[4] = amountMessages;
		sendBuf[5] = i;
		memcpy(sendBuf + 6, buf + allowedMessageLength * i,
				allowedMessageLength);
		if (i == amountMessages - 1) {
			flooding.send(6 + len - allowedMessageLength * i, sendBuf);
			m_os.busy_wait(3);
		} else {
			flooding.send(allowedMessageLength + 6, sendBuf);
			m_os.busy_wait(3);

		}
	}
	incActualMessageId();
}

void Communication::sendMessage(uint16 robotId, uint16 destId,
		const char * taskName, uint8 valueLength, const uint16 * values) {
	uint8 taskNameLen = strlen(taskName);
	uint8 len = 8 + taskNameLen + valueLength * 2;
	uint8 buf[128];
	if (len < 112) {
		uint8 pos = 6;

		buf[0] = 202;
		buf[1] = robotId >> 8;
		buf[2] = robotId;
		buf[3] = destId >> 8;
		buf[4] = destId;
		buf[5] = valueLength;
		for (int i = 0; i < valueLength; ++i) {
			buf[pos + 2* i ] = values[i] >> 8;
			buf[pos + 2* i + 1] = values[i];
		}
		for (int j = 0; j < taskNameLen; ++j) {
			buf[pos + 2 * valueLength + j] = taskName[j];
		}
		buf[len - 1] = '\0';
		Flooding& flooding = ((roombatest *) m_os.application())->getFlooding();
		flooding.send(len, buf);
	}
}

void Communication::decodeMessage(uint8 len, const uint8 * buf) {
	RobotLogic* logic;
	logic = ((roombatest *) m_os.application())->getRobotLogic();
	uint16 destination;
	switch (buf[0]) {
	case 200:
		destination = (buf[1] << 8) | buf[2];
		if (destination == m_os.id() || destination == BROADCAST) {
			uint8 paramLength;
			uint16 *parameters;
			const char *taskName;

			paramLength = buf[3];
			parameters
					= (uint16 *) isense::malloc(sizeof(uint16) * paramLength);

			for (int i = 0; i < paramLength; ++i) {
				parameters[i] = (buf[4 + i*2] << 8) | buf[4 + i*2 + 1];
			}

			taskName = (char *) buf + 4 + paramLength * 2;

			logic->doTask(taskName, paramLength, parameters);

			isense::free(parameters);
		}
		break;
	case 201:
		logic->getCapabilities();
		break;
	case 202:
		destination = (buf[3] << 8) | buf[4];
		if (destination == GUI_ID) { //TODO Ueberlegen was fuer ne ID fuer die GUI
			m_os.uart(0).write_packet(isense::Uart::MESSAGE_TYPE_CUSTOM_IN_1,
					(char*) buf, len);
		} else if (destination == m_os.id()) {
			uint16 srcId;
			uint8 valueLength;
			uint16 *values;
			const char *taskName;

			srcId = (buf[1] << 8) | buf[2];
			valueLength = buf[5];
			values = (uint16 *) isense::malloc(sizeof(uint16) * valueLength);

			for(int i = 0; i < valueLength; ++i) {
				values[i] = (buf[6 + i*2] << 8) | buf[6 + i*2 + 1];
			}

			taskName = (char *) buf + 6 + valueLength * 2;

			//TODO hier die Methode die bei sendMessage aufgerufen wird
			// logic->doMessage(uint16 srcId, uint8 valueLength, uint16 values, char* taskName);

			isense::free(values);
		}
		break;
	case 203:
		m_os.uart(0).write_packet(isense::Uart::MESSAGE_TYPE_CUSTOM_IN_1,
				(char*) buf, len);
		break;
	default:
		break;
	}
}

uint8 Communication::getActualMessageId() {
	return messageId;
}

void Communication::incActualMessageId() {
	messageId++;
}

