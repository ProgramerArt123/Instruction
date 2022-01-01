#ifndef __ACCUMULATOR_LOW_H__
#define __ACCUMULATOR_LOW_H__
#include "Data.h"
class AccumulatorLow : public Data {
public:
	static AccumulatorLow &GetInstance();
private:
	explicit AccumulatorLow();
};

#define AL AccumulatorLow::GetInstance()

#endif