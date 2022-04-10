#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_COUNT_LOW_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_COUNT_LOW_H__
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
					class CountLow : public Operation8 {
					public:
						static CountLow &GetInstance();
					private:
						explicit CountLow();
					};
				}
			}
		}
	}
}

#define CL x86::reg::classic::general::operation::CountLow::GetInstance()

#endif