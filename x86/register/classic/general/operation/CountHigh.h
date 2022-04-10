#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_COUNT_HIGH_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_COUNT_HIGH_H__
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
					class CountHigh : public Operation8 {
					public:
						static CountHigh &GetInstance();
					private:
						explicit CountHigh();
					};
				}
			}
		}
	}
}

#define CH x86::reg::classic::general::operation::CountHigh::GetInstance()

#endif