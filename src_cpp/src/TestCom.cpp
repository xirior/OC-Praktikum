/************************************************************************
 ** This file is part of the the iSense project.
 ** Copyright (C) 2006 coalesenses GmbH (http://www.coalesenses.com)
 ** ALL RIGHTS RESERVED.
 ************************************************************************/
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
#include <Skeleton.h>
#include <isense/protocols/routing/flooding.h>
#include <Communication.h>

#define MILLISECONDS 1000

//----------------------------------------------------------------------------
/**
 */
static uint16 BROADCAST = 0;

using namespace isense;

class TestCom: public isense::Application,
		public isense::Receiver,
		public isense::Sender,
		public isense::Task,
		public isense::TimeoutHandler,
		public isense::SleepHandler,
		public isense::UartPacketHandler {
public:
	TestCom(isense::Os& os);

	virtual ~TestCom();

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

	Skeleton* getSkeleton();

	Communication* getCommunication();

	Flooding* getFlooding();

private:
	Flooding flooding;
	Skeleton m_skeleton;
	Communication m_comModule;
};

//----------------------------------------------------------------------------
TestCom::TestCom(isense::Os& os) :
	isense::Application(os), flooding(os), m_skeleton(os), m_comModule(os) {
	os_.dispatcher().add_receiver(this);
	os_.uart(0).set_packet_handler(isense::Uart::MESSAGE_TYPE_CUSTOM_IN_1, this);
	os_.uart(0).enable_interrupt(true);
}

//----------------------------------------------------------------------------
TestCom::~TestCom()
{
}

//----------------------------------------------------------------------------
void TestCom::boot(void) {
	os_.allow_sleep(false);
	os_.add_timeout_in(Time(MILLISECONDS), this, NULL);
}

//----------------------------------------------------------------------------
bool TestCom::stand_by(void) {
	return true;
}

//----------------------------------------------------------------------------
bool TestCom::hibernate(void) {
	return false;
}

//----------------------------------------------------------------------------
void TestCom::wake_up(bool memory_held) {
}

void TestCom::execute(void* userdata) {
}

void TestCom::receive(uint8 len, const uint8 * buf, uint16 src_addr,
		uint16 dest_addr, uint16 lqi, uint8 seq_no, uint8 interface) {
	os_.debug("receive:");
	for (int i = 0; i < len; ++i) {
		os_.debug("buf[%d] = %d", i, buf[i]);
	}
	uint16 destination = (buf[1] << 8) | buf[2];
	if (destination == os_.id() || destination == BROADCAST) {
		m_comModule.decodeMessage(len, buf);
	}
}

void TestCom::confirm(uint8 state, uint8 tries, isense::Time time) {
}

void TestCom::timeout(void* userdata) {
	os_.add_task(this, NULL);
	os_.add_timeout_in(Time(MILLISECONDS), this, NULL);
}

void TestCom::handle_uart_packet(uint8 type, uint8* buf, uint8 length) {
	os_.debug("handle_uart_packet:");
	for (int i = 0; i < length; ++i) {
		os_.debug("  buf[%d] = %d", i, buf[i]);
	}
	os_.debug("");
	flooding.send(length, buf);

}

Skeleton* TestCom::getSkeleton()
{
	return &m_skeleton;
}

Communication* TestCom::getCommunication()
{
	return &m_comModule;
}

Flooding* TestCom::getFlooding()
{
	return &flooding;
}

isense::Application* application_factory(isense::Os& os) {
	return new TestCom(os);
}
