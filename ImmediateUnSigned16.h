#ifndef __IMMEDIATE_UNSIGNED_16_H__
#define __IMMEDIATE_UNSIGNED_16_H__
#include <cstdint>
#include "Immediate.h"

class ImmediateUnSigned16 : public Immediate {
public:
	explicit ImmediateUnSigned16(uint16_t value);
};

#endif