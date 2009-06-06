/*
 * Skeleton.h
 *
 *  Created on: 02.06.2009
 *      Author: Administrator
 */
#include <isense/os.h>

#ifndef SKELETON_H_
#define SKELETON_H_

class Skeleton {
public:
	Skeleton(isense::Os& os);
	virtual ~Skeleton();

	void showMeWhatYouGot();
	void doTask(const char * taskName, uint8 paramLength, const uint16 * parameters);
	void tempMethSendMessage();
	void tempMethSendFeatures();

private:
	isense::Os& m_os;
};

#endif /* SKELETON_H_ */
