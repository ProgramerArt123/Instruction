#ifndef __X86_IMMEDIATE_UNSIGNED_32_H__
#define __X86_IMMEDIATE_UNSIGNED_32_H__
#include <cstdint>
#include "Immediate32.h"
namespace immediate {
	class ImmediateUnSigned32 : public Immediate32 {
	public:
		explicit ImmediateUnSigned32(uint32_t value);
	};
}

#endif