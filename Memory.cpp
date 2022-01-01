#include "Define.h"
#include "Register.h"
#include "Segment.h"
#include "Immediate.h"
#include "Memory.h"

Memory::Memory(Register &base) {
	
}
Memory::Memory(Register &base, Immediate &disp) {
	
}
Memory::Memory(Register &base, Register &index) {
	
}
Memory::Memory(Register &base, Register &index, Immediate &scale, Immediate &disp) {
	
}

Memory::Memory(Register &base, Segment &segment) {
	
}
Memory::Memory(Register &base, Immediate &disp, Segment &segment) {
	
}
Memory::Memory(Register &base, Register &index, Segment &segment) {
	
}
Memory::Memory(Register &base, Register &index, Immediate &scale, Immediate &disp, Segment &segment) {
#if FORMAT=='A'
	m_string.append(segment.ToString());
	m_string.append(":");
	m_string.append(disp.ToString());
	m_string.append("(");
	m_string.append(base.ToString());
	m_string.append(",");
	m_string.append(index.ToString());
	m_string.append(",");
	m_string.append(scale.ToString());
	m_string.append(")");
#else
#endif
}