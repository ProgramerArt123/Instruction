#include "ImmediateSigned64.h"
ImmediateSigned64::ImmediateSigned64(int64_t value) {
	m_string.append(std::to_string(value));
}