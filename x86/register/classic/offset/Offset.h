#ifndef __X86_REGISTER_CLASSIC_OFFSET_H__
#define __X86_REGISTER_CLASSIC_OFFSET_H__
#include "x86/register/Register.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace offset
			{
				class Offset : public Register {
				protected:
					explicit Offset();

				};
			}
		}
	}
}

#endif