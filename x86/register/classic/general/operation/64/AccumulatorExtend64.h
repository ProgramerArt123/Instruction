#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_ACCUMULATOR_EXTEND_64_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_ACCUMULATOR_EXTEND_64_H__
#include "Operation64.h"
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
					class AccumulatorExtend;
		
					namespace size64
					{
						class AccumulatorExtend : public Operation64 {
						public:
							static AccumulatorExtend &GetInstance();
						private:
							explicit AccumulatorExtend();
							operation::AccumulatorExtend &m_low;
						};
					}
				}
			}
		}
	}
}
#define RAX x86::reg::classic::general::operation::size64::AccumulatorExtend::GetInstance()

#endif