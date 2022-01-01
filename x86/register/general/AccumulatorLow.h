#ifndef __X86_REGISTER_GENERAL_ACCUMULATOR_LOW_H__
#define __X86_REGISTER_GENERAL_ACCUMULATOR_LOW_H__
#include "General8.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class AccumulatorLow : public General8 {
			public:
				static AccumulatorLow &GetInstance();
			private:
				explicit AccumulatorLow();
			};
		}
	}
}

#define AL x86::reg::general::AccumulatorLow::GetInstance()

#endif