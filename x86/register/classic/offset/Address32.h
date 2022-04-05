#ifndef __X86_REGISTER_CLASSIC_OFFSET_ADDRESS_32_H__
#define __X86_REGISTER_CLASSIC_OFFSET_ADDRESS_32_H__
#include "Offset32.h"
namespace x86
{
	namespace reg
	{
		namespace classic
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
}

#endif