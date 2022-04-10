#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_ACCUMULATOR_LOW_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_ACCUMULATOR_LOW_H__
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
					class AccumulatorLow : public Operation8 {
					public:
						static AccumulatorLow &GetInstance();
					private:
						explicit AccumulatorLow();
					};
				}
			}
		}
	}
}

#define AL x86::reg::classic::general::operation::AccumulatorLow::GetInstance()

#endif