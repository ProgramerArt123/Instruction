#include "BaseLow.h"
#include "BaseHigh.h"
#include "Base.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			Base &Base::GetInstance() {
				static Base instance;
				return instance;
			}

			Base::Base()
				: m_low(BaseLow::GetInstance())
				, m_high(BaseHigh::GetInstance()) {
				m_string.append("BX");
			}
		}
	}
}