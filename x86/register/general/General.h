#ifndef __X86_REGISTER_GENERAL_H__
#define __X86_REGISTER_GENERAL_H__
#include "x86/register/Register.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class General : public Register {
			protected:
				explicit General();

			};
		}
	}
}
#endif