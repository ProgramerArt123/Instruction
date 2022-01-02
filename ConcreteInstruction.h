#ifndef __CONCRETE_INSTRUCTION_H__
#define __CONCRETE_INSTRUCTION_H__
#include "Instruction.h"
class NoOperation : public Instruction {
public:
	explicit NoOperation();
};

#endif