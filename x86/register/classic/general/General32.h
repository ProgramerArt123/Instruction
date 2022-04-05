#ifndef __X86_REGISTER_CLASSIC_GENERAL_32_H__
#define __X86_REGISTER_CLASSIC_GENERAL_32_H__
#include "General.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class General32 : public General {
				protected:
					explicit General32();
				};
			}
		}
	}
}
#endif