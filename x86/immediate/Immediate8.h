#ifndef __X86_IMMEDIATE_8_H__
#define __X86_IMMEDIATE_8_H__
#include <cstdint>
#include "Immediate.h"
namespace x86
{
	namespace immediate {
		class Immediate8 : public Immediate {
		protected:
			explicit Immediate8();
		};
	}
}

#endif