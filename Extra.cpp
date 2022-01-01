#include "Extra.h"
Extra &Extra::GetInstance() {
	static Extra instance;
	return instance;
}
Extra::Extra() {
	m_string.append("ES");
}