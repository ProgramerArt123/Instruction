#ifndef __X86_IMMEDIATE_UNSIGNED_8_H__
#define __X86_IMMEDIATE_UNSIGNED_8_H__
#include <cstdint>
#include "Immediate8.h"
namespace x86
{
	namespace immediate {
		class ImmediateUnSigned8 : public Immediate8 {
		public:
			explicit ImmediateUnSigned8(uint8_t value);
		};
	}
}
#endif