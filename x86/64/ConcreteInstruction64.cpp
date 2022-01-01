#include "Define.h"
#if PLATFORM=='X'
#include "x86/mnemonic/64/IntegerDataTransmitted.h"
#endif
#include "Instruction.h"
#include "ConcreteInstruction64.h"
namespace size64
{
	IntegerDataTransmitted::IntegerDataTransmitted(const Immediate64 &source, const General64 &destination)
		:
#if PLATFORM=='X'
	AbstractInstruction(x86::size64::integer_data_transmitted::Transmitted_8__16__32__64(), source, destination)
#endif
	{
	}
}
