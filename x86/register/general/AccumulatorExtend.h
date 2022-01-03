#ifndef __X86_REGISTER_GENERAL_ACCUMULATOR_EXTEND_H__
#define __X86_REGISTER_GENERAL_ACCUMULATOR_EXTEND_H__
#include "General32.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class Accumulator;
			class AccumulatorExtend : public General32 {
			public:
				static AccumulatorExtend &GetInstance();
			private:
				explicit AccumulatorExtend();
				Accumulator &m_low;
			};
		}
	}
}

#define EAX x86::reg::general::AccumulatorExtend::GetInstance()

#endif