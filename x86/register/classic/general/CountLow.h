#ifndef __X86_REGISTER_CLASSIC_GENERAL_COUNT_LOW_H__
#define __X86_REGISTER_CLASSIC_GENERAL_COUNT_LOW_H__
#include "General8.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class CountLow : public General8 {
				public:
					static CountLow &GetInstance();
				private:
					explicit CountLow();
				};
			}
		}
	}
}

#define CL x86::reg::classic::general::CountLow::GetInstance()

#endif