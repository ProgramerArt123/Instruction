#include "Define.h"
#include "x86/instruction/ProcessorControl.h"
#include "x86/mnemonic/32/IntegerDataTransmitted.h"
#include "Instruction.h"
#include "ConcreteInstruction.h"
namespace x86
{
	NoOperation::NoOperation()
		: AbstractInstruction(x86::processor_control::No_Operation())
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::offset::Offset8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::Immediate16 &source, const x86::reg::classic::general::General16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::Immediate32 &source, const  x86::reg::classic::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}

	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::General8 &source, const  x86::reg::classic::general::General8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::General16 &source, const  x86::reg::classic::general::General16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::General32 &source, const  x86::reg::classic::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	
	{
	
	}

	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::General16 &source, const x86::reg::classic::segment::Segment &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::segment::Segment &source, const x86::reg::classic::general::General16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::offset::Offset32 &source, const x86::reg::classic::offset::Offset32 &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination) 
	{
		
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::General16 &source, const x86::reg::classic::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::general::General16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::General32 &source, const x86::reg::classic::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination) 
	{
		
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::offset::Offset32 &source, const  x86::reg::classic::general::General32 &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination) 
	{
		
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::segment::Segment &source, const x86::reg::classic::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	
	{
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::segment::Segment &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::General8 &source, const x86::memory::Memory &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	{
		
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::memory::Memory &source, const x86::reg::classic::general::General8 &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	{
		
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::general::General16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::segment::Segment &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
		
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::classic::general::General16 &source, const  x86::reg::classic::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}

	
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const x86::reg::classic::general::General16 &source, const x86::reg::classic::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const x86::reg::classic::offset::Offset16 &source, const  x86::reg::classic::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::general::General16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::segment::Segment &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const  x86::reg::classic::general::General16 &source, const  x86::reg::classic::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
		
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
	
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const x86::reg::classic::general::General16 &source, const x86::reg::classic::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const x86::reg::classic::offset::Offset16 &source, const  x86::reg::classic::general::General32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}

	PushDataToStack::PushDataToStack(const x86::reg::classic::general::General8 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Push_Stack_8__16(), source)
	{
		
	}

}