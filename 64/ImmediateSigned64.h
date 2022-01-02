#ifndef __IMMEDIATE_SIGNED_64_H__
#define __IMMEDIATE_SIGNED_64_H__
#include <cstdint>
#include "Immediate64.h"
namespace size64
{
	class ImmediateSigned64 : public Immediate64 {
	public:
		explicit ImmediateSigned64(int64_t value);
	};
}

#endif