#ifndef __ACCUMULATOR_HIGH_H__
#define __ACCUMULATOR_HIGH_H__
#include "Data.h"
class AccumulatorHigh : public Data {
public:
	static AccumulatorHigh &GetInstance();
private:
	explicit AccumulatorHigh();
};

#define AH AccumulatorHigh::GetInstance()

#endif