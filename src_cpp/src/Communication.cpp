/*
 * Communication.cpp
 *
 *  Created on: 04.06.2009
 *      Author: Administrator
 */

#include <isense/isense_memory.h>
#include <isense/uart.h>
#include <isense/util/util.h>
#include <Communication.h>
#include <TestCom.cpp>

Communication::Communication(isense::Os& os) :
	m_os(os) {
}

Communication::~Communication() {
}

void Communication::sendFeatures(uint16 robotId, uint8 taskListLength,
		const char ** taskList, const uint8 * paramListLength,
		const char *** paramList) {
	uint8 len = 4 + taskListLength;
	uint8 taskListCharLen = 0;
	for (int i = 0; i < taskListLength; ++i) {
		//calculate amount of bytes we need for the task list.
		uint8 tmp = strlen(taskList[i]) + 1;
		len += tmp;
		taskListCharLen += tmp;

		for (int j = 0; j < paramListLength[i]; ++j) {
			len += strlen(paramList[i][j]) + 1;
		}
	}
	if (len < 255) {
		uint8 buf[len];
		buf[0] = 3;
		buf[1] = robotId >> 8;
		buf[2] = robotId;
		buf[3] = taskListLength;
		for (int i = 0; i < taskListLength; ++i) {
			buf[4 + i] = paramListLength[i];
			uint8 stringLength1 = strlen(taskList[i]);
			for (int j = 0; j < stringLength1; ++j) {
				buf[4 + taskListLength + i + j] = taskList[i][j];
			}
			buf[4 + taskListLength + i + stringLength1 + 1] = '\r';

			for (int h = 0; h < paramListLength[i]; ++h) {
				uint8 stringLength2 = strlen(paramList[i][h]);
				for (int k = 0; k < stringLength2; ++k) {
					buf[4 + taskListLength + taskListCharLen + i + h + k]
							= paramList[i][h][k];
				}
				buf[4 + taskListLength + i + stringLength2 + 1] = '\r';
			}
		}
		Flooding* flooding;
		flooding = ((TestCom *) m_os.application())->getFlooding();
		flooding->send(len, buf);
	}
}

void Communication::sendMessage(uint16 robotId, const char * taskName,
		uint8 valueLength, const uint16 * values) {
	uint8 taskNameLen = strlen(taskName);
	uint8 len = 3 + taskNameLen + 1 + valueLength * 2;
	if (len < 255) {
		uint8 buf[len];
		buf[0] = 2;
		buf[1] = robotId >> 8;
		buf[2] = robotId;
		buf[3] = valueLength;
		for (int i = 0; i < valueLength; ++i) {
			buf[4 + 2* i ] = values[i] >> 8;
			buf[4 + 2* i + 1] = values[i];
		}
		for (int j = 0; j < taskNameLen; ++j) {
			buf[4 + 2* valueLength ] = taskName[j];
		}
		Flooding* flooding;
		flooding = ((TestCom *) m_os.application())->getFlooding();
		flooding->send(len, buf);
	}
}

void Communication::decodeMessage(uint8 len, const uint8 * buf) {
	Skeleton* skeleton;
	skeleton = ((TestCom *) m_os.application())->getSkeleton();
	switch (buf[0]) {
	case 0:
		uint8 paramLength;
		uint16 *parameters;
		const char *taskName;

		paramLength = buf[3];
		parameters = (uint16 *) isense::malloc(sizeof(uint16) * paramLength);

		for (int i = 0; i < paramLength; i = i + 2) {
			parameters[i] = (buf[4 + i] << 8) | buf[4 + i + 1];
		}

		taskName = (char *) buf[4 + paramLength];

		m_os.debug("vorher");
		m_os.debug("taskName = %s", taskName);
		m_os.debug("nachher");

		skeleton->doTask(taskName, paramLength, parameters);

		isense::free(parameters);
		break;
	case 1:
		skeleton->showMeWhatYouGot();
		break;
	case 2:

		m_os.uart(0).write_packet(isense::Uart::MESSAGE_TYPE_CUSTOM_IN_1,
				(char*) buf, len);
		break;
	case 3:
		m_os.uart(0).write_packet(isense::Uart::MESSAGE_TYPE_CUSTOM_IN_1,
				(char*) buf, len);
		break;
	default:
		break;
	}
}

