#ifndef __X86_REGISTER_FPU_DATA_STACK_TOP_1_H__
#define __X86_REGISTER_FPU_DATA_STACK_TOP_1_H__
#include "Data.h"
namespace x86
{
	namespace reg
	{
		namespace FPU
		{
			class StackTop1 : public Data {
			public:
				static StackTop1 &GetInstance();
			private:
				explicit StackTop1();
			};
		}
	}
}

#define ST1 x86::reg::FPU::StackTop1::GetInstance()

#endif