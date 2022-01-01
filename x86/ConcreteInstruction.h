#ifndef __X86_CONCRETE_INSTRUCTION_H__
#define __X86_CONCRETE_INSTRUCTION_H__
#include "AbstractInstruction.h"
class Immediate8;
class Immediate16;
class Immediate32;
namespace general
{
	class General8;
	class General16;
	class General32;	 
}
namespace segment
{
	class Segment;
}
class NoOperation : public AbstractInstruction {
public:
	explicit NoOperation();
};

class IntegerDataTransmitted : public AbstractInstruction {
public:
	explicit IntegerDataTransmitted(const immediate::Immediate8 &source, const general::General8 &destination);
	explicit IntegerDataTransmitted(const immediate::Immediate16 &source, const general::General16 &destination);
	explicit IntegerDataTransmitted(const immediate::Immediate32 &source, const general::General32 &destination);
	
	explicit IntegerDataTransmitted(const general::General8 &source, const general::General8 &destination);
	explicit IntegerDataTransmitted(const general::General16 &source, const general::General16 &destination);
	explicit IntegerDataTransmitted(const general::General32 &source, const general::General32 &destination);
	
	explicit IntegerDataTransmitted(const general::General16 &source, const segment::Segment &destination);
	explicit IntegerDataTransmitted(const segment::Segment &source, const general::General16 &destination);
	
	explicit IntegerDataTransmitted(const offset::Offset &source, const offset::Offset &destination);
	
	explicit IntegerDataTransmitted(const general::General16 &source, const offset::Offset &destination);
	explicit IntegerDataTransmitted(const offset::Offset &source, const general::General16 &destination);
	
	explicit IntegerDataTransmitted(const segment::Segment &source, const offset::Offset &destination);
	explicit IntegerDataTransmitted(const offset::Offset &source, const segment::Segment &destination);
};

#endif