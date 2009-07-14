/* ----------------------------------------------------------------------
 * This file is part of the WISEBED project.
 * Copyright (C) 2009 by the Institute of Telematics, University of Luebeck
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the BSD License. Refer to bsd-licence.txt
 * file in the root of the source tree for further details.
------------------------------------------------------------------------*/

/*
 * Communication.h
 *
 *  Created on: 04.06.2009
 *      Author: Moehlmann, Schneider, Witt
 */

#ifndef __OCPROJ_COMMUNICATION_H
#define __OCPROJ_COMMUNICATION_H

#include <isense/os.h>
#include <isense/protocols/routing/flooding.h>

static uint16 BROADCAST = 0;
static uint16 GUI_ID = 0;

typedef enum {
  ISENSE_RADIO_PACKET_TYPE_DO_TASK = 200,					/**<  Used to send a task from the GUI to a roboter */
  ISENSE_RADIO_PACKET_TYPE_SHOW_ME_WHAT_YOU_GOT = 201,		/**<  Used from the GUI to get all information of all roboters */
  ISENSE_RADIO_PACKET_TYPE_SEND_MESSAGE = 202,				/**<  Used to send a message to another roboter or to the GUI */
  ISENSE_RADIO_PACKET_TYPE_SEND_FEATURES = 203				/**<  Used to send the features of a roboter to the GUI */
} packet_types;

class Communication {
public:
	Communication(isense::Os& os);
	virtual ~Communication();
	/*
	 * If "showMeWhatYouGot" is send, this method should be called to send the answer. It decodes the parameters and splits the message if necessary. After that the message is flooded over the network.
	 *
	 * @param robotId The ID of this robot
	 * @param taskListLength The amount of tasks
	 * @param taskList The name of the tasks
	 * @param paramListLength The amount of parameters per task
	 * @param paramList The name of each parameter. (In the following order: task1_param1, task1_param2, task2_param1...)
	 * @param sensorLength The amount of sensors
	 * @param sensors The name of the sensors
	 * @param sensorRange The range limitations of each sensor. (In the following order: sensor1_min, sensor1_max, sensor2_min...)
	 */
	void sendFeatures(uint16 robotId, uint8 taskListLength, const char ** taskList,
			const uint8 * paramListLength, const char ***  paramList, uint8 sensorLength, char ** sensors, uint8 * sensorRange);

	/*
	 * This method to send messages to other robots or the GUI.
	 *
	 * @param robotId The ID of this robot
	 * @param destId The destination ID. If it is a robot, use the wished robotID else use the universal GUI-ID
	 * @param taskName The name of the answering task
	 * @param valueLength The amount of values
	 * @param values The values which belong to the task
	 */
	void sendMessage(uint16 robotId, uint16 destId,  const char * taskName, uint8 valueLength,
			const uint16 * values);

	/*
	 * This method is called when a new message is received. It checks which method should be called and decodes each parameter.
	 *
	 * @param len The length of the retrieved message
	 * @param buf The message itself
	 */
	void decodeMessage(uint8 len, const uint8 * buf);


private:
	isense::Os& m_os;

	/*
	 * Gives the index of the current message index
	 *
	 * @return message-Index
	 */
	uint8 getActualMessageId();

	/*
	 * Increases the message index by one
	 */
	void incActualMessageId();
};

static uint8 messageId = 0; //Used to identify splited messages

#endif /* __OCPROJ_COMMUNICATION_H */
