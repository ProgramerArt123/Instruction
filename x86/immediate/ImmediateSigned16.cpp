#include "ImmediateSigned16.h"
namespace x86
{
	namespace immediate {
		ImmediateSigned16::ImmediateSigned16(int16_t value) {
			m_string.append(std::to_string(value));
		}
	}
}