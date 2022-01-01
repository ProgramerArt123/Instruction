#ifndef __IMMEDIATE_UNSIGNED_64_H__
#define __IMMEDIATE_UNSIGNED_64_H__
#include <cstdint>
#include "../Immediate.h"
namespace size64
{
	class ImmediateUnSigned64 : public Immediate {
	public:
		explicit ImmediateUnSigned64(uint64_t value);
	};
}
#endif