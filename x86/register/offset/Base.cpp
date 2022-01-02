#include "Base.h"
namespace x86
{
	namespace reg
	{
		namespace offset
		{
			Base &Base::GetInstance() {
				static Base instance;
				return instance;
			}
			Base::Base() {
				m_string.append("BP");
			}
		}
	}
}