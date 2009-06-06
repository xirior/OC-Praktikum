/*
 * Skeleton.cpp
 *
 *  Created on: 02.06.2009
 *      Author: Administrator
 */

#include <Skeleton.h>
#include <Communication.h>
#include <TestCom.cpp>

Skeleton::Skeleton(isense::Os& os)
: m_os(os)
{
}

Skeleton::~Skeleton() {
	// TODO Auto-generated destructor stub
}

void Skeleton::showMeWhatYouGot()
{

}

void Skeleton::doTask(const char * taskName, uint8 paramLength, const uint16 * parameters)
{
}

void Skeleton::tempMethSendMessage()
{
	Communication* communication;
	communication = ((TestCom *) m_os.application())->getCommunication();

	//DEMO
	uint16 demoValues[2] = {1, 2};
	communication->sendMessage(uint16(123), "TestTask", 2, demoValues);
}

void Skeleton::tempMethSendFeatures()
{
	Communication* communication;
	communication = ((TestCom *) m_os.application())->getCommunication();

	//Funktion aufrufen wie oben, Strings bitte mit dem ueblichen "\0" beenden!!!

}
