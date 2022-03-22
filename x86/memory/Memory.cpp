#include "Define.h"
#include "x86/register/general/General32.h"
#include "x86/register/segment/Segment.h"
#include "x86/register/offset/Offset32.h"
#include "x86/immediate/Immediate.h"
#include "Memory.h"
namespace x86
{
	namespace memory {
		Memory::Memory(x86::reg::segment::Data &base) {
	
		}
		Memory::Memory(x86::reg::segment::Data &base, x86::immediate::Immediate &disp) {
	
		}
		Memory::Memory(x86::reg::segment::Data &base, x86::reg::segment::Data &index) {
	
		}
		Memory::Memory(x86::reg::segment::Data &base, x86::reg::segment::Data &index, x86::immediate::Immediate &scale) {
	
		}
		Memory::Memory(x86::reg::segment::Data &base, x86::immediate::Immediate &disp, x86::reg::segment::Data &index) {
	
		}
		Memory::Memory(x86::reg::segment::Data &base, x86::immediate::Immediate &disp, x86::reg::segment::Data &index, x86::immediate::Immediate &scale) {
	
		}

		Memory::Memory(x86::reg::segment::Data &base, x86::reg::segment::Segment &segment) {
		}
		Memory::Memory(x86::reg::segment::Data &base, x86::immediate::Immediate &disp, x86::reg::segment::Segment &segment) {
	
		}
		Memory::Memory(x86::reg::segment::Data &base, x86::reg::segment::Data &index, x86::reg::segment::Segment &segment) {
	
		}
		Memory:: Memory(const x86::reg::general::General32 &base, const x86::immediate::Immediate &disp, const x86::reg::offset::Offset32 &index, const x86::reg::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::general::General32 &base, const x86::immediate::Immediate &disp, const x86::reg::general::General32 &index, const x86::reg::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::general::General32 &index, const x86::reg::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::offset::Offset32 &index, const x86::reg::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::general::General32 &base, const x86::reg::offset::Offset32 &index, const x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment) 
		{
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
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
		Memory::Memory(const x86::reg::general::General32 &base, const x86::reg::general::General32 &index, const x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment) 
		{
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
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
		Memory::Memory(const x86::reg::offset::Offset32 &base, const x86::reg::general::General32 &index, const x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
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
		Memory::Memory(const x86::reg::offset::Offset32 &base, const x86::reg::offset::Offset32 &index, const x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment) 
		{
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
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
		Memory::Memory(const x86::reg::general::General32 &base, const x86::immediate::Immediate &disp, const x86::reg::offset::Offset32 &index, x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment) 
		{
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
		Memory::Memory(const x86::reg::general::General32 &base, const x86::immediate::Immediate &disp, const x86::reg::general::General32 &index, x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment) 
		{
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
		Memory::Memory(const x86::reg::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::general::General32 &index, x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment) {
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
		Memory::Memory(const x86::reg::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::offset::Offset32 &index, x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment) {
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
	}
}