#ifndef __X86_IMMEDIATE_SIGNED_32_H__
#define __X86_IMMEDIATE_SIGNED_32_H__
#include <cstdint>
#include "Immediate32.h"
namespace immediate {
	class ImmediateSigned32 : public Immediate32 {
	public:
		explicit ImmediateSigned32(int32_t value);
	};
}

#endif