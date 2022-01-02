#ifndef __ACCUMULATOR_LOW_H__
#define __ACCUMULATOR_LOW_H__
#include "General8.h"
class AccumulatorLow : public General8 {
public:
	static AccumulatorLow &GetInstance();
private:
	explicit AccumulatorLow();
};

#define AL AccumulatorLow::GetInstance()

#endif