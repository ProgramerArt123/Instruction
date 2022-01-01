#include "ImmediateUnSigned8.h"
ImmediateUnSigned8::ImmediateUnSigned8(uint8_t value) {
	m_string.append(std::to_string(value));
}