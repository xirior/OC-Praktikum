/* ----------------------------------------------------------------------
 * This file is part of the WISEBED project.
 * Copyright (C) 2009 by the Institute of Telematics, University of Luebeck
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the BSD License. Refer to bsd-licence.txt
 * file in the root of the source tree for further details.
------------------------------------------------------------------------*/

/*
 * roombatest.h
 *
 *  Created on: Jun 18, 2009
 *      Author: fraggy
 */

#ifndef __OCPROJ_ROOMBATEST_H_
#define __OCPROJ_ROOMBATEST_H_

#include <isense/application.h>
#include <isense/os.h>
#include <isense/dispatcher.h>
#include <isense/radio.h>
#include <isense/task.h>
#include <isense/timeout_handler.h>
#include <isense/isense.h>
#include <isense/uart.h>
#include <isense/dispatcher.h>
#include <isense/time.h>
#include <isense/sleep_handler.h>
#include <isense/modules/pacemate_module/pacemate_module.h>
#include <isense/util/util.h>
#include <isense/protocols/routing/flooding.h>
#include "Communication.h"
#include "RobotLogic.h"

#define MILLISECONDS 1000

using namespace isense;

class roombatest: public isense::Application,
		public isense::Receiver,
		public isense::Sender,
		public isense::Task,
		public isense::TimeoutHandler,
		public isense::SleepHandler,
		public isense::UartPacketHandler {
public:
	roombatest(isense::Os& os);

	virtual ~roombatest();

	///From isense::Application
	virtual void boot(void);

	///From isense::SleepHandler
	virtual bool stand_by(void); // Memory held

	///From isense::SleepHandler
	virtual bool hibernate(void); // Memory not held

	///From isense::SleepHandler
	virtual void wake_up(bool memory_held);

	///From isense::Receiver
	virtual void receive(uint8 len, const uint8 * buf, uint16 src_addr,
			uint16 dest_addr, uint16 lqi, uint8 seq_no, uint8 interface);

	///From isense::Sender
	virtual void confirm(uint8 state, uint8 tries, isense::Time time);

	///From isense::Task
	virtual void execute(void* userdata);

	///From isense::TimeoutHandler
	virtual void timeout(void* userdata);

	///From isense::UartPacketHandler
	virtual void handle_uart_packet(uint8 type, uint8* buf, uint8 length);

	RobotLogic* getRobotLogic();

	Communication* getCommunication();

	Flooding& getFlooding();

private:
	Flooding m_flooding;
	Communication m_comModule;
	Uart& ourUart_;
	RobotLogic m_robotLogic;
};

#endif /* __OCPROJ_ROOMBATEST_H_ */
