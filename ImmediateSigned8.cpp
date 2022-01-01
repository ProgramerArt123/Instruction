#include "ImmediateSigned8.h"
ImmediateSigned8::ImmediateSigned8(int8_t value) {
	m_string.append(std::to_string(value));
}