#ifndef __MEMORY_H__
#define __MEMORY_H__
#include "Operand.h"

class Data;
class Immediate;
class Segment;

class Memory : public Operand {
public:
	explicit Memory(Data &base);
	explicit Memory(Data &base, Immediate &disp);
	explicit Memory(Data &base, Data &index);
	explicit Memory(Data &base, Immediate &disp, Data &index);
	explicit Memory(Data &base, Data &index, Immediate &scale);
	explicit Memory(Data &base, Immediate &disp, Data &index, Immediate &scale);

	explicit Memory(Data &base, Segment &segment);
	explicit Memory(Data &base, Immediate &disp, Segment &segment);
	explicit Memory(Data &base, Data &index, Segment &segment);
	explicit Memory(Data &base, Immediate &disp, Data &index, Segment &segment);
	explicit Memory(Data &base, Data &index, Immediate &scale, Segment &segment);
	explicit Memory(Data &base, Immediate &disp, Data &index, Immediate &scale, Segment &segment);

};

#endif