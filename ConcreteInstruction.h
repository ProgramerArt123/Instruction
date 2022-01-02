#ifndef __CONCRETE_INSTRUCTION_H__
#define __CONCRETE_INSTRUCTION_H__
#include "AbstractInstruction.h"
class Data8;
class NoOperation : public AbstractInstruction {
public:
	explicit NoOperation();
};

class IntegerDataTransmitted : public AbstractInstruction {
public:

};

#endif