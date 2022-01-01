#ifndef __X86_IMMEDIATE_SIGNED_16_H__
#define __X86_IMMEDIATE_SIGNED_16_H__
#include <cstdint>
#include "Immediate16.h"
namespace x86
{
	namespace immediate {
		class ImmediateSigned16 : public Immediate16 {
		public:
			explicit ImmediateSigned16(int16_t value);
		};
	}
}

#endif