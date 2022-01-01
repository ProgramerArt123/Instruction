#ifndef __X86_REGISTER_OFFSET_STACK_H__
#define __X86_REGISTER_OFFSET_STACK_H__
#include "Offset.h"
namespace offset
{
	class Stack : public Offset {
	public:
		static Stack &GetInstance();
	private:
		explicit Stack();
	};
}

#define SP offset::Stack::GetInstance()

#endif