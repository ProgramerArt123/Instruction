#ifndef __ACCUMULATOR_HIGH_H__
#define __ACCUMULATOR_HIGH_H__
#include "Data8.h"
class AccumulatorHigh : public Data8 {
public:
	static AccumulatorHigh &GetInstance();
private:
	explicit AccumulatorHigh();
};

#define AH AccumulatorHigh::GetInstance()

#endif