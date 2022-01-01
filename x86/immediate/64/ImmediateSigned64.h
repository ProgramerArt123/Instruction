#ifndef __X86_IMMEDIATE_64_IMMEDIATE_SIGNED_64_H__
#define __X86_IMMEDIATE_64_IMMEDIATE_SIGNED_64_H__
#include <cstdint>
#include "Immediate64.h"
namespace x86
{
	namespace immediate
	{
		namespace size64
		{
			class ImmediateSigned64 : public Immediate64 {
			public:
				explicit ImmediateSigned64(int64_t value);
			};
		}
	}
}

#endif