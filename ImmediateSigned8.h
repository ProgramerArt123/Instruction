#ifndef __IMMEDIATE_SIGNED_8_H__
#define __IMMEDIATE_SIGNED_8_H__
#include <cstdint>
#include "Immediate.h"

class ImmediateSigned8 : public Immediate {
public:
	explicit ImmediateSigned8(int8_t value);
};

#endif