#include "Base.h"
Base &Base::GetInstance() {
	static  Base instance;
	return instance;
}

Base::Base() {
	m_string.append("BX");
}