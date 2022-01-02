#ifndef __ACCUMULATOR_H__
#define __ACCUMULATOR_H__
#include "Data16.h"
class AccumulatorLow;
class AccumulatorHigh;
class Accumulator : public Data16 {
public:
	static Accumulator &GetInstance();
private:
	explicit Accumulator();
	AccumulatorLow &m_low;
	AccumulatorHigh &m_high;
};

#define AX Accumulator::GetInstance()

#endif