#include "ImmediateUnSigned16.h"
namespace x86
{
	namespace immediate {
		ImmediateUnSigned16::ImmediateUnSigned16(uint16_t value) {
			m_string.append(std::to_string(value));
		}
	}
}