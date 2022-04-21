#include "Define.h"
#include "x86/instruction/ProcessorControl.h"
#include "x86/mnemonic/32/IntegerDataTransmitted.h"
#include "x86/mnemonic/32/IntegerArithmetic.h"
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
	LoadPointerToGS::LoadPointerToGS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Load_Effective_Address_32_GS(), source, destination) 
	{
		
	}
	LoadPointerToSS::LoadPointerToSS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Load_Effective_Address_32_SS(), source, destination) 
	{
		
	}
	
	LoadFlagsToAH::LoadFlagsToAH()
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Load_Flags_To_AH()) 
	{
		
	}
	SaveFlagsFromAH::SaveFlagsFromAH()
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Save_Flags_From_AH()) 
	{
		
	}
	PushFlagsWordToStack::PushFlagsWordToStack()
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Push_Stack_16_Flags()) 
	{
		
	}
	PopFlagsWordFromStack::PopFlagsWordFromStack()
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Pop_Stack_16_Flags()) 
	{
		
	}
	PushFlagsDoubleWordToStack::PushFlagsDoubleWordToStack()
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Push_Stack_32_Flags()) 
	{
		
	}
	PopFlagsDoubleWordFromStack::PopFlagsDoubleWordFromStack()
		: AbstractInstruction(x86::mnemonic::size32::integer_data_transmitted::Pop_Stack_32_Flags()) 
	{
		
	}
	IntegerAdd::IntegerAdd(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Add_8__16__32(), source, destination) 
	{
		
	}
	IntegerAdd::IntegerAdd(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Add_8__16__32(), source, destination) 
	{
		
	}
	IntegerAdd::IntegerAdd(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Add_8__16__32(), source, destination) 
	{
		
	}
	IntegerAdd::IntegerAdd(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Add_8__16__32(), source, destination) 
	{
		
	}
	IntegerAdd::IntegerAdd(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Add_8__16__32(), source, destination) 
	{
		
	}
	IntegerAddCarray::IntegerAddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Add_8__16__32_CF(), source, destination) 
	{
		
	}
	IntegerAddCarray::IntegerAddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Add_8__16__32_CF(), source, destination) 
	{
		
	}
	IntegerAddCarray::IntegerAddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Add_8__16__32_CF(), source, destination) 
	{
		
	}
	IntegerAddCarray::IntegerAddCarray(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Add_8__16__32_CF(), source, destination) 
	{
		
	}
	IntegerAddCarray::IntegerAddCarray(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Add_8__16__32_CF(), source, destination) 
	{
		
	}
	IntegerIncrease::IntegerIncrease(const x86::reg::classic::general::General8 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Increase_8__16__32(), source) 
	{
		
	}
	IntegerIncrease::IntegerIncrease(const x86::reg::classic::general::General16 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Increase_8__16__32(), source) 
	{
		
	}
	IntegerIncrease::IntegerIncrease(const x86::reg::classic::general::General32 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Increase_8__16__32(), source) 
	{
		
	}
	AddConvertASCIIFormat::AddConvertASCIIFormat()
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Convert_ASCII_Format_Add_AL_AF_CF()) 
	{
		
	}
	AddConvertDecimalFormat::AddConvertDecimalFormat()
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Convert_Decimal_Format_Add_AL_CF_AF()) 
	{
		
	}
	IntegerSub::IntegerSub(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Sub_8__16__32(), source, destination) 
	{
		
	}
	IntegerSub::IntegerSub(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Sub_8__16__32(), source, destination) 
	{
		
	}
	IntegerSub::IntegerSub(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Sub_8__16__32(), source, destination) 
	{
		
	}
	IntegerSub::IntegerSub(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Sub_8__16__32(), source, destination) 
	{
		
	}
	IntegerSub::IntegerSub(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Sub_8__16__32(), source, destination) 
	{
		
	}
	
	IntegerSubCarray::IntegerSubCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Sub_8__16__32_CF(), source, destination) 
	{
		
	}
	IntegerSubCarray::IntegerSubCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Sub_8__16__32_CF(), source, destination) 
	{
		
	}
	IntegerSubCarray::IntegerSubCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Sub_8__16__32_CF(), source, destination) 
	{
		
	}
	IntegerSubCarray::IntegerSubCarray(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Sub_8__16__32_CF(), source, destination) 
	{
		
	}
	IntegerSubCarray::IntegerSubCarray(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Sub_8__16__32_CF(), source, destination) 
	{
		
	}
	IntegerDecrease::IntegerDecrease(const x86::reg::classic::general::General8 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Decrease_8__16__32(), source) 
	{
		
	}
	IntegerDecrease::IntegerDecrease(const x86::reg::classic::general::General16 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Decrease_8__16__32(), source) 
	{
		
	}
	IntegerDecrease::IntegerDecrease(const x86::reg::classic::general::General32 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Decrease_8__16__32(), source) 
	{
		
	}
	IntegerNegation::IntegerNegation(const x86::reg::classic::general::General8 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Negation_8__16__32_CF(), source) 
	{
		
	}
	IntegerNegation::IntegerNegation(const x86::reg::classic::general::General16 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Negation_8__16__32_CF(), source) 
	{
		
	}
	IntegerNegation::IntegerNegation(const x86::reg::classic::general::General32 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Negation_8__16__32_CF(), source) 
	{
		
	}
	Compare::Compare(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Compare_Value_8__16__32(), source, destination) 
	{
		
	}
	Compare::Compare(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Compare_Value_8__16__32(), source, destination) 
	{
		
	}
	Compare::Compare(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Compare_Value_8__16__32(), source, destination) 
	{
		
	}
	SubConvertASCIIFormat::SubConvertASCIIFormat()
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Convert_ASCII_Format_Sub_AL_AF_CF()) 
	{
		
	}
	SubConvertDecimalFormat::SubConvertDecimalFormat() 
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Convert_Decimal_Format_Sub_AL_CF_AF())
	{

	}
	UnsignedIntegerMultiply::UnsignedIntegerMultiply(const x86::reg::classic::general::General8 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Unsigned_Multiply_8__16__32(),source)
		, m_result_low(AL)
		, m_result_high(AH)
	{

	}
	UnsignedIntegerMultiply::UnsignedIntegerMultiply(const x86::reg::classic::general::General16 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Unsigned_Multiply_8__16__32(), source)
		, m_result_low(AX)
		, m_result_high(DX)
	{

	}
	UnsignedIntegerMultiply::UnsignedIntegerMultiply(const x86::reg::classic::general::General32 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Unsigned_Multiply_8__16__32(), source)
		, m_result_low(EAX)
		, m_result_high(EDX)
	{

	}
	const reg::classic::general::General &UnsignedIntegerMultiply::ResultLow()const
	{
		return m_result_low;
	}
	const reg::classic::general::General &UnsignedIntegerMultiply::ResultHigh()const
	{
		return m_result_high;
	}
	
	
	SignedIntegerMultiply::SignedIntegerMultiply(const x86::reg::classic::general::General8 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Signed_Multiply_8__16__32_CF_OF(), source)
		, m_result_low(AL)
		, m_result_high(AH)
	{

	}
	SignedIntegerMultiply::SignedIntegerMultiply(const x86::reg::classic::general::General16 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Signed_Multiply_8__16__32_CF_OF(), source)
		, m_result_low(AX)
		, m_result_high(DX)
	{

	}
	SignedIntegerMultiply::SignedIntegerMultiply(const x86::reg::classic::general::General32 &source)
		: AbstractInstruction(x86::mnemonic::size32::integer_arithmetic::Signed_Multiply_8__16__32_CF_OF(), source)
		, m_result_low(EAX)
		, m_result_high(EDX)
	{

	}
	const reg::classic::general::General &SignedIntegerMultiply::ResultLow()const
	{
		return m_result_low;
	}
	const reg::classic::general::General &SignedIntegerMultiply::ResultHigh()const
	{
		return m_result_high;
	}
}