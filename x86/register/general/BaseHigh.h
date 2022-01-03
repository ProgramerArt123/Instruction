#ifndef __X86_REGISTER_GENERAL_BASE_HIGH_H__
#define __X86_REGISTER_GENERAL_BASE_HIGH_H__
#include "General8.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class BaseHigh : public General8 {
			public:
				static BaseHigh &GetInstance();
			private:
				explicit BaseHigh();
			};
		}
	}
}

#define BH x86::reg::general::BaseHigh::GetInstance()

#endif