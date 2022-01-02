#ifndef __ACCUMULATOR_HIGH_H__
#define __ACCUMULATOR_HIGH_H__
#include "General8.h"
class AccumulatorHigh : public General8 {
public:
	static AccumulatorHigh &GetInstance();
private:
	explicit AccumulatorHigh();
};

#define AH AccumulatorHigh::GetInstance()

#endif