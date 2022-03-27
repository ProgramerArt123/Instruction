#ifndef __X86_REGISTER_OFFSET_ADDRESS_32_H__
#define __X86_REGISTER_OFFSET_ADDRESS_32_H__
#include "Offset32.h"
namespace x86
{
	namespace reg
	{
		namespace offset
		{
			class Address32 : public Offset32 {
			protected:
				explicit Address32();
			};
		}
	}
}

#endif