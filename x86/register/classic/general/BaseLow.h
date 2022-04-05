#ifndef __X86_REGISTER_CLASSIC_GENERAL_BASE_LOW_H__
#define __X86_REGISTER_CLASSIC_GENERAL_BASE_LOW_H__
#include "General8.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class BaseLow : public General8 {
				public:
					static BaseLow &GetInstance();
				private:
					explicit BaseLow();
				};
			}
		}
	}
}

#define BL x86::reg::classic::general::BaseLow::GetInstance()

#endif