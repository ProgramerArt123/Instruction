#include "Define.h"
#include "x86/register/classic/general/operation/Operation32.h"
#include "x86/register/classic/segment/Segment.h"
#include "x86/register/classic/general/offset/Offset32.h"
#include "x86/register/classic/general/offset/Address32.h"
#include "x86/immediate/Immediate.h"
#include "Memory.h"
namespace x86
{
	namespace memory {
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base) {
#if FORMAT=='A'
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base) {
#if FORMAT=='A'
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, x86::immediate::Immediate &disp) {
#if FORMAT=='A'
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, x86::immediate::Immediate &disp) {
#if FORMAT=='A'
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::offset::Address32 &index) {
#if FORMAT=='A'
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::operation::Operation32 &index) {
#if FORMAT=='A'
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::operation::Operation32 &index) {
#if FORMAT=='A'
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::offset::Address32 &index) {
#if FORMAT=='A'
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index) {
#if FORMAT=='A'
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index) {
#if FORMAT=='A'
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index) {
#if FORMAT=='A'
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index) {
#if FORMAT=='A'
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::offset::Address32 &index, x86::immediate::Immediate &scale) {
#if FORMAT=='A'
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
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::operation::Operation32 &index, x86::immediate::Immediate &scale) {
#if FORMAT=='A'
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
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::operation::Operation32 &index, x86::immediate::Immediate &scale) {
#if FORMAT=='A'
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
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::offset::Address32 &index, x86::immediate::Immediate &scale) {
#if FORMAT=='A'
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
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, const x86::immediate::Immediate &scale) {
#if FORMAT=='A'
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
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, const x86::immediate::Immediate &scale) {
#if FORMAT=='A'
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
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, const x86::immediate::Immediate &scale) {
#if FORMAT=='A'
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
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, const x86::immediate::Immediate &scale) {
#if FORMAT=='A'
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
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::offset::Address32 &index, x86::reg::classic::segment::Segment &segment) {
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
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::operation::Operation32 &index, x86::reg::classic::segment::Segment &segment) {
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
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::operation::Operation32 &index, x86::reg::classic::segment::Segment &segment) {
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
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::offset::Address32 &index, x86::reg::classic::segment::Segment &segment) {
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
		Memory:: Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, const x86::reg::classic::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, const x86::reg::classic::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, const x86::reg::classic::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, const x86::reg::classic::segment::Segment &segment) {
#if FORMAT=='A'
			m_string.append(segment.String());
			m_string.append(":");
			m_string.append(disp.PureString());
			m_string.append("(");
			m_string.append(base.String());
			m_string.append(",");
			m_string.append(index.String());
			m_string.append(")");
#else
#endif
		}
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::offset::Address32 &index, const x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment) 
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
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::operation::Operation32 &index, const x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment) 
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
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::operation::Operation32 &index, const x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment) {
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
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::offset::Address32 &index, const x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment) 
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
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment) 
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
		Memory::Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment) 
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
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment) {
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
		Memory::Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment) {
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