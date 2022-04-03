#ifndef __X86_REGISTER_FPU_DATA_STACK_TOP_0_H__
#define __X86_REGISTER_FPU_DATA_STACK_TOP_0_H__
#include "Data.h"
namespace x86
{
	namespace reg
	{
		namespace FPU
		{
			class StackTop0 : public Data {
			public:
				static StackTop0 &GetInstance();
			private:
				explicit StackTop0();
			};
		}
	}
}

#define ST0 x86::reg::FPU::StackTop0::GetInstance()

#endif