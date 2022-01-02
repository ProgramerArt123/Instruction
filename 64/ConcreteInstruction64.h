#ifndef __CONCRETE_INSTRUCTION_64_H__
#define __CONCRETE_INSTRUCTION_64_H__
#include "../AbstractInstruction.h"
namespace size64
{
	class Immediate64;
	class Data64;
	class IntegerDataTransmitted : public AbstractInstruction {
	public:
		explicit IntegerDataTransmitted(const Immediate64 &source, const Data64 &destination);
	};
}
#endif