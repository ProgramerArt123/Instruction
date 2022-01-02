#include "Define.h"
#include "Register.h"

Register::Register() {
#if FORMAT=='A'
	m_string.append("%");
#else
#endif
}