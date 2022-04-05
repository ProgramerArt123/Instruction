#ifndef __X86_64_CONCRETE_INSTRUCTION_H__
#define __X86_64_CONCRETE_INSTRUCTION_H__
#include "AbstractInstruction.h"
namespace x86
{
	namespace size64
	{
		class Immediate64;
		class General64;
		class IntegerDataTransmitted : public AbstractInstruction {
		public:
			explicit IntegerDataTransmitted(const x86::immediate::size64::Immediate64 &source, const x86::reg::classic::general::size64::General64 &destination);
			explicit IntegerDataTransmitted(const x86::reg::classic::general::size64::General64 &source, const x86::reg::classic::general::size64::General64 &destination);
			
			explicit IntegerDataTransmitted(const x86::reg::classic::general::size64::General64 &source, const x86::reg::classic::segment::Segment &destination);
			explicit IntegerDataTransmitted(const x86::reg::classic::segment::Segment &source, const x86::reg::classic::general::size64::General64 &destination);
		};
	}
}
#endif