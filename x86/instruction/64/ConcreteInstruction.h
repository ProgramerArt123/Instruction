#ifndef __X86_64_CONCRETE_INSTRUCTION_H__
#define __X86_64_CONCRETE_INSTRUCTION_H__
#include "AbstractInstruction.h"
namespace x86
{
	namespace size64
	{
		class Immediate64;
		class Operation64;
		class DataTransmitted : public AbstractInstruction {
		public:
			explicit DataTransmitted(const x86::immediate::size64::Immediate64 &source, const x86::reg::classic::general::operation::size64::Operation64 &destination);
			explicit DataTransmitted(const x86::reg::classic::general::operation::size64::Operation64 &source, const x86::reg::classic::general::operation::size64::Operation64 &destination);
			
			explicit DataTransmitted(const x86::reg::classic::general::operation::size64::Operation64 &source, const x86::reg::classic::segment::Segment &destination);
			explicit DataTransmitted(const x86::reg::classic::segment::Segment &source, const x86::reg::classic::general::operation::size64::Operation64 &destination);
		};
	}
}
#endif