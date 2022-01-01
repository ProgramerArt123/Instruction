#ifndef __MEMORY_H__
#define __MEMORY_H__
#include "Operand.h"

class Register;
class Immediate;
class Segment;

class Memory : public Operand {
public:
	explicit Memory(Register &base);
	explicit Memory(Register &base, Immediate &disp);
	explicit Memory(Register &base, Register &index);
	explicit Memory(Register &base, Register &index, Immediate &scale, Immediate &disp);

	explicit Memory(Register &base, Segment &segment);
	explicit Memory(Register &base, Immediate &disp, Segment &segment);
	explicit Memory(Register &base, Register &index, Segment &segment);
	explicit Memory(Register &base, Register &index, Immediate &scale, Immediate &disp, Segment &segment);

};

#endif