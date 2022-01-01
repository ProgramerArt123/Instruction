#ifndef __IMMEDIATE_SIGNED_8_H__
#define __IMMEDIATE_SIGNED_8_H__
#include <cstdint>
#include "Immediate8.h"
namespace immediate {
	class ImmediateSigned8 : public Immediate8 {
	public:
		explicit ImmediateSigned8(int8_t value);
	};
}

#endif