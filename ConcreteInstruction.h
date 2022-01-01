#ifndef __CONCRETE_INSTRUCTION_H__
#define __CONCRETE_INSTRUCTION_H__
#include "AbstractInstruction.h"
class NoOperation : public AbstractInstruction {
public:
	explicit NoOperation();
};

#endif