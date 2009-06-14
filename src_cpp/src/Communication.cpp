#include <isense/isense_memory.h>
#include <isense/uart.h>
#include <isense/util/util.h>
#include "Communication.h"
#include "roombatest.cpp"
#include "RobotLogic.h"

Communication::Communication(isense::Os& os) :
	m_os(os) {
}

Communication::~Communication() {
}


	/*DEMO wie man die Daten zum Beispiel uebergibt
			anders geht es nicht, weil c++ alle Groessen des Arrays ausser der ersten Groesse wissen will/muss
			Eure Testeingaben, funktionieren zwar beim ruebergeben, aber beim initialisieren, haengt er die Daten einfach an einander und erstellt gar kein 3D Dimensionales Array
			Deswegen koennen wir auch kein *paramList[][] erwarten, da sonst die Dimensionen fest stehen muessten, sprich so *paramList[2][2]

		uint8 taskListLength = 4;
		const char* taskList[]={"taska","taskb","taskc","taskd"};
		const char*** paramList;

		const uint8 paramListLength[]={2,2,0,0};

	#define STRING_MATRIX_NEW(len) ((const char ***)malloc(sizeof (const char **) * len))
	#define STRING_ARRAY_NEW(len) ((const char **)malloc(sizeof (const char *) * len))

		paramList = STRING_MATRIX_NEW (taskListLength);
		for (int i = 0; i < taskListLength; ++i)
			paramList[i] = STRING_ARRAY_NEW (paramListLength[i]);

		paramList[0][0] = "a-1";
		paramList[0][1] = "a-2";
		paramList[1][0] = "b-1";
		paramList[1][1] = "b-2";


		skeleton->sendFeatures(JennicOs::os_pointer()->id(), taskListLength, taskList, paramListLength, paramList);

		for (int i = 0; i < taskListLength; ++i)
			free (paramList[i]);
		free (paramList);
		*/


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

				buf[0] = 203;
				buf[1] = robotId >> 8;
				buf[2] = robotId;
				buf[3] = taskListLength;

				int pos = 4;

				for (int i = 0; i < taskListLength; ++i) {
					buf[pos++] = paramListLength[i];
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
				Flooding* flooding;
				flooding = ((roombatest *) m_os.application())->getFlooding();
				flooding->send(len, buf);
			}
}

void Communication::sendMessage(uint16 robotId, const char * taskName,
		uint8 valueLength, const uint16 * values) {
			uint8 taskNameLen = strlen(taskName);
			uint8 len = 4 + taskNameLen + 1 + valueLength * 2;
			if (len < 255) {
				uint8 buf[len];
				buf[0] = 202;
				buf[1] = robotId >> 8;
				buf[2] = robotId;
				buf[3] = valueLength;
				for (int i = 0; i < valueLength; ++i) {
					buf[4 + 2* i ] = values[i] >> 8;
					buf[4 + 2* i + 1] = values[i];
				}
				for (int j = 0; j < taskNameLen; ++j) {
					buf[4 + 2 * valueLength + j ] = taskName[j];
				}
				buf[len-1] = '\0';
				Flooding* flooding;
				flooding = ((roombatest *) m_os.application())->getFlooding();
				flooding->send(len, buf);
			}
}


void Communication::decodeMessage(uint8 len, const uint8 * buf) {
	RobotLogic* skeleton;
	skeleton = ((roombatest *) m_os.application())->getRobotLogic();
	switch (buf[0]) {
	case 200:
		uint8 paramLength;
		uint16 *parameters;
		const char *taskName;

		paramLength = buf[3];
		parameters = (uint16 *) isense::malloc(sizeof(uint16) * paramLength);

		for (int i = 0; i < paramLength*2; i = i + 2) {
			parameters[i] = (buf[4 + i] << 8) | buf[4 + i + 1];
		}

		taskName = (char *) buf+ 4 + paramLength*2;

//		m_os.debug("Buf[%i]: %c", )

		m_os.debug("vorher");
		m_os.debug("taskName = %s", taskName);
		m_os.debug("nachher");

		skeleton->doTask(taskName, paramLength, parameters);

		isense::free(parameters);
		break;
	case 201:
		skeleton->getCapabilities();
		break;
	case 202:

		m_os.uart(0).write_packet(isense::Uart::MESSAGE_TYPE_CUSTOM_IN_1,
				(char*) buf, len);
		break;
	case 203:
		m_os.uart(0).write_packet(isense::Uart::MESSAGE_TYPE_CUSTOM_IN_1,
				(char*) buf, len);
		break;
	default:
		break;
	}
}

