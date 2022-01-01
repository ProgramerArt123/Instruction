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
			explicit Memory(x86::reg::segment::Data &base, x86::immediate::Immediate &disp, x86::reg::segment::Data &index, x86::reg::segment::Segment &segment);
			explicit Memory(x86::reg::segment::Data &base, x86::reg::segment::Data &index, x86::immediate::Immediate &scale, x86::reg::segment::Segment &segment);
			explicit Memory(x86::reg::segment::Data &base, x86::immediate::Immediate &disp, x86::reg::segment::Data &index, x86::immediate::Immediate &scale, x86::reg::segment::Segment &segment);

		};
	}
}

#endif