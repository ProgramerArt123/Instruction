#ifndef __EXTRA_H__
#define __EXTRA_H__
#include "Segment.h"
class Extra : public Segment {
public:
	static Extra &GetInstance();
private:
	explicit Extra();
};

#define ES Extra::GetInstance()

#endif