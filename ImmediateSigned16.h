#ifndef __IMMEDIATE_SIGNED_16_H__
#define __IMMEDIATE_SIGNED_16_H__
#include <cstdint>
#include "Immediate.h"

class ImmediateSigned16 : public Immediate {
public:
	explicit ImmediateSigned16(int16_t value);
};

#endif