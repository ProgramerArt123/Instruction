#ifndef __ACCUMULATOR_EXTEND_H__
#define __ACCUMULATOR_EXTEND_H__
#include "General32.h"
class Accumulator;
class AccumulatorExtend : public General32 {
public:
	static AccumulatorExtend &GetInstance();
private:
	explicit AccumulatorExtend();
	Accumulator &m_low;
};

#define EAX AccumulatorExtend::GetInstance()

#endif