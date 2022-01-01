#ifndef __MEMORY_H__
#define __MEMORY_H__
#include "Operand.h"

namespace segment
{
	class Segment;
	class Data; 
}
class Immediate;

class Memory : public Operand {
public:
	explicit Memory(segment::Data &base);
	explicit Memory(segment::Data &base, Immediate &disp);
	explicit Memory(segment::Data &base, segment::Data &index);
	explicit Memory(segment::Data &base, Immediate &disp, segment::Data &index);
	explicit Memory(segment::Data &base, segment::Data &index, Immediate &scale);
	explicit Memory(segment::Data &base, Immediate &disp, segment::Data &index, Immediate &scale);

	explicit Memory(segment::Data &base, segment::Segment &segment);
	explicit Memory(segment::Data &base, Immediate &disp, segment::Segment &segment);
	explicit Memory(segment::Data &base, segment::Data &index, segment::Segment &segment);
	explicit Memory(segment::Data &base, Immediate &disp, segment::Data &index, segment::Segment &segment);
	explicit Memory(segment::Data &base, segment::Data &index, Immediate &scale, segment::Segment &segment);
	explicit Memory(segment::Data &base, Immediate &disp, segment::Data &index, Immediate &scale, segment::Segment &segment);

};

#endif