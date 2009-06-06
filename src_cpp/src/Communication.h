/*
 * Communication.h
 *
 *  Created on: 04.06.2009
 *      Author: Administrator
 */
//ueberlegen, die methoden statisch zu machen

#include <isense/os.h>
#include <Skeleton.h>

#ifndef COMMUNICATION_H_
#define COMMUNICATION_H_

class Communication {
public:
	Communication(isense::Os& os);
	virtual ~Communication();

	void sendFeatures(uint16 robotId, uint8 taskListLength, const char ** taskList,
			const uint8 * paramListLength, const char ***  paramList);
	void sendMessage(uint16 robotId, const char * taskName, uint8 valueLength,
			const uint16 * values);
	void decodeMessage(uint8 len, const uint8 * buf);

private:
	isense::Os& m_os;
};

#endif /* COMMUNICATION_H_ */
