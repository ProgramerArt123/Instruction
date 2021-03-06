#ifndef __X86_REGISTER_CLASSIC_GENERAL_OFFSET_BASE_LOW_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OFFSET_BASE_LOW_H__
#include "Offset8.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace offset
				{
					class BaseLow : public Offset8 {
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

#define BPL x86::reg::classic::general::offset::BaseLow::GetInstance()

#endif