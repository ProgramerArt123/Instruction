#ifndef __X86_REGISTER_OFFSET_STACK_H__
#define __X86_REGISTER_OFFSET_STACK_H__
#include "Offset16.h"
namespace x86
{
	namespace reg
	{
		namespace offset
		{
			class Stack : public Offset16 {
			public:
				static Stack &GetInstance();
			private:
				explicit Stack();
			};
		}
	}
}

#define SP x86::reg::offset::Stack::GetInstance()

#endif