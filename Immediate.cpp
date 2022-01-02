#include <cstring>
#include "Define.h"
#include "Immediate.h"
Immediate::Immediate() {
#if FORMAT=='A'
	m_string.append("$");
#else
#endif
}
const char *Immediate::PureString() {
#if FORMAT=='A'
	return Operand::PureString() + strlen("$");
#else
	return Operand::PureString();
#endif
}