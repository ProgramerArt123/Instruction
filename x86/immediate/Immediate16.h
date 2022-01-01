#ifndef __X86_IMMEDIATE_16_H__
#define __X86_IMMEDIATE_16_H__
#include <cstdint>
#include "Immediate.h"
namespace immediate {
	class Immediate16 : public Immediate {
	protected:
		explicit Immediate16();
	};
}

#endif