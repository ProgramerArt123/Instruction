#include "ImmediateSigned16.h"
ImmediateSigned16::ImmediateSigned16(int16_t value) {
	m_string.append(std::to_string(value));
}