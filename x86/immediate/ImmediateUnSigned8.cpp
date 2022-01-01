#include "ImmediateUnSigned8.h"
namespace x86
{
	namespace immediate {
		ImmediateUnSigned8::ImmediateUnSigned8(uint8_t value) {
			m_string.append(std::to_string(value));
		}
	}
}