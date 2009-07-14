/* ----------------------------------------------------------------------
 * This file is part of the WISEBED project.
 * Copyright (C) 2009 by the Institute of Telematics, University of Luebeck
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the BSD License. Refer to bsd-licence.txt
 * file in the root of the source tree for further details.
------------------------------------------------------------------------*/

#include "roombatest.h"


//----------------------------------------------------------------------------
roombatest::roombatest(isense::Os& os) :
	isense::Application(os),
	m_flooding(os),
//	m_skeleton(os),
	m_comModule(os),
	ourUart_(os_.uart(1)),
	m_robotLogic(os, &ourUart_, &m_comModule)
{
	os_.dispatcher().add_receiver(this);
	os_.uart(0).set_packet_handler(isense::Uart::MESSAGE_TYPE_CUSTOM_IN_1, this);
	os_.uart(0).enable_interrupt(true);
}

//----------------------------------------------------------------------------
roombatest::~roombatest()
{
}

//----------------------------------------------------------------------------
void roombatest::boot(void) {
	os_.allow_sleep(false);
//	os_.add_timeout_in(Time(5 * MILLISECONDS), this, NULL);
//    os_.set_log_mode(ISENSE_LOG_MODE_RADIO);
	os_.radio().hardware_radio().set_channel(20);
    os_.debug("Boot");
//    m_robotLogic.getCapabilities();
}

//----------------------------------------------------------------------------
bool roombatest::stand_by(void) {
	return true;
}

//----------------------------------------------------------------------------
bool roombatest::hibernate(void) {
	return false;
}

//----------------------------------------------------------------------------
void roombatest::wake_up(bool memory_held) {
}

void roombatest::execute(void* userdata) {
//	m_robotLogic.getCapabilities();
}

void roombatest::receive(uint8 len, const uint8 * buf, uint16 src_addr,
		uint16 dest_addr, uint16 lqi, uint8 seq_no, uint8 interface) {
	os_.debug("receive:");
	for (int i = 0; i < len; ++i) {
		os_.debug("buf[%d] = %d", i, buf[i]);
	}

	m_comModule.decodeMessage(len, buf);
}

void roombatest::confirm(uint8 state, uint8 tries, isense::Time time) {
}

void roombatest::timeout(void* userdata) {
	os_.add_task( this, NULL);
}

void roombatest::handle_uart_packet(uint8 type, uint8* buf, uint8 length) {
	os_.debug("handle_uart_packet:");
	for (int i = 0; i < length; ++i) {
		os_.debug("  buf[%d] = %d", i, buf[i]);
	}
	os_.debug("");
	m_flooding.send(length, buf);

}

RobotLogic* roombatest::getRobotLogic()
{
	return &m_robotLogic;
}

Communication* roombatest::getCommunication()
{
	return &m_comModule;
}

Flooding& roombatest::getFlooding()
{
	return m_flooding;
}

isense::Application* application_factory(isense::Os& os) {
	return new roombatest(os);
}
