#ifndef __DATA_H__
#define __DATA_H__
#include "Segment.h"
class Data : public Segment {
public:
	static Data &GetInstance();
private:
	explicit Data();
};

#define DS Data::GetInstance()

#endif