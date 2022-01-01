#include "ImmediateSigned32.h"
namespace x86
{
	namespace immediate {
		ImmediateSigned32::ImmediateSigned32(int32_t value) {
			m_string.append(std::to_string(value));
		}
	}
}