#include "ImmediateUnSigned32.h"
namespace immediate {
	ImmediateUnSigned32::ImmediateUnSigned32(uint32_t value) {
		m_string.append(std::to_string(value));
	}
}