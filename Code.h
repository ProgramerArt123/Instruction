#ifndef __CODE_H__
#define __CODE_H__
#include "Segment.h"
class Code : public Segment {
public:
	static Code &GetInstance();
private:
	explicit Code();
};

#define CS Code::GetInstance()

#endif