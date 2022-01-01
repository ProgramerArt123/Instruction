#ifndef __IMMEDIATE_SIGNED_64_H__
#define __IMMEDIATE_SIGNED_64_H__
#include <cstdint>
#include "../Immediate.h"

class ImmediateSigned64 : public Immediate {
public:
	explicit ImmediateSigned64(int64_t value);
};

#endif