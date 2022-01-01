#ifndef __REGISTER_GENERAL_ACCUMULATOR_H__
#define __REGISTER_GENERAL_ACCUMULATOR_H__
#include "General16.h"
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

#define AX general::Accumulator::GetInstance()

#endif