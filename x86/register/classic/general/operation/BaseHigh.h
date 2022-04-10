#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_BASE_HIGH_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_BASE_HIGH_H__
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
					class BaseHigh : public Operation8 {
					public:
						static BaseHigh &GetInstance();
					private:
						explicit BaseHigh();
					};
				}
			}
		}
	}
}

#define BH x86::reg::classic::general::operation::BaseHigh::GetInstance()

#endif