#include "ImmediateUnSigned16.h"
ImmediateUnSigned16::ImmediateUnSigned16(uint16_t value) {
	m_string.append(std::to_string(value));
}