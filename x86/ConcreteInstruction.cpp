#include "Define.h"
#include "x86/ProcessorControl.h"
#include "x86/mnemonic/32/IntegerDataTransmitted.h"
#include "Instruction.h"
#include "ConcreteInstruction.h"
namespace x86
{
	NoOperation::NoOperation()
		: AbstractInstruction(x86::processor_control::No_Operation())
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::general::General8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::Immediate16 &source, const x86::reg::general::General16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::Immediate32 &source, const  x86::reg::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}

	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::general::General8 &source, const  x86::reg::general::General8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::general::General16 &source, const  x86::reg::general::General16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::general::General32 &source, const  x86::reg::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	
	{
	
	}

	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::general::General16 &source, const x86::reg::segment::Segment &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::segment::Segment &source, const x86::reg::general::General16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::offset::Offset16 &source, const x86::reg::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::offset::Offset32 &source, const x86::reg::offset::Offset32 &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination) 
	{
		
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::general::General16 &source, const x86::reg::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::offset::Offset16 &source, const x86::reg::general::General16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::general::General32 &source, const x86::reg::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination) 
	{
		
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::offset::Offset32 &source, const  x86::reg::general::General32 &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination) 
	{
		
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::segment::Segment &source, const x86::reg::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	
	{
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::offset::Offset16 &source, const x86::reg::segment::Segment &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::general::General8 &source, const  x86::reg::general::General16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::general::General8 &source, const  x86::reg::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::general::General16 &source, const  x86::reg::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::segment::Segment &source, const  x86::reg::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const x86::reg::offset::Offset16 &source, const x86::reg::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const x86::reg::general::General16 &source, const x86::reg::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const x86::reg::offset::Offset16 &source, const  x86::reg::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::segment::Segment &source, const x86::reg::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
}