#ifndef __X86_REGISTER_CLASSIC_OFFSET_STACK_EXTEND_H__
#define __X86_REGISTER_CLASSIC_OFFSET_STACK_EXTEND_H__
#include "Offset32.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace offset
			{
				class StackExtend : public Offset32 {
				public:
					static StackExtend &GetInstance();
				private:
					explicit StackExtend();
				};
			}
		}
	}
}

#define ESP x86::reg::classic::offset::StackExtend::GetInstance()

#endif