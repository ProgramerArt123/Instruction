#ifndef __X86_REGISTER_CLASSIC_GENERAL_OFFSET_STACK_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OFFSET_STACK_H__
#include "Offset16.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
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
	}
}

#define SP x86::reg::classic::general::offset::Stack::GetInstance()

#endif