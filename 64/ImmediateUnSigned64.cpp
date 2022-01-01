#include "ImmediateUnSigned64.h"
namespace size64
{
	ImmediateUnSigned64::ImmediateUnSigned64(uint64_t value) {
		m_string.append(std::to_string(value));
	}
}