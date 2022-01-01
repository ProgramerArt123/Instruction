#ifndef __IMMEDIATE_SIGNED_32_H__
#define __IMMEDIATE_SIGNED_32_H__
#include <cstdint>
#include "Immediate.h"

class ImmediateSigned32 : public Immediate {
public:
	explicit ImmediateSigned32(int32_t value);
};

#endif