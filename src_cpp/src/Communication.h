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
 *      Author: Administrator
 */
//ueberlegen, die methoden statisch zu machen

#ifndef __OCPROJ_COMMUNICATION_H
#define __OCPROJ_COMMUNICATION_H

#include <isense/os.h>
#include <isense/protocols/routing/flooding.h>

class Communication {
public:
	Communication(isense::Os& os);
	virtual ~Communication();

	void sendFeatures(uint16 robotId, uint8 taskListLength, const char ** taskList,
			const uint8 * paramListLength, const char ***  paramList, uint8 sensorLength, char ** sensors, uint8 * sensorRange);
	void sendMessage(uint16 robotId, uint16 destId,  const char * taskName, uint8 valueLength,
			const uint16 * values);
	void decodeMessage(uint8 len, const uint8 * buf);
	uint8 getActualMessageId();
	void incActualMessageId();

private:
	isense::Os& m_os;
};

#endif /* __OCPROJ_COMMUNICATION_H */
