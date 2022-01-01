#ifndef __X86_REGISTER_GENERAL_ACCUMULATOR_HIGH_H__
#define __X86_REGISTER_GENERAL_ACCUMULATOR_HIGH_H__
#include "General8.h"
namespace general
{
	class AccumulatorHigh : public General8 {
	public:
		static AccumulatorHigh &GetInstance();
	private:
		explicit AccumulatorHigh();
	};
}

#define AH AccumulatorHigh::GetInstance()

#endif