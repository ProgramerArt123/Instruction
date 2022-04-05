#ifndef __X86_REGISTER_CLASSIC_OFFSET_STACK_LOW_H__
#define __X86_REGISTER_CLASSIC_OFFSET_STACK_LOW_H__
#include "Offset8.h"
namespace x86
{
	namespace reg
	{
		namespace classic
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

#define SPL x86::reg::classic::offset::StackLow::GetInstance()

#endif