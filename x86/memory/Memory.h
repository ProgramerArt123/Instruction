#ifndef __X86_MEMORY_H__
#define __X86_MEMORY_H__
#include "x86/Operand.h"
namespace x86
{
	namespace reg
	{
		namespace segment
		{
			class Segment;
			class Data; 
		}
		namespace general
		{
			class General32;
		}
		namespace offset
		{
			class Offset32;
		}
	}
	namespace immediate
	{
		class Immediate; 
	}
	namespace memory {
		class Memory : public Operand {
		public:
			explicit Memory(x86::reg::segment::Data &base);
			explicit Memory(x86::reg::segment::Data &base, x86::immediate::Immediate &disp);
			explicit Memory(x86::reg::segment::Data &base, x86::reg::segment::Data &index);
			explicit Memory(x86::reg::segment::Data &base, x86::immediate::Immediate &disp, x86::reg::segment::Data &index);
			explicit Memory(x86::reg::segment::Data &base, x86::reg::segment::Data &index, x86::immediate::Immediate &scale);
			explicit Memory(x86::reg::segment::Data &base, x86::immediate::Immediate &disp, x86::reg::segment::Data &index, x86::immediate::Immediate &scale);

			explicit Memory(x86::reg::segment::Data &base, x86::reg::segment::Segment &segment);
			explicit Memory(x86::reg::segment::Data &base, x86::immediate::Immediate &disp, x86::reg::segment::Segment &segment);
			explicit Memory(x86::reg::segment::Data &base, x86::reg::segment::Data &index, x86::reg::segment::Segment &segment);
			
			
			explicit Memory(const x86::reg::general::General32 &base, const x86::immediate::Immediate &disp, const x86::reg::offset::Offset32 &index, const x86::reg::segment::Segment &segment);
			explicit Memory(const x86::reg::general::General32 &base, const x86::immediate::Immediate &disp, const x86::reg::general::General32 &index, const x86::reg::segment::Segment &segment);
			explicit Memory(const x86::reg::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::general::General32 &index, const x86::reg::segment::Segment &segment);
			explicit Memory(const x86::reg::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::offset::Offset32 &index, const x86::reg::segment::Segment &segment);
			
			
			explicit Memory(const x86::reg::general::General32 &base, const x86::reg::offset::Offset32 &index, const x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment);
			explicit Memory(const x86::reg::general::General32 &base, const x86::reg::general::General32 &index, const x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment);
			explicit Memory(const x86::reg::offset::Offset32 &base, const x86::reg::general::General32 &index, const x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment);
			explicit Memory(const x86::reg::offset::Offset32 &base, const x86::reg::offset::Offset32 &index, const x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment);
			
			
			
			explicit Memory(const x86::reg::general::General32 &base, const x86::immediate::Immediate &disp, const x86::reg::offset::Offset32 &index, x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment);
			explicit Memory(const x86::reg::general::General32 &base, const x86::immediate::Immediate &disp, const x86::reg::general::General32 &index, x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment);
			explicit Memory(const x86::reg::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::general::General32 &index, x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment);
			explicit Memory(const x86::reg::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::offset::Offset32 &index, x86::immediate::Immediate &scale, const x86::reg::segment::Segment &segment);
		};
	}
}

#endif