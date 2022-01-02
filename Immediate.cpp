#include "Define.h"
#include "Immediate.h"
Immediate::Immediate() {
#if FORMAT=='A'
	m_string.append("$");
#else
#endif
}