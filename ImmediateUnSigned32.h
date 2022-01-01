#ifndef __IMMEDIATE_UNSIGNED_32_H__
#define __IMMEDIATE_UNSIGNED_32_H__
#include <cstdint>
#include "Immediate.h"

class ImmediateUnSigned32 : public Immediate {
public:
	explicit ImmediateUnSigned32(uint32_t value);
};

#endif