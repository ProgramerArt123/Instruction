#ifndef __CONCRETE_INSTRUCTION_H__
#define __CONCRETE_INSTRUCTION_H__
#include "AbstractInstruction.h"
class Immediate8;
class Immediate16;
class Immediate32;
class General8;
class General16;
class General32;
class Segment;
class NoOperation : public AbstractInstruction {
public:
	explicit NoOperation();
};

class IntegerDataTransmitted : public AbstractInstruction {
public:
	explicit IntegerDataTransmitted(const Immediate8 &source, const General8 &destination);
	explicit IntegerDataTransmitted(const Immediate16 &source, const General16 &destination);
	explicit IntegerDataTransmitted(const Immediate32 &source, const General32 &destination);
	
	explicit IntegerDataTransmitted(const General8 &source, const General8 &destination);
	explicit IntegerDataTransmitted(const General16 &source, const General16 &destination);
	explicit IntegerDataTransmitted(const General32 &source, const General32 &destination);
	
	explicit IntegerDataTransmitted(const General16 &source, const segment::Segment &destination);
	explicit IntegerDataTransmitted(const segment::Segment &source, const General16 &destination);
};

#endif