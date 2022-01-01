#ifndef __STACK_H__
#define __STACK_H__
#include "Segment.h"
class Stack : public Segment {
public:
	static Stack &GetInstance();
private:
	explicit Stack();
};

#define SS Stack::GetInstance()

#endif