#include "Define.h"
#include "x86/instruction/ProcessorControl.h"
#include "x86/mnemonic/integer/32/DataTransmitted.h"
#include "x86/mnemonic/integer/32/Arithmetic.h"
#include "x86/mnemonic/integer/32/Logical.h"
#include "x86/mnemonic/jump/32/InstructionPointerJump.h"
#include "Instruction.h"
#include "ConcreteInstruction.h"
namespace x86
{
	namespace instruction
	{
		NoOperation::NoOperation()
			: AbstractInstruction(x86::processor_control::No_Operation())
		{
	
		}
		DataTransmitted::DataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		
		{
	
		}
		DataTransmitted::DataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		
		{
	
		}
		DataTransmitted::DataTransmitted(const x86::immediate::Immediate16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		
		{
	
		}
		DataTransmitted::DataTransmitted(const x86::immediate::Immediate32 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		
		{
	
		}

		DataTransmitted::DataTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		
		{
	
		}
		DataTransmitted::DataTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		
		{
	
		}
		DataTransmitted::DataTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
	
		{
	
		}

		DataTransmitted::DataTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::segment::Segment &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		
		{
	
		}
		DataTransmitted::DataTransmitted(const x86::reg::classic::segment::Segment &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		
		{
	
		}
		DataTransmitted::DataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
	
		{
	
		}
		DataTransmitted::DataTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination) 
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination) 
		{
		
		}
	
		DataTransmitted::DataTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		
		{
		}
	
		DataTransmitted::DataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		
		{
		}
	
		DataTransmitted::DataTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination) 
		{
		
		}
		DataTransmitted::DataTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const  x86::reg::classic::general::operation::Operation32 &destination) 
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination) 
		{
		
		}
	
		DataTransmitted::DataTransmitted(const x86::reg::classic::segment::Segment &source, const x86::reg::classic::general::offset::Offset16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
	
		{
		}
		DataTransmitted::DataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::segment::Segment &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		
		{
		}
		DataTransmitted::DataTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		{
		
		}
		DataTransmitted::DataTransmitted(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation8 &destination) 
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32(), source, destination)
		{
		
		}
		DataTransmittedFillSign::DataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
		{
		}
		DataTransmittedFillSign::DataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
		{
		}
		DataTransmittedFillSign::DataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::segment::Segment &destination) 
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
		{
		
		}
		DataTransmittedFillSign::DataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
		{
		}

	
		DataTransmittedFillSign::DataTransmittedFillSign(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
		{
		}
	
		DataTransmittedFillSign::DataTransmittedFillSign(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
		{
		}
		DataTransmittedFillSign::DataTransmittedFillSign(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Sign(), source, destination)
		{
		}
	
		DataTransmittedFillZero::DataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
		{
		}
		DataTransmittedFillZero::DataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
		{
		}
		DataTransmittedFillZero::DataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::segment::Segment &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
		{
		}
		DataTransmittedFillZero::DataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
		{
		}
		
		DataTransmittedFillZero::DataTransmittedFillZero(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
		{
		}
	
		DataTransmittedFillZero::DataTransmittedFillZero(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
		{
		}
		DataTransmittedFillZero::DataTransmittedFillZero(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16_Fill_Zero(), source, destination)
		{
		}
		PushToStack::PushToStack(const x86::memory::Memory8 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Push_Stack_8__16__32(), source)
		{
		
		}
		PushToStack::PushToStack(const x86::memory::Memory16 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Push_Stack_8__16__32(), source) {
		
		}
		PushToStack::PushToStack(const x86::memory::Memory32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Push_Stack_8__16__32(), source)
		{
		
		}
		PushToStack::PushToStack(const x86::reg::Register &source) 
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Push_Stack_8__16__32(), source, true)
		{
		
		}
		PushToStack::PushToStack(const x86::immediate::Immediate32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Push_Stack_8__16__32(), source) {
		
		}
		PopFromStack::PopFromStack(const x86::memory::Memory8 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Pop_Stack_8__16__32(), source)
		{
		
		}
		PopFromStack::PopFromStack(const x86::memory::Memory16 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Pop_Stack_8__16__32(), source) {
		
		}
		PopFromStack::PopFromStack(const x86::memory::Memory32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Pop_Stack_8__16__32(), source)
		{
		
		}
		PopFromStack::PopFromStack(const x86::reg::Register &source) 
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Pop_Stack_8__16__32(), source, true)
		{
		
		}
		PushOperationOffsetWordToStack::PushOperationOffsetWordToStack()
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Push_Stack_All_16_Registers()) 
		{
		
		}
		PopOperationOffsetWordFromStack::PopOperationOffsetWordFromStack()
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Pop_Stack_All_16_Registers())
		{
		
		}
		PushOperationOffsetDoubleWordToStack::PushOperationOffsetDoubleWordToStack() 
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Push_Stack_All_32_Registers()) 
		{
		
		}
		PopOperationOffsetDoubleWordFromStack::PopOperationOffsetDoubleWordFromStack()
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Pop_Stack_All_32_Registers()) 
		{
		
		}
		ReverseRegister32Bytes::ReverseRegister32Bytes(const x86::reg::classic::general::operation::Operation32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Reverse_32_Register_8(), source) 
		{
		
		}
		ReverseRegister32Bytes::ReverseRegister32Bytes(const x86::reg::classic::general::offset::Offset32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Reverse_32_Register_8(), source) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation16 &source, const x86::memory::Memory16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation32 &source, const x86::memory::Memory32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset8 &source, const x86::memory::Memory8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset16 &source, const x86::memory::Memory16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		SwapOperationOffsetMemory::SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset32 &source, const x86::memory::Memory32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory8 &destination) 
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset8 &source, const x86::memory::Memory8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::memory::Memory16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::memory::Memory16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::memory::Memory32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
		CompareAccumulatorTransmitted::CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::memory::Memory32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF(), source, destination) 
		{
		
		}
	
		SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory8 &destination) 
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::offset::Offset8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::operation::Operation8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset8 &source, const x86::memory::Memory8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation16 &source, const x86::memory::Memory16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		
		SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset16 &source, const x86::memory::Memory16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::operation::Operation32 &source, const x86::memory::Memory32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		
		SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		SwapAdd::SwapAdd(const x86::reg::classic::general::offset::Offset32 &source, const x86::memory::Memory32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Swap_8__16__32_Add(), source, destination) 
		{
		
		}
		TransmittedByteToAL::TransmittedByteToAL()
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Transmitted_8_To_AL_From_DS()) 
		{
		
		}
		ReadFromIOPortToAccumulator::ReadFromIOPortToAccumulator(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::AccumulatorLow &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Read_8__16__32_From_IO_PORT(), source, destination) 
		{
		
		}
		ReadFromIOPortToAccumulator::ReadFromIOPortToAccumulator(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::Accumulator &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Read_8__16__32_From_IO_PORT(), source, destination) 
		{
		
		}
		ReadFromIOPortToAccumulator::ReadFromIOPortToAccumulator(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::AccumulatorExtend &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Read_8__16__32_From_IO_PORT(), source, destination) 
		{
		
		}
		WriteFromAccumulatorToIOPort::WriteFromAccumulatorToIOPort(const x86::reg::classic::general::operation::AccumulatorLow &source, const x86::immediate::Immediate8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Write_8__16__32_To_IO_PORT(), source, destination) 
		{
		
		}
		WriteFromAccumulatorToIOPort::WriteFromAccumulatorToIOPort(const x86::reg::classic::general::operation::Accumulator &source, const x86::immediate::Immediate8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Write_8__16__32_To_IO_PORT(), source, destination) 
		{
		
		}
		WriteFromAccumulatorToIOPort::WriteFromAccumulatorToIOPort(const x86::reg::classic::general::operation::AccumulatorExtend &source, const x86::immediate::Immediate8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Write_8__16__32_To_IO_PORT(), source, destination) 
		{
		
		}
	
		LoadEffectiveAddress::LoadEffectiveAddress(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Load_Effective_Address_16__32(), source, destination) 
		{
		
		}
		LoadEffectiveAddress::LoadEffectiveAddress(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Load_Effective_Address_16__32(), source, destination) 
		{
		
		}
		LoadPointerToDS::LoadPointerToDS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Load_Effective_Address_32_DS(), source, destination) 
		{
		
		}
		LoadPointerToES::LoadPointerToES(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Load_Effective_Address_32_ES(), source, destination) 
		{
		
		}
		LoadPointerToFS::LoadPointerToFS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Load_Effective_Address_32_FS(), source, destination) 
		{
		
		}
		LoadPointerToGS::LoadPointerToGS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Load_Effective_Address_32_GS(), source, destination) 
		{
		
		}
		LoadPointerToSS::LoadPointerToSS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Load_Effective_Address_32_SS(), source, destination) 
		{
		
		}
	
		LoadFlagsToAH::LoadFlagsToAH()
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Load_Flags_To_AH()) 
		{
		
		}
		SaveFlagsFromAH::SaveFlagsFromAH()
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Save_Flags_From_AH()) 
		{
		
		}
		PushFlagsWordToStack::PushFlagsWordToStack()
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Push_Stack_16_Flags()) 
		{
		
		}
		PopFlagsWordFromStack::PopFlagsWordFromStack()
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Pop_Stack_16_Flags()) 
		{
		
		}
		PushFlagsDoubleWordToStack::PushFlagsDoubleWordToStack()
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Push_Stack_32_Flags()) 
		{
		
		}
		PopFlagsDoubleWordFromStack::PopFlagsDoubleWordFromStack()
			: AbstractInstruction(x86::mnemonic::integer::size32::data_transmitted::Pop_Stack_32_Flags()) 
		{
		
		}
		Add::Add(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Add_8__16__32(), source, destination) 
		{
		
		}
		Add::Add(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Add_8__16__32(), source, destination) 
		{
		
		}
		Add::Add(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Add_8__16__32(), source, destination) 
		{
		
		}
		Add::Add(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Add_8__16__32(), source, destination) 
		{
		
		}
		Add::Add(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Add_8__16__32(), source, destination) 
		{
		
		}
		AddCarray::AddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Add_8__16__32_CF(), source, destination) 
		{
		
		}
		AddCarray::AddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Add_8__16__32_CF(), source, destination) 
		{
		
		}
		AddCarray::AddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Add_8__16__32_CF(), source, destination) 
		{
		
		}
		AddCarray::AddCarray(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Add_8__16__32_CF(), source, destination) 
		{
		
		}
		AddCarray::AddCarray(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Add_8__16__32_CF(), source, destination) 
		{
		
		}
		Increase::Increase(const x86::reg::classic::general::General8 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Increase_8__16__32(), source) 
		{
		
		}
		Increase::Increase(const x86::reg::classic::general::General16 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Increase_8__16__32(), source) 
		{
		
		}
		Increase::Increase(const x86::reg::classic::general::General32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Increase_8__16__32(), source) 
		{
		
		}
		AddConvertASCIIFormat::AddConvertASCIIFormat()
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Convert_ASCII_Format_Add_AL_AF_CF()) 
		{
		
		}
		AddConvertDecimalFormat::AddConvertDecimalFormat()
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Convert_Decimal_Format_Add_AL_CF_AF()) 
		{
		
		}
		Sub::Sub(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Sub_8__16__32(), source, destination) 
		{
		
		}
		Sub::Sub(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Sub_8__16__32(), source, destination) 
		{
		
		}
		Sub::Sub(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Sub_8__16__32(), source, destination) 
		{
		
		}
		Sub::Sub(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Sub_8__16__32(), source, destination) 
		{
		
		}
		Sub::Sub(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Sub_8__16__32(), source, destination) 
		{
		
		}
	
		SubCarray::SubCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Sub_8__16__32_CF(), source, destination) 
		{
		
		}
		SubCarray::SubCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Sub_8__16__32_CF(), source, destination) 
		{
		
		}
		SubCarray::SubCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Sub_8__16__32_CF(), source, destination) 
		{
		
		}
		SubCarray::SubCarray(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Sub_8__16__32_CF(), source, destination) 
		{
		
		}
		SubCarray::SubCarray(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Sub_8__16__32_CF(), source, destination) 
		{
		
		}
		Decrease::Decrease(const x86::reg::classic::general::General8 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Decrease_8__16__32(), source) 
		{
		
		}
		Decrease::Decrease(const x86::reg::classic::general::General16 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Decrease_8__16__32(), source) 
		{
		
		}
		Decrease::Decrease(const x86::reg::classic::general::General32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Decrease_8__16__32(), source) 
		{
		
		}
		Negation::Negation(const x86::reg::classic::general::General8 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Negation_8__16__32_CF(), source) 
		{
		
		}
		Negation::Negation(const x86::reg::classic::general::General16 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Negation_8__16__32_CF(), source) 
		{
		
		}
		Negation::Negation(const x86::reg::classic::general::General32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Negation_8__16__32_CF(), source) 
		{
		
		}
		Compare::Compare(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Compare_Value_8__16__32(), source, destination) 
		{
		
		}
		Compare::Compare(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Compare_Value_8__16__32(), source, destination) 
		{
		
		}
		Compare::Compare(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Compare_Value_8__16__32(), source, destination) 
		{
		
		}
		SubConvertASCIIFormat::SubConvertASCIIFormat()
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Convert_ASCII_Format_Sub_AL_AF_CF()) 
		{
		
		}
		SubConvertDecimalFormat::SubConvertDecimalFormat() 
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Convert_Decimal_Format_Sub_AL_CF_AF())
		{

		}
		UnsignedMultiply::UnsignedMultiply(const x86::reg::classic::general::General8 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Unsigned_Multiply_8__16__32(), source)
			, m_result_low(AL)
			, m_result_high(AH)
		{

		}
		UnsignedMultiply::UnsignedMultiply(const x86::reg::classic::general::General16 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Unsigned_Multiply_8__16__32(), source)
			, m_result_low(AX)
			, m_result_high(DX)
		{

		}
		UnsignedMultiply::UnsignedMultiply(const x86::reg::classic::general::General32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Unsigned_Multiply_8__16__32(), source)
			, m_result_low(EAX)
			, m_result_high(EDX)
		{

		}
		const reg::classic::general::General &UnsignedMultiply::ResultLow()const
		{
			return m_result_low;
		}
		const reg::classic::general::General &UnsignedMultiply::ResultHigh()const
		{
			return m_result_high;
		}
	
	
		SignedMultiply::SignedMultiply(const x86::reg::classic::general::General8 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Signed_Multiply_8__16__32_CF_OF(), source)
			, m_result_low(AL)
			, m_result_high(AH)
		{

		}
		SignedMultiply::SignedMultiply(const x86::reg::classic::general::General16 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Signed_Multiply_8__16__32_CF_OF(), source)
			, m_result_low(AX)
			, m_result_high(DX)
		{

		}
		SignedMultiply::SignedMultiply(const x86::reg::classic::general::General32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Signed_Multiply_8__16__32_CF_OF(), source)
			, m_result_low(EAX)
			, m_result_high(EDX)
		{

		}
		const reg::classic::general::General &SignedMultiply::ResultLow()const
		{
			return m_result_low;
		}
		const reg::classic::general::General &SignedMultiply::ResultHigh()const
		{
			return m_result_high;
		}
		MulConvertASCIIFormat::MulConvertASCIIFormat()
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Convert_ASCII_Format_Mul_SF_ZF_PF()) 
		{
		
		}
	
		UnsignedDivide::UnsignedDivide(const x86::reg::classic::general::General8 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Unsigned_Divide_8__16__32(), source)
			, m_quotient(AL)
			, m_remainder(AH)
		{

		}
		UnsignedDivide::UnsignedDivide(const x86::reg::classic::general::General16 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Unsigned_Divide_8__16__32(), source)
			, m_quotient(AX)
			, m_remainder(DX)
		{

		}
		UnsignedDivide::UnsignedDivide(const x86::reg::classic::general::General32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Unsigned_Divide_8__16__32(), source)
			, m_quotient(EAX)
			, m_remainder(EDX)
		{

		}
		const reg::classic::general::General &UnsignedDivide::Quotient()const
		{
			return m_quotient;
		}
		const reg::classic::general::General &UnsignedDivide::Remainder()const
		{
			return m_remainder;
		}
	
	
		SignedDivide::SignedDivide(const x86::reg::classic::general::General8 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Signed_Divide_8__16__32(), source)
			, m_quotient(AL)
			, m_remainder(AH)
		{

		}
		SignedDivide::SignedDivide(const x86::reg::classic::general::General16 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Signed_Divide_8__16__32(), source)
			, m_quotient(AX)
			, m_remainder(DX)
		{

		}
		SignedDivide::SignedDivide(const x86::reg::classic::general::General32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Signed_Divide_8__16__32(), source)
			, m_quotient(EAX)
			, m_remainder(EDX)
		{

		}
		const reg::classic::general::General &SignedDivide::Quotient()const
		{
			return m_quotient;
		}
		const reg::classic::general::General &SignedDivide::Remainder()const
		{
			return m_remainder;
		}

		DivideConvertASCIIFormat::DivideConvertASCIIFormat()
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Convert_ASCII_Format_Div_SF_ZF_PF())
		{

		}
		DivideConvertASCIIFormat::DivideConvertASCIIFormat(const x86::immediate::Immediate8 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Convert_ASCII_Format_Div_SF_ZF_PF(), source)
		{

		}
		ConvertByteToWord::ConvertByteToWord()
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Convert_Byte_To_Word_AX())
			, m_result(AX)
		{

		}
		const reg::classic::general::operation::Accumulator &ConvertByteToWord::Result()const {
			return m_result;
		}
	
		ConvertWordToDoubleAccumulator::ConvertWordToDoubleAccumulator()
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Convert_Word_To_Doubleword_EAX())
			, m_result(EAX)
		{

		}
		const reg::classic::general::operation::AccumulatorExtend &ConvertWordToDoubleAccumulator::Result()const {
			return m_result;
		}
	
		ConvertWordToDoubleData::ConvertWordToDoubleData()
			: AbstractInstruction(x86::mnemonic::integer::size32::arithmetic::Convert_Word_To_Doubleword_DX_AX())
			, m_result_low(AX)
			, m_result_high(DX)
		{
		
		}
		const reg::classic::general::operation::Accumulator &ConvertWordToDoubleData::ResultLow()const
		{
			return m_result_low;
		}
		const reg::classic::general::operation::Data &ConvertWordToDoubleData::ResultHigh()const
		{
			return m_result_high;
		}
	
		LogicalAND::LogicalAND(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::And_8__16__32(), source, destination)
		{
		
		}
		
		LogicalAND::LogicalAND(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::And_8__16__32(), source, destination)
		{
		
		}
		
		LogicalAND::LogicalAND(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::And_8__16__32(), source, destination)
		{
		
		}
	
		LogicalAND::LogicalAND(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::And_8__16__32(), source, destination)
		{
		
		}
		
		LogicalAND::LogicalAND(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::And_8__16__32(), source, destination)
		{
		
		}

		LogicalInclusiveOR::LogicalInclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Inclusive_Or_8__16__32(), source, destination)
		{

		}

		LogicalInclusiveOR::LogicalInclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Inclusive_Or_8__16__32(), source, destination)
		{

		}

		LogicalInclusiveOR::LogicalInclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Inclusive_Or_8__16__32(), source, destination)
		{

		}

		LogicalInclusiveOR::LogicalInclusiveOR(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Inclusive_Or_8__16__32(), source, destination)
		{

		}

		LogicalInclusiveOR::LogicalInclusiveOR(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Inclusive_Or_8__16__32(), source, destination)
		{

		}
	
		LogicalExclusiveOR::LogicalExclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Exclusive_Or_8__16__32(), source, destination)
		{

		}

		LogicalExclusiveOR::LogicalExclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Exclusive_Or_8__16__32(), source, destination)
		{

		}

		LogicalExclusiveOR::LogicalExclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Exclusive_Or_8__16__32(), source, destination)
		{

		}

		LogicalExclusiveOR::LogicalExclusiveOR(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Exclusive_Or_8__16__32(), source, destination)
		{

		}

		LogicalExclusiveOR::LogicalExclusiveOR(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Exclusive_Or_8__16__32(), source, destination)
		{

		}
	
		LogicalNOT::LogicalNOT(const x86::reg::classic::general::General8 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Not_8__16__32(), source)
		{

		}

		LogicalNOT::LogicalNOT(const x86::reg::classic::general::General16 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Not_8__16__32(), source)
		{

		}

		LogicalNOT::LogicalNOT(const x86::reg::classic::general::General32 &source)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Not_8__16__32(), source)
		{

		}
	
		LogicalCompare::LogicalCompare(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Compare_Value_8__16__32_SF_ZF_PF(), source, destination)
		{

		}

		LogicalCompare::LogicalCompare(const x86::immediate::Immediate16 &source, const x86::reg::classic::general::General16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Compare_Value_8__16__32_SF_ZF_PF(), source, destination)
		{

		}

		LogicalCompare::LogicalCompare(const x86::immediate::Immediate32 &source, const x86::reg::classic::general::General32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Compare_Value_8__16__32_SF_ZF_PF(), source, destination)
		{

		}
		
		BitsMoveLeft::BitsMoveLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Left_8__16__32_SF_ZF_PF(), source, destination)
		{

		}

		BitsMoveLeft::BitsMoveLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Left_8__16__32_SF_ZF_PF(), source, destination)
		{

		}

		BitsMoveLeft::BitsMoveLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Left_8__16__32_SF_ZF_PF(), source, destination)
		{

		}
	
		BitsMoveLeftSign::BitsMoveLeftSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Left_Sign_8__16__32_SF_ZF_PF(), source, destination)
		{

		}

		BitsMoveLeftSign::BitsMoveLeftSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Left_Sign_8__16__32_SF_ZF_PF(), source, destination)
		{

		}

		BitsMoveLeftSign::BitsMoveLeftSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Left_Sign_8__16__32_SF_ZF_PF(), source, destination)
		{

		}
		BitsMoveRight::BitsMoveRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Right_8__16__32_SF_ZF_PF(), source, destination)
		{

		}
		BitsMoveRight::BitsMoveRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Right_8__16__32_SF_ZF_PF(), source, destination)
		{

		}
		BitsMoveRight::BitsMoveRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Right_8__16__32_SF_ZF_PF(), source, destination)
		{

		}
	
		BitsMoveRightSign::BitsMoveRightSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Right_Sign_8__16__32_SF_ZF_PF(), source, destination)
		{

		}
		BitsMoveRightSign::BitsMoveRightSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Right_Sign_8__16__32_SF_ZF_PF(), source, destination)
		{

		}
		BitsMoveRightSign::BitsMoveRightSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Right_Sign_8__16__32_SF_ZF_PF(), source, destination)
		{

		}
	
		BitsRollLeft::BitsRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Left_Roll_8__16__32_OF_CF(), source, destination)
		{

		}

		BitsRollLeft::BitsRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Left_Roll_8__16__32_OF_CF(), source, destination)
		{

		}

		BitsRollLeft::BitsRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Left_Roll_8__16__32_OF_CF(), source, destination)
		{

		}
	
		BitsRollRight::BitsRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Right_Roll_8__16__32_OF_CF(), source, destination)
		{

		}

		BitsRollRight::BitsRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Right_Roll_8__16__32_OF_CF(), source, destination)
		{

		}

		BitsRollRight::BitsRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_Move_Right_Roll_8__16__32_OF_CF(), source, destination)
		{

		}
		BitsCarrayRollLeft::BitsCarrayRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_CF_Move_Left_Roll_8__16__32_OF_CF(), source, destination)
		{

		}

		BitsCarrayRollLeft::BitsCarrayRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_CF_Move_Left_Roll_8__16__32_OF_CF(), source, destination)
		{

		}

		BitsCarrayRollLeft::BitsCarrayRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_CF_Move_Left_Roll_8__16__32_OF_CF(), source, destination)
		{

		}
	
		BitsCarrayRollRight::BitsCarrayRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_CF_Move_Right_Roll_8__16__32_OF_CF(), source, destination)
		{

		}

		BitsCarrayRollRight::BitsCarrayRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_CF_Move_Right_Roll_8__16__32_OF_CF(), source, destination)
		{

		}

		BitsCarrayRollRight::BitsCarrayRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination)
			: AbstractInstruction(x86::mnemonic::integer::size32::logic::Bits_CF_Move_Right_Roll_8__16__32_OF_CF(), source, destination)
		{

		}
		InstructionPointerJump::InstructionPointerJump(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_8__16__32(), source)
		{

		}
		InstructionPointerJump::InstructionPointerJump(const x86::memory::Memory8 &source)
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_8__16__32(), source)
		{

		}

		InstructionPointerJump::InstructionPointerJump(const x86::memory::Memory16 &source)
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_8__16__32(), source)
		{

		}

		InstructionPointerJump::InstructionPointerJump(const x86::memory::Memory32 &source)
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_8__16__32(), source)
		{

		}
		
		CallProcedure::CallProcedure(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Call_Procedure_16__32(), source)
		{

		}
		CallProcedure::CallProcedure(const x86::memory::Memory8 &source)
			: AbstractInstruction(x86::mnemonic::jump::size32::Call_Procedure_16__32(), source)
		{

		}

		CallProcedure::CallProcedure(const x86::memory::Memory16 &source)
			: AbstractInstruction(x86::mnemonic::jump::size32::Call_Procedure_16__32(), source)
		{

		}

		CallProcedure::CallProcedure(const x86::memory::Memory32 &source)
			: AbstractInstruction(x86::mnemonic::jump::size32::Call_Procedure_16__32(), source)
		{

		}
		
		ReturnNearFromProcedure::ReturnNearFromProcedure()
			: AbstractInstruction(x86::mnemonic::jump::size32::Return_From_Procedure_16())
		{

		}
		
		ReturnFarFromProcedure::ReturnFarFromProcedure()
			: AbstractInstruction(x86::mnemonic::jump::size32::Return_From_Procedure_20())
		{

		}
		
		JumpIfUnsignedAbove::JumpIfUnsignedAbove(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Unsigned_Above_8(), source)
		{

		}
		
		JumpIfUnsignedAboveEqual::JumpIfUnsignedAboveEqual(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Unsigned_Above__Equal_8(), source)
		{

		}
		
		JumpIfUnsignedBelow::JumpIfUnsignedBelow(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Unsigned_Below_8(), source)
		{

		}
		
		JumpIfUnsignedBelowEqual::JumpIfUnsignedBelowEqual(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Unsigned_Below__Equal_8(), source)
		{

		}
		
		JumpIfSignedGreater::JumpIfSignedGreater(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Signed_Greater_8(), source)
		{

		}
		
		JumpIfSignedGreaterEqual::JumpIfSignedGreaterEqual(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Signed_Greater__Equal_8(), source)
		{

		}
		
		JumpIfSignedLess::JumpIfSignedLess(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Signed_Less_8(), source)
		{

		}
		
		JumpIfSignedLessEqual::JumpIfSignedLessEqual(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Signed_Less__Equal_8(), source)
		{

		}
		
		JumpIfEqual::JumpIfEqual(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Equal_8(), source)
		{

		}
		
		JumpIfNotEqual::JumpIfNotEqual(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Not_Equal_8(), source)
		{

		}
		
		JumpIfCarry::JumpIfCarry(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Carry_8(), source)
		{

		}
		
		JumpIfNotCarry::JumpIfNotCarry(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Not_Carry_8(), source)
		{

		}
		
		JumpIfOverflow::JumpIfOverflow(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Overflow_8(), source)
		{

		}
		
		JumpIfNotOverflow::JumpIfNotOverflow(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Not_Overflow_8(), source)
		{

		}
		
		JumpIfParity::JumpIfParity(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Parity_8(), source)
		{

		}
		
		JumpIfNotParity::JumpIfNotParity(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Not_Parity_8(), source)
		{

		}
		
		JumpIfSigned::JumpIfSigned(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Signed_8(), source)
		{

		}
		
		JumpIfNotSigned::JumpIfNotSigned(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_If_Not_Signed_8(), source)
		{

		}
		
		LoopCounter::LoopCounter(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Loop_ECX_8(), source)
		{

		}
		LoopCounterAndZero::LoopCounterAndZero(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Loop_ECX_ZF_8(), source)
		{

		}
	}
}