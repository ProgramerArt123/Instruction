#include <cstring>
#include "../Define.h"
#include "Immediate.h"
namespace immediate {
	Immediate::Immediate() {
	#if FORMAT=='A'
		m_string.append("$");
		#else
		#endif
	}
	const char *Immediate::PureString() const {
	#if FORMAT=='A'
		return Operand::PureString() + strlen("$");
		#else
		return Operand::PureString();
		#endif
	}
}