#ifndef __X86_REGISTER_GENERAL_COUNT_HIGH_H__
#define __X86_REGISTER_GENERAL_COUNT_HIGH_H__
#include "General8.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class CountHigh : public General8 {
			public:
				static CountHigh &GetInstance();
			private:
				explicit CountHigh();
			};
		}
	}
}

#define CH x86::reg::general::CountHigh::GetInstance()

#endif