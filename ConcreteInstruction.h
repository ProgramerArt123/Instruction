#ifndef __CONCRETE_INSTRUCTION_H__
#define __CONCRETE_INSTRUCTION_H__
#include "AbstractInstruction.h"
class Immediate8;
class Immediate16;
class Immediate32;
class Data8;
class Data16;
class Data32;
class NoOperation : public AbstractInstruction {
public:
	explicit NoOperation();
};

class IntegerDataTransmitted : public AbstractInstruction {
public:
	explicit IntegerDataTransmitted(const Immediate8 &source, const Data8 &destination);
	explicit IntegerDataTransmitted(const Immediate16 &source, const Data16 &destination);
	explicit IntegerDataTransmitted(const Immediate32 &source, const Data32 &destination);
};

#endif