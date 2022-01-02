#ifndef __X86_CONCRETE_INSTRUCTION_H__
#define __X86_CONCRETE_INSTRUCTION_H__
#include "AbstractInstruction.h"
namespace x86
{
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
		explicit IntegerDataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::general::General8 &destination);
		explicit IntegerDataTransmitted(const x86::immediate::Immediate16 &source, const  x86::reg::general::General16 &destination);
		explicit IntegerDataTransmitted(const x86::immediate::Immediate32 &source, const  x86::reg::general::General32 &destination);
	
		explicit IntegerDataTransmitted(const  x86::reg::general::General8 &source, const  x86::reg::general::General8 &destination);
		explicit IntegerDataTransmitted(const  x86::reg::general::General16 &source, const  x86::reg::general::General16 &destination);
		explicit IntegerDataTransmitted(const  x86::reg::general::General32 &source, const  x86::reg::general::General32 &destination);
	
		explicit IntegerDataTransmitted(const  x86::reg::general::General16 &source, const  x86::reg::segment::Segment &destination);
		explicit IntegerDataTransmitted(const  x86::reg::segment::Segment &source, const  x86::reg::general::General16 &destination);
	
		explicit IntegerDataTransmitted(const x86::reg::offset::Offset16 &source, const x86::reg::offset::Offset16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::offset::Offset32 &source, const x86::reg::offset::Offset32 &destination);
	
		explicit IntegerDataTransmitted(const x86::reg::general::General16 &source, const x86::reg::offset::Offset16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::offset::Offset16 &source, const  x86::reg::general::General16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::general::General32 &source, const x86::reg::offset::Offset32 &destination);
		explicit IntegerDataTransmitted(const x86::reg::offset::Offset32 &source, const  x86::reg::general::General32 &destination);
	
		explicit IntegerDataTransmitted(const  x86::reg::segment::Segment &source, const x86::reg::offset::Offset16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::offset::Offset16 &source, const  x86::reg::segment::Segment &destination);
	};
}

#endif