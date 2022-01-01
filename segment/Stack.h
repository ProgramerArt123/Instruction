#ifndef __STACK_H__
#define __STACK_H__
#include "Segment.h"
namespace segment
{
	class Stack : public Segment {
	public:
		static Stack &GetInstance();
	private:
		explicit Stack();
	};
}

#define SS segment::Stack::GetInstance()

#endif