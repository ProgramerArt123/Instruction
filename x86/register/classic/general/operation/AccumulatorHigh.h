#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_ACCUMULATOR_HIGH_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_ACCUMULATOR_HIGH_H__
#include "Operation8.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace operation
				{
					class AccumulatorHigh : public Operation8 {
					public:
						static AccumulatorHigh &GetInstance();
					private:
						explicit AccumulatorHigh();
					};
				}
			}
		}
	}
}

#define AH x86::reg::classic::general::operation::AccumulatorHigh::GetInstance()

#endif