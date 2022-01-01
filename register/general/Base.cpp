#include "Base.h"
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