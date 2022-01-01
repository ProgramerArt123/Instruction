#include "Define.h"
#include "segment/Data.h"
#include "segment/Segment.h"
#include "immediate/Immediate.h"
#include "Memory.h"

Memory::Memory(segment::Data &base) {
	
}
Memory::Memory(segment::Data &base, immediate::Immediate &disp) {
	
}
Memory::Memory(segment::Data &base, segment::Data &index) {
	
}
Memory::Memory(segment::Data &base, segment::Data &index, immediate::Immediate &scale) {
	
}
Memory::Memory(segment::Data &base, immediate::Immediate &disp, segment::Data &index) {
	
}
Memory::Memory(segment::Data &base, immediate::Immediate &disp, segment::Data &index, immediate::Immediate &scale) {
	
}

Memory::Memory(segment::Data &base, segment::Segment &segment) {
	
}
Memory::Memory(segment::Data &base, immediate::Immediate &disp, segment::Segment &segment) {
	
}
Memory::Memory(segment::Data &base, segment::Data &index, segment::Segment &segment) {
	
}
Memory::Memory(segment::Data &base, immediate::Immediate &disp, segment::Data &index, segment::Segment &segment) {
	
}
Memory::Memory(segment::Data &base, segment::Data &index, immediate::Immediate &scale, segment::Segment &segment) {
	
}
Memory::Memory(segment::Data &base, immediate::Immediate &disp, segment::Data &index, immediate::Immediate &scale, segment::Segment &segment) {
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