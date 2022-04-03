#ifndef __X86_REGISTER_FPU_DATA_H__
#define __X86_REGISTER_FPU_DATA_H__
#include "x86/register/Register.h"
namespace x86
{
	namespace reg
	{
		namespace FPU
		{
			class Data : public Register {
			protected:
				explicit Data();
			};
		}
	}
}


#endif