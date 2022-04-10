#ifndef __X86_REGISTER_CLASSIC_GENERAL_OFFSET_STACK_LOW_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OFFSET_STACK_LOW_H__
#include "Offset8.h"
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
					class StackLow : public Offset8 {
					public:
						static StackLow &GetInstance();
					private:
						explicit StackLow();
					};
				}
			}
		}
	}
}

#define SPL x86::reg::classic::general::offset::StackLow::GetInstance()

#endif