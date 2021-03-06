#ifndef __X86_MEMORY_H__
#define __X86_MEMORY_H__
#include "x86/operand/Operand.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace segment
			{
				class Segment;
				class Data; 
			}
			namespace general
			{
				namespace operation
				{
					class Operation32;
				}			
				
				namespace offset
				{
					class Offset32;
					class Address32;
				}
			}

		}
	}
	namespace immediate
	{
		class Immediate; 
	}
	namespace memory {
		class Memory : virtual public operand::Operand {
		public:
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base);
			
			
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, x86::immediate::Immediate &disp);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, x86::immediate::Immediate &disp);
			
			
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::offset::Address32 &index);
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::operation::Operation32 &index);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::operation::Operation32 &index);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::offset::Address32 &index);
			
			
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index);
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index);
			
			
			
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::offset::Address32 &index, x86::immediate::Immediate &scale);
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::operation::Operation32 &index, x86::immediate::Immediate &scale);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::operation::Operation32 &index, x86::immediate::Immediate &scale);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::offset::Address32 &index, x86::immediate::Immediate &scale);
			
			
			
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, const x86::immediate::Immediate &scale);
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, const x86::immediate::Immediate &scale);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, const x86::immediate::Immediate &scale);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, const x86::immediate::Immediate &scale);
			
			
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::segment::Segment &segment);
			
			
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::segment::Segment &segment);
			
			
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::offset::Address32 &index, x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::operation::Operation32 &index, x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::operation::Operation32 &index, x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::offset::Address32 &index, x86::reg::classic::segment::Segment &segment);
			
			
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, const x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, const x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, const x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, const x86::reg::classic::segment::Segment &segment);
			
			
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::offset::Address32 &index, const x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::reg::classic::general::operation::Operation32 &index, const x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::operation::Operation32 &index, const x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::reg::classic::general::offset::Address32 &index, const x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment);
			
			
			
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::operation::Operation32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::operation::Operation32 &index, x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment);
			explicit Memory(const x86::reg::classic::general::offset::Offset32 &base, const x86::immediate::Immediate &disp, const x86::reg::classic::general::offset::Address32 &index, x86::immediate::Immediate &scale, const x86::reg::classic::segment::Segment &segment);
			
		};
		
	}
}

#endif