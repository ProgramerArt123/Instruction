#ifndef __GENERAL_ACCUMULATOR_LOW_H__
#define __GENERAL_ACCUMULATOR_LOW_H__
#include "General8.h"
namespace general
{
	class AccumulatorLow : public General8 {
	public:
		static AccumulatorLow &GetInstance();
	private:
		explicit AccumulatorLow();
	};
}

#define AL general::AccumulatorLow::GetInstance()

#endif