#ifndef __X86_IMMEDIATE_32_H__
#define __X86_IMMEDIATE_32_H__
#include <cstdint>
#include "Immediate.h"
namespace immediate {
	class Immediate32 : public Immediate {
	protected:
		explicit Immediate32();
	};
}

#endif