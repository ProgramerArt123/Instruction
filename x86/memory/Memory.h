#ifndef __X86_MEMORY_H__
#define __X86_MEMORY_H__
#include "x86/Operand.h"

namespace segment
{
	class Segment;
	class Data; 
}
namespace immediate
{
	class Immediate; 
}
namespace memory {
	class Memory : public Operand {
	public:
		explicit Memory(segment::Data &base);
		explicit Memory(segment::Data &base, immediate::Immediate &disp);
		explicit Memory(segment::Data &base, segment::Data &index);
		explicit Memory(segment::Data &base, immediate::Immediate &disp, segment::Data &index);
		explicit Memory(segment::Data &base, segment::Data &index, immediate::Immediate &scale);
		explicit Memory(segment::Data &base, immediate::Immediate &disp, segment::Data &index, immediate::Immediate &scale);

		explicit Memory(segment::Data &base, segment::Segment &segment);
		explicit Memory(segment::Data &base, immediate::Immediate &disp, segment::Segment &segment);
		explicit Memory(segment::Data &base, segment::Data &index, segment::Segment &segment);
		explicit Memory(segment::Data &base, immediate::Immediate &disp, segment::Data &index, segment::Segment &segment);
		explicit Memory(segment::Data &base, segment::Data &index, immediate::Immediate &scale, segment::Segment &segment);
		explicit Memory(segment::Data &base, immediate::Immediate &disp, segment::Data &index, immediate::Immediate &scale, segment::Segment &segment);

	};
}

#endif