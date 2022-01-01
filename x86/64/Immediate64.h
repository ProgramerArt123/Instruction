#ifndef __IMMEDIATE_64_H__
#define __IMMEDIATE_64_H__
#include <cstdint>
#include "x86/immediate/Immediate.h"
namespace size64
{
	class Immediate64 : public immediate::Immediate {
	protected:
		explicit Immediate64();
	};
}
#endif