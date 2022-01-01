#include "ImmediateSigned64.h"
namespace x86
{
	namespace immediate
	{
		namespace size64
		{
			ImmediateSigned64::ImmediateSigned64(int64_t value) {
				m_string.append(std::to_string(value));
			}
		}
	}
}