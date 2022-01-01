#ifndef __IMMEDIATE_UNSIGNED_8_H__
#define __IMMEDIATE_UNSIGNED_8_H__
#include <cstdint>
#include "Immediate.h"

class ImmediateUnSigned8 : public Immediate {
public:
	explicit ImmediateUnSigned8(uint8_t value);
};

#endif