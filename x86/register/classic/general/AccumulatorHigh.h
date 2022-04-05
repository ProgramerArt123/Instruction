#ifndef __X86_REGISTER_CLASSIC_GENERAL_ACCUMULATOR_HIGH_H__
#define __X86_REGISTER_CLASSIC_GENERAL_ACCUMULATOR_HIGH_H__
#include "General8.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class AccumulatorHigh : public General8 {
				public:
					static AccumulatorHigh &GetInstance();
				private:
					explicit AccumulatorHigh();
				};
			}
		}
	}
}

#define AH x86::reg::classic::general::AccumulatorHigh::GetInstance()

#endif