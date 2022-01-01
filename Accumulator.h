#ifndef __ACCUMULATOR_H__
#define __ACCUMULATOR_H__
#include "Data.h"
class AccumulatorLow;
class AccumulatorHigh;
class Accumulator : public Data {
public:
	static Accumulator &GetInstance();
private:
	explicit Accumulator();
	AccumulatorLow &m_low;
	AccumulatorHigh &m_high;
};

#define AX Accumulator::GetInstance()

#endif