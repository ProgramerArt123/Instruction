#ifndef __X86_REGISTER_OFFSET_H__
#define __X86_REGISTER_OFFSET_H__
#include "x86/register/Register.h"
namespace x86
{
	namespace reg
	{
		namespace offset
		{
			class Offset : public Register {
			public:
				explicit Offset();

			};
		}
	}
}

#endif