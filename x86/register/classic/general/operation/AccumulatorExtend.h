#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_ACCUMULATOR_EXTEND_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_ACCUMULATOR_EXTEND_H__
#include "Operation32.h"
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
					class Accumulator;
					class AccumulatorExtend : public Operation32 {
					public:
						static AccumulatorExtend &GetInstance();
					private:
						explicit AccumulatorExtend();
						Accumulator &m_low;
					};
				}
			}
		}
	}
}

#define EAX x86::reg::classic::general::operation::AccumulatorExtend::GetInstance()

#endif