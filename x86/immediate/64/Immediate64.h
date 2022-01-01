#ifndef __X86_IMMEDIATE_64_IMMEDIATE_64_H__
#define __X86_IMMEDIATE_64_IMMEDIATE_64_H__
#include <cstdint>
#include "x86/immediate/Immediate.h"
namespace x86
{
	namespace immediate
	{
		namespace size64
		{
			class Immediate64 : public Immediate {
			protected:
				explicit Immediate64();
			};
		}
	}
}

#endif