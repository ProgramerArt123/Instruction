#ifndef __X86_64_CONCRETE_INSTRUCTION_64_H__
#define __X86_64_CONCRETE_INSTRUCTION_64_H__
#include "AbstractInstruction.h"
namespace size64
{
	class Immediate64;
	class General64;
	class IntegerDataTransmitted : public AbstractInstruction {
	public:
		explicit IntegerDataTransmitted(const Immediate64 &source, const General64 &destination);
	};
}
#endif