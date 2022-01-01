#ifndef __X86_IMMEDIATE_UNSIGNED_16_H__
#define __X86_IMMEDIATE_UNSIGNED_16_H__
#include <cstdint>
#include "Immediate16.h"
namespace x86
{
	namespace immediate {
		class ImmediateUnSigned16 : public Immediate16 {
		public:
			explicit ImmediateUnSigned16(uint16_t value);
		};
	}
} 

#endif