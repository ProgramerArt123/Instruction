#include "Define.h"
#include "Data.h"
#include "Segment.h"
#include "Immediate.h"
#include "Memory.h"

Memory::Memory(Data &base) {
	
}
Memory::Memory(Data &base, Immediate &disp) {
	
}
Memory::Memory(Data &base, Data &index) {
	
}
Memory::Memory(Data &base, Data &index, Immediate &scale) {
	
}
Memory::Memory(Data &base, Immediate &disp, Data &index) {
	
}
Memory::Memory(Data &base, Immediate &disp, Data &index, Immediate &scale) {
	
}

Memory::Memory(Data &base, Segment &segment) {
	
}
Memory::Memory(Data &base, Immediate &disp, Segment &segment) {
	
}
Memory::Memory(Data &base, Data &index, Segment &segment) {
	
}
Memory::Memory(Data &base, Immediate &disp, Data &index, Segment &segment) {
	
}
Memory::Memory(Data &base, Data &index, Immediate &scale, Segment &segment) {
	
}
Memory::Memory(Data &base, Immediate &disp, Data &index, Immediate &scale, Segment &segment) {
#if FORMAT=='A'
	m_string.append(segment.String());
	m_string.append(":");
	m_string.append(disp.PureString());
	m_string.append("(");
	m_string.append(base.String());
	m_string.append(",");
	m_string.append(index.String());
	m_string.append(",");
	m_string.append(scale.PureString());
	m_string.append(")");
#else
#endif
}