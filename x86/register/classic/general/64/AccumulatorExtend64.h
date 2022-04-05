#ifndef __X86_REGISTER_CLASSIC_GENERAL_64_ACCUMULATOR_EXTEND_64_H__
#define __X86_REGISTER_CLASSIC_GENERAL_64_ACCUMULATOR_EXTEND_64_H__
#include "General64.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class AccumulatorExtend;
		
				namespace size64
				{
					class AccumulatorExtend : public General64 {
					public:
						static AccumulatorExtend &GetInstance();
					private:
						explicit AccumulatorExtend();
						general::AccumulatorExtend &m_low;
					};
				}
			}
		}
	}
}
#define RAX x86::reg::classic::general::size64::AccumulatorExtend::GetInstance()

#endif