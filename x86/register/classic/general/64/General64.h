#ifndef __X86_REGISTER_CLASSIC_GENERAL_64_GENERAL_64_H__
#define __X86_REGISTER_CLASSIC_GENERAL_64_GENERAL_64_H__
#include "x86/register/classic/general/General.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace size64
				{
					class General64 : public general::General {
					protected:
						explicit General64();
					};
				}
			}
		}
	}
}
#endif