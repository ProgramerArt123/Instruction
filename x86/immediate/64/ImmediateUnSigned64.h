#ifndef __X86_IMMEDIATE_64_IMMEDIATE_UNSIGNED_64_H__
#define __X86_IMMEDIATE_64_IMMEDIATE_UNSIGNED_64_H__
#include <cstdint>
#include "Immediate64.h"
namespace x86
{
	namespace immediate
	{
		namespace size64
		{
			class ImmediateUnSigned64 : public Immediate64 {
			public:
				explicit ImmediateUnSigned64(uint64_t value);
			};
		}
	}
}
#endif