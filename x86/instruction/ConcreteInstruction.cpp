#include "Define.h"
#include "x86/instruction/ProcessorControl.h"
#include "x86/mnemonic/integer/32/DataTransmitted.h"
#include "x86/mnemonic/integer/32/Arithmetic.h"
#include "x86/mnemonic/integer/32/Logical.h"
#include "x86/mnemonic/jump/32/InstructionPointerJump.h"
#include "x86/mnemonic/string/Operation.h"
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
		
		LoopCounterAndNotZero::LoopCounterAndNotZero(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Loop_ECX_Not_ZF_8(), source)
		{

		}
		
		JumpIfCXZero::JumpIfCXZero(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_CX_Zero_8(), source)
		{

		}
		
		JumpIfECXZero::JumpIfECXZero(const x86::label::CodeLabel &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Jump_ECX_Zero_8(), source)
		{

		}
		
		CallInterruptProcedure::CallInterruptProcedure(const x86::immediate::Immediate8 &source) 
			: AbstractInstruction(x86::mnemonic::jump::size32::Call_Interrupt_Procedure_8(), source)
		{

		}
		
		CallInterruptProcedureIfOverflow::CallInterruptProcedureIfOverflow() 
			: AbstractInstruction(x86::mnemonic::jump::size32::Call_Interrupt_Procedure_If_Overflow())
		{

		}
		
		InterruptReturn::InterruptReturn() 
			: AbstractInstruction(x86::mnemonic::jump::size32::Interrupt_Return_20())
		{

		}
		
		TransmittedBytes::TransmittedBytes() 
			: AbstractInstruction(x86::mnemonic::string::Transmitted_8()),
			m_from_segment(DS), m_from_offset(ESI), m_to_segment(ES), m_to_offset(EDI)
		{

		}
		
		const reg::classic::segment::Segment &TransmittedBytes::FromSegment()const {
			return m_from_segment;
		}
		const reg::classic::general::offset::Address32 &TransmittedBytes::FromOffset()const {
			return m_from_offset;
		}
		const reg::classic::segment::Segment &TransmittedBytes::ToSegment()const {
			return m_to_segment;
		}
		const reg::classic::general::offset::Address32 &TransmittedBytes::ToOffset()const {
			return m_to_offset;
		}
		
		TransmittedWords::TransmittedWords() 
			: AbstractInstruction(x86::mnemonic::string::Transmitted_16())
			, m_from_segment(DS)
			, m_from_offset(ESI)
			, m_to_segment(ES)
			, m_to_offset(EDI)
		{

		}
		
		const reg::classic::segment::Segment &TransmittedWords::FromSegment()const {
			return m_from_segment;
		}
		const reg::classic::general::offset::Address32 &TransmittedWords::FromOffset()const {
			return m_from_offset;
		}
		const reg::classic::segment::Segment &TransmittedWords::ToSegment()const {
			return m_to_segment;
		}
		const reg::classic::general::offset::Address32 &TransmittedWords::ToOffset()const {
			return m_to_offset;
		}
		
		TransmittedDWords::TransmittedDWords() 
			: AbstractInstruction(x86::mnemonic::string::Transmitted_32())
			, m_from_segment(DS)
			, m_from_offset(ESI)
			, m_to_segment(ES)
			, m_to_offset(EDI)
		{

		}
		
		const reg::classic::segment::Segment &TransmittedDWords::FromSegment()const {
			return m_from_segment;
		}
		const reg::classic::general::offset::Address32 &TransmittedDWords::FromOffset()const {
			return m_from_offset;
		}
		const reg::classic::segment::Segment &TransmittedDWords::ToSegment()const {
			return m_to_segment;
		}
		const reg::classic::general::offset::Address32 &TransmittedDWords::ToOffset()const {
			return m_to_offset;
		}
		
		
		CompareBytes::CompareBytes() 
			: AbstractInstruction(x86::mnemonic::string::Compare_Bytes_CF_OF_SF_ZF_AF_PF())
			, m_from_segment(DS)
			, m_from_offset(ESI)
			, m_to_segment(ES)
			, m_to_offset(EDI)
		{

		}
		
		const reg::classic::segment::Segment &CompareBytes::FromSegment()const {
			return m_from_segment;
		}
		const reg::classic::general::offset::Address32 &CompareBytes::FromOffset()const {
			return m_from_offset;
		}
		const reg::classic::segment::Segment &CompareBytes::ToSegment()const {
			return m_to_segment;
		}
		const reg::classic::general::offset::Address32 &CompareBytes::ToOffset()const {
			return m_to_offset;
		}
		
		CompareWords::CompareWords() 
			: AbstractInstruction(x86::mnemonic::string::Compare_Words_CF_OF_SF_ZF_AF_PF())
			, m_from_segment(DS)
			, m_from_offset(ESI)
			, m_to_segment(ES)
			, m_to_offset(EDI)
		{

		}
		
		const reg::classic::segment::Segment &CompareWords::FromSegment()const {
			return m_from_segment;
		}
		const reg::classic::general::offset::Address32 &CompareWords::FromOffset()const {
			return m_from_offset;
		}
		const reg::classic::segment::Segment &CompareWords::ToSegment()const {
			return m_to_segment;
		}
		const reg::classic::general::offset::Address32 &CompareWords::ToOffset()const {
			return m_to_offset;
		}
		
		CompareDWords::CompareDWords() 
			: AbstractInstruction(x86::mnemonic::string::Compare_DWords_CF_OF_SF_ZF_AF_PF())
			, m_from_segment(DS)
			, m_from_offset(ESI)
			, m_to_segment(ES)
			, m_to_offset(EDI)
		{

		}
		
		const reg::classic::segment::Segment &CompareDWords::FromSegment()const {
			return m_from_segment;
		}
		const reg::classic::general::offset::Address32 &CompareDWords::FromOffset()const {
			return m_from_offset;
		}
		const reg::classic::segment::Segment &CompareDWords::ToSegment()const {
			return m_to_segment;
		}
		const reg::classic::general::offset::Address32 &CompareDWords::ToOffset()const {
			return m_to_offset;
		}
		
		CompareALByte::CompareALByte() 
			: AbstractInstruction(x86::mnemonic::string::Compare_AL_Byte_CF_OF_SF_ZF_AF_PF())
			, m_to_segment(ES)
			, m_to_offset(EDI)
		{

		}
		
		const reg::classic::segment::Segment &CompareALByte::ToSegment()const {
			return m_to_segment;
		}
		const reg::classic::general::offset::Address32 &CompareALByte::ToOffset()const {
			return m_to_offset;
		}
		
		CompareAXWord::CompareAXWord() 
			: AbstractInstruction(x86::mnemonic::string::Compare_AX_Word_CF_OF_SF_ZF_AF_PF())
			, m_to_segment(ES)
			, m_to_offset(EDI)
		{

		}
		
		const reg::classic::segment::Segment &CompareAXWord::ToSegment()const {
			return m_to_segment;
		}
		const reg::classic::general::offset::Address32 &CompareAXWord::ToOffset()const {
			return m_to_offset;
		}
		
		CompareEAXDWord::CompareEAXDWord() 
			: AbstractInstruction(x86::mnemonic::string::Compare_EAX_DWord_CF_OF_SF_ZF_AF_PF())
			, m_to_segment(ES)
			, m_to_offset(EDI)
		{

		}
		
		const reg::classic::segment::Segment &CompareEAXDWord::ToSegment()const {
			return m_to_segment;
		}
		const reg::classic::general::offset::Address32 &CompareEAXDWord::ToOffset()const {
			return m_to_offset;
		}
		
		SaveByteAL::SaveByteAL() 
			: AbstractInstruction(x86::mnemonic::string::Load_Byte_To_AL_From_DS_ESI())
			, m_from_segment(DS)
			, m_from_offset(ESI)
		{

		}
		
		const reg::classic::segment::Segment &SaveByteAL::FromSegment()const {
			return m_from_segment;
		}
		const reg::classic::general::offset::Address32 &SaveByteAL::FromOffset()const {
			return m_from_offset;
		}
		
		SaveWordAX::SaveWordAX() 
			: AbstractInstruction(x86::mnemonic::string::Load_Word_To_AX_From_DS_ESI())
			, m_from_segment(DS)
			, m_from_offset(ESI)
		{

		}
		
		const reg::classic::segment::Segment &SaveWordAX::FromSegment()const {
			return m_from_segment;
		}
		const reg::classic::general::offset::Address32 &SaveWordAX::FromOffset()const {
			return m_from_offset;
		}
		
		SaveDWordEAX::SaveDWordEAX() 
			: AbstractInstruction(x86::mnemonic::string::Load_DWord_To_EAX_From_DS_ESI())
			, m_from_segment(DS)
			, m_from_offset(ESI)
		{

		}
		
		const reg::classic::segment::Segment &SaveDWordEAX::FromSegment()const {
			return m_from_segment;
		}
		const reg::classic::general::offset::Address32 &SaveDWordEAX::FromOffset()const {
			return m_from_offset;
		}
		
		SaveByteAddress::SaveByteAddress() 
			: AbstractInstruction(x86::mnemonic::string::Store_Byte_To_ES_EDI_From_AL())
			, m_to_segment(ES)
			, m_to_offset(EDI)
		{

		}
		
		const reg::classic::segment::Segment &SaveByteAddress::ToSegment()const {
			return m_to_segment;
		}
		const reg::classic::general::offset::Address32 &SaveByteAddress::ToOffset()const {
			return m_to_offset;
		}
	}
}