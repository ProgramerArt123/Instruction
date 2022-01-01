#include "ImmediateSigned8.h"
namespace x86
{
	namespace immediate {
		ImmediateSigned8::ImmediateSigned8(int8_t value) {
			m_string.append(std::to_string(value));
		}
	}
}