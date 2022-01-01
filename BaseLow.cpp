#include "BaseLow.h"
BaseLow &BaseLow::GetInstance() {
	static BaseLow instance;
	return instance;
}
BaseLow::BaseLow() {
	m_string.append("BL");
}
