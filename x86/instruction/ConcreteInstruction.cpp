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
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::Immediate16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::immediate::Immediate32 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}

	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	
	{
	
	}

	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::segment::Segment &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::segment::Segment &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	
	{
	
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination) 
	{
		
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination) 
	{
		
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const  x86::reg::classic::general::operation::Operation32 &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination) 
	{
		
	}
	
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::segment::Segment &source, const x86::reg::classic::general::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	
	{
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::segment::Segment &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
		
	{
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	{
		
	}
	IntegerDataTransmitted::IntegerDataTransmitted(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation8 &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
	{
		
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::segment::Segment &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
		
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}

	
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	IntegerDataTransmittedFillSign::IntegerDataTransmittedFillSign(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
	{
	}
	
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::segment::Segment &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
		
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
	
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
	IntegerDataTransmittedFillZero::IntegerDataTransmittedFillZero(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
	{
	}
	PushIntegerToStack::PushIntegerToStack(const x86::memory::Memory8 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Push_Stack_8__16__32(), source)
	{
		
	}
	PushIntegerToStack::PushIntegerToStack(const x86::memory::Memory16 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Push_Stack_8__16__32(), source) {
		
	}
	PushIntegerToStack::PushIntegerToStack(const x86::memory::Memory32 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Push_Stack_8__16__32(), source)
	{
		
	}
	PushIntegerToStack::PushIntegerToStack(const x86::reg::Register &source) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Push_Stack_8__16__32(), source, true)
	{
		
	}
	PushIntegerToStack::PushIntegerToStack(const x86::immediate::Immediate32 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Push_Stack_8__16__32(), source) {
		
	}
	PopIntegerFromStack::PopIntegerFromStack(const x86::memory::Memory8 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Pop_Stack_8__16__32(), source)
	{
		
	}
	PopIntegerFromStack::PopIntegerFromStack(const x86::memory::Memory16 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Pop_Stack_8__16__32(), source) {
		
	}
	PopIntegerFromStack::PopIntegerFromStack(const x86::memory::Memory32 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Pop_Stack_8__16__32(), source)
	{
		
	}
	PopIntegerFromStack::PopIntegerFromStack(const x86::reg::Register &source) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Pop_Stack_8__16__32(), source, true)
	{
		
	}
	PushOperationOffsetWordToStack::PushOperationOffsetWordToStack()
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Push_Stack_All_16_Registers()) 
	{
		
	}
	PopOperationOffsetWordFromStack::PopOperationOffsetWordFromStack()
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Pop_Stack_All_16_Registers())
	{
		
	}
	PushOperationOffsetDoubleWordToStack::PushOperationOffsetDoubleWordToStack() 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Push_Stack_All_32_Registers()) 
	{
		
	}
	PopOperationOffsetDoubleWordFromStack::PopOperationOffsetDoubleWordFromStack()
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Pop_Stack_All_32_Registers()) 
	{
		
	}
	ReverseRegister32Bytes::ReverseRegister32Bytes(const x86::reg::classic::general::operation::Operation32 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Reverse_32_Register_8(), source) 
	{
		
	}
	ReverseRegister32Bytes::ReverseRegister32Bytes(const x86::reg::classic::general::offset::Offset32 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Reverse_32_Register_8(), source) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation16 &source, const x86::memory::Memory16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation32 &source, const x86::memory::Memory32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset8 &source, const x86::memory::Memory8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset16 &source, const x86::memory::Memory16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset32 &source, const x86::memory::Memory32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory8 &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset8 &source, const x86::memory::Memory8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::memory::Memory16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
		
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::memory::Memory16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::memory::Memory32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
		
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::memory::Memory32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
	{
		
	}
	
	SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory8 &destination) 
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset8 &source, const x86::memory::Memory8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation16 &source, const x86::memory::Memory16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
		
	SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset16 &source, const x86::memory::Memory16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation32 &source, const x86::memory::Memory32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
		
	SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset32 &source, const x86::memory::Memory32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Swap_8__16__32_Add(), source, destination) 
	{
		
	}
	TransmittedByteToAL::TransmittedByteToAL()
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Transmitted_8_To_AL_From_DS()) 
	{
		
	}
	ReadFromIOPortToAccumulator::ReadFromIOPortToAccumulator(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::AccumulatorLow &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Read_8__16__32_From_IO_PORT(), source, destination) 
	{
		
	}
	ReadFromIOPortToAccumulator::ReadFromIOPortToAccumulator(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::Accumulator &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Read_8__16__32_From_IO_PORT(), source, destination) 
	{
		
	}
	ReadFromIOPortToAccumulator::ReadFromIOPortToAccumulator(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::AccumulatorExtend &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Read_8__16__32_From_IO_PORT(), source, destination) 
	{
		
	}
	WriteFromAccumulatorToIOPort::WriteFromAccumulatorToIOPort(const x86::reg::classic::general::operation::AccumulatorLow &source, const x86::immediate::Immediate8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Write_8__16__32_To_IO_PORT(), source, destination) 
	{
		
	}
	WriteFromAccumulatorToIOPort::WriteFromAccumulatorToIOPort(const x86::reg::classic::general::operation::Accumulator &source, const x86::immediate::Immediate8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Write_8__16__32_To_IO_PORT(), source, destination) 
	{
		
	}
	WriteFromAccumulatorToIOPort::WriteFromAccumulatorToIOPort(const x86::reg::classic::general::operation::AccumulatorExtend &source, const x86::immediate::Immediate8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Write_8__16__32_To_IO_PORT(), source, destination) 
	{
		
	}
	
	LoadEffectiveAddress::LoadEffectiveAddress(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Load_Effective_Address_16__32(), source, destination) 
	{
		
	}
	LoadEffectiveAddress::LoadEffectiveAddress(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Load_Effective_Address_16__32(), source, destination) 
	{
		
	}
	LoadPointerToDS::LoadPointerToDS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Load_Effective_Address_32_DS(), source, destination) 
	{
		
	}
	LoadPointerToES::LoadPointerToES(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Load_Effective_Address_32_ES(), source, destination) 
	{
		
	}
	LoadPointerToFS::LoadPointerToFS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Load_Effective_Address_32_FS(), source, destination) 
	{
		
	}
}