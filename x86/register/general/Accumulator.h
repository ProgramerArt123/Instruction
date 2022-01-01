#ifndef __X86_REGISTER_GENERAL_ACCUMULATOR_H__
#define __X86_REGISTER_GENERAL_ACCUMULATOR_H__
#include "General16.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class AccumulatorLow;
			class AccumulatorHigh;
			class Accumulator : public General16 {
			public:
				static Accumulator &GetInstance();
			private:
				explicit Accumulator();
				AccumulatorLow &m_low;
				AccumulatorHigh &m_high;
			};
		}
	}
}

#define AX x86::reg::general::Accumulator::GetInstance()

#endif