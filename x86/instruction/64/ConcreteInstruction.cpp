#include "Define.h"
#include "x86/mnemonic/64/IntegerDataTransmitted.h"
#include "Instruction.h"
#include "ConcreteInstruction.h"
namespace x86
{
	namespace size64
	{
		IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::size64::Immediate64 &source, const x86::reg::classic::general::operation::size64::Operation64 &destination)
			: AbstractInstruction(x86::mnemonic::size64::integer_data_transmitted::Transmitted_8__16__32__64(), source, destination)
		{
		}
		
		IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::operation::size64::Operation64 &source, const x86::reg::classic::general::operation::size64::Operation64 &destination)
			: AbstractInstruction(x86::mnemonic::size64::integer_data_transmitted::Transmitted_8__16__32__64(), source, destination) 
		{	
		}
		
		IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::operation::size64::Operation64 &source, const x86::reg::classic::segment::Segment &destination)
			: AbstractInstruction(x86::mnemonic::size64::integer_data_transmitted::Transmitted_8__16__32__64(), source, destination) 
		{	
		}
		IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::segment::Segment &source, const x86::reg::classic::general::operation::size64::Operation64 &destination)
			: AbstractInstruction(x86::mnemonic::size64::integer_data_transmitted::Transmitted_8__16__32__64(), source, destination) 
		{	
		}
	}
}
