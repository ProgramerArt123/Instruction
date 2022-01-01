#include "Base.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			Base &Base::GetInstance() {
				static  Base instance;
				return instance;
			}

			Base::Base() {
				m_string.append("BX");
			}
		}
	}
}