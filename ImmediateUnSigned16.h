#ifndef __IMMEDIATE_UNSIGNED_16_H__
#define __IMMEDIATE_UNSIGNED_16_H__
#include <cstdint>
#include "Immediate16.h"

class ImmediateUnSigned16 : public Immediate16 {
public:
	explicit ImmediateUnSigned16(uint16_t value);
};

#endif