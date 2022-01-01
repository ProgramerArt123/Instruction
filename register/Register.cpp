#include <cstring>
#include "Define.h"
#include "Register.h"

Register::Register() {
#if FORMAT=='A'
	m_string.append("%");
#else
#endif
}
const char *Register::PureString() const {
#if FORMAT=='A'
	return Operand::PureString() + strlen("%");
#else
	return Operand::PureString();
#endif
}