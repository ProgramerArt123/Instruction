#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_BASE_LOW_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_BASE_LOW_H__
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
					class BaseLow : public Operation8 {
					public:
						static BaseLow &GetInstance();
					private:
						explicit BaseLow();
					};
				}
			}
		}
	}
}

#define BL x86::reg::classic::general::operation::BaseLow::GetInstance()

#endif