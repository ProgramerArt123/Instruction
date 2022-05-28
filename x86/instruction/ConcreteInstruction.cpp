#include "Define.h"
#include "x86/instruction/ProcessorControl.h"
#include "x86/mnemonic/integer/32/DataTransmitted.h"
#include "x86/mnemonic/integer/32/Arithmetic.h"
#include "x86/mnemonic/integer/32/Logical.h"
#include "x86/mnemonic/jump/32/InstructionPointerJump.h"
#include "x86/mnemonic/string/Operation.h"
#include "x86/mnemonic/FPU/DataTransmitted.h"
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
		namespace integer
		{
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
		}
		namespace jump
		{
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
		}
		Source::Source(const reg::classic::segment::Segment &segment, const reg::classic::general::offset::Address32 &offset)
			: m_segment(segment)
			, m_offset(offset) {
			
		}
		Source::~Source() {
			
		}
		const reg::classic::segment::Segment &Source::Segment()const {
			return m_segment;
		}
		const reg::classic::general::offset::Address32 &Source::Offset()const {
			return m_offset;
		}
		Destination::Destination(const reg::classic::segment::Segment &segment, const reg::classic::general::offset::Address32 &offset)
			: m_segment(segment)
			, m_offset(offset) {
			
		}
		Destination::~Destination() {
			
		}
		Prefix::Prefix(const char *mnemonic)
			: AbstractInstruction(mnemonic) {
			
		}
		Prefix::~Prefix() {
			
		}
		const reg::classic::segment::Segment &Destination::Segment()const {
			return m_segment;
		}
		const reg::classic::general::offset::Address32 &Destination::Offset()const {
			return m_offset;
		}
		
		PrefixAble::PrefixAble(const char *mnemonic)
			: AbstractInstruction(mnemonic) {
			
		}
		PrefixAble::~PrefixAble() {
			
		}
		AbstractInstruction &PrefixAble::SetPrefix(const Prefix &prefix) {
			m_string = std::string(prefix.String()) + '\t' + m_string;
			return *this;
		}

		TransmittedBytes::TransmittedBytes() 
			: PrefixAble(x86::mnemonic::string::Transmitted_8())
			, Source(DS, ESI)
			, Destination(ES, EDI)
		{

		}
		
		
		TransmittedWords::TransmittedWords() 
			: PrefixAble(x86::mnemonic::string::Transmitted_16())
			, Source(DS, ESI)
			, Destination(ES, EDI)
		{

		}
		
		
		TransmittedDWords::TransmittedDWords() 
			: PrefixAble(x86::mnemonic::string::Transmitted_32())
			, Source(DS, ESI)
			, Destination(ES, EDI)
		{

		}
		
		
		CompareBytes::CompareBytes() 
			: PrefixAble(x86::mnemonic::string::Compare_Bytes_CF_OF_SF_ZF_AF_PF())
			, Source(DS, ESI)
			, Destination(ES, EDI)
		{

		}
		
		CompareWords::CompareWords() 
			: PrefixAble(x86::mnemonic::string::Compare_Words_CF_OF_SF_ZF_AF_PF())
			, Source(DS, ESI)
			, Destination(ES, EDI)
		{

		}
		
		CompareDWords::CompareDWords() 
			: PrefixAble(x86::mnemonic::string::Compare_DWords_CF_OF_SF_ZF_AF_PF())
			, Source(DS, ESI)
			, Destination(ES, EDI)
		{

		}
		
		
		CompareALByte::CompareALByte() 
			: PrefixAble(x86::mnemonic::string::Compare_AL_Byte_CF_OF_SF_ZF_AF_PF())			
			, Destination(ES, EDI)
		{

		}
		
		
		CompareAXWord::CompareAXWord() 
			: PrefixAble(x86::mnemonic::string::Compare_AX_Word_CF_OF_SF_ZF_AF_PF())
			, Destination(ES, EDI)
		{

		}
		
		CompareEAXDWord::CompareEAXDWord() 
			: PrefixAble(x86::mnemonic::string::Compare_EAX_DWord_CF_OF_SF_ZF_AF_PF())
			, Destination(ES, EDI)
		{

		}
		
		
		SaveByteAL::SaveByteAL() 
			: PrefixAble(x86::mnemonic::string::Load_Byte_To_AL_From_DS_ESI())
			, Source(DS, ESI)
		{

		}
		
		SaveWordAX::SaveWordAX() 
			: PrefixAble(x86::mnemonic::string::Load_Word_To_AX_From_DS_ESI())
			, Source(DS, ESI)
		{

		}
		
		
		SaveDWordEAX::SaveDWordEAX() 
			: PrefixAble(x86::mnemonic::string::Load_DWord_To_EAX_From_DS_ESI())
			, Source(DS, ESI)
		{

		}
		
		
		SaveByteAddress::SaveByteAddress() 
			: PrefixAble(x86::mnemonic::string::Store_Byte_To_ES_EDI_From_AL())
			, Destination(ES, EDI)
		{

		}
		
		SaveWordAddress::SaveWordAddress() 
			: PrefixAble(x86::mnemonic::string::Store_Word_To_ES_EDI_From_AX())
			, Destination(ES, EDI)
		{

		}
		
		SaveDWordAddress::SaveDWordAddress() 
			: PrefixAble(x86::mnemonic::string::Store_DWord_To_ES_EDI_From_EAX())
			, Destination(ES, EDI)
		{

		}
		Counter::Counter(const char *mnemonic)
			: Prefix(mnemonic)
			, m_count(ECX) {
			
		}
		const reg::classic::general::operation::CountExtend &Counter::Count()const {
			return m_count;
		}
		RepeatCounter::RepeatCounter() 
			: Counter(x86::mnemonic::string::Repeat_Prefix_ECX())
			
		{

		}
		RepeatCounterEqual::RepeatCounterEqual() 
			: Counter(x86::mnemonic::string::Repeat_Prefix_Equal_ZF_ECX())
			
		{

		}
	
		RepeatCounterNotEqual::RepeatCounterNotEqual() 
			: Counter(x86::mnemonic::string::Repeat_Prefix_Not_Equal_ZF_ECX())
			
		{

		}
		
		RepeatCounterCarray::RepeatCounterCarray() 
			: Counter(x86::mnemonic::string::Repeat_Prefix_CF_ECX())
			
		{

		}
		
		RepeatCounterNotCarray::RepeatCounterNotCarray() 
			: Counter(x86::mnemonic::string::Repeat_Prefix_Not_CF_ECX())
			
		{

		}
		namespace FPU
		{
			LoadZero::LoadZero() 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Zero_To_ST0_C1())
			{

			}
			LoadOne::LoadOne() 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_One_To_ST0_C1())
			{

			}
			LoadPI::LoadPI() 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_PI_To_ST0_C1())
			{

			}
			
			LoadL2T::LoadL2T() 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_L2T_To_ST0_C1())
			{

			}
			
			LoadL2E::LoadL2E() 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_L2E_To_ST0_C1())
			{

			}
			
			LoadLG2::LoadLG2() 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_LG2_To_ST0_C1())
			{

			}
			
			LoadLN2::LoadLN2() 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_LN2_To_ST0_C1())
			{

			}
			
			LoadFloatValue::LoadFloatValue(const x86::label::CodeLabel &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Float_Value_32__64__80_C1(), source)
			{

			}
			
			LoadFloatValue::LoadFloatValue(const x86::reg::FPU::Data &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Float_Value_32__64__80_C1(), source)
			{

			}
			LoadFloatValue::LoadFloatValue(const x86::memory::Memory32 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Float_Value_32__64__80_C1(), source)
			{

			}
			LoadFloatValue::LoadFloatValue(const x86::memory::Memory64 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Float_Value_32__64__80_C1(), source)
			{

			}
			LoadFloatValue::LoadFloatValue(const x86::memory::Memory80 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Float_Value_32__64__80_C1(), source)
			{

			}
			
			LoadIntegerValue::LoadIntegerValue(const x86::label::CodeLabel &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Integer_Value_16__32__64_C1(), source)
			{

			}
			
			LoadIntegerValue::LoadIntegerValue(const x86::memory::Memory16 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Integer_Value_16__32__64_C1(), source)
			{

			}
			
			LoadIntegerValue::LoadIntegerValue(const x86::memory::Memory32 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Integer_Value_16__32__64_C1(), source)
			{

			}
			
			LoadIntegerValue::LoadIntegerValue(const x86::memory::Memory64 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Integer_Value_16__32__64_C1(), source)
			{

			}
			
			LoadLoadBinaryCodedDecimal::LoadLoadBinaryCodedDecimal(const x86::label::CodeLabel &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Binary_Coded_Decimal_80_C1(), source)
			{

			}
			
			LoadLoadBinaryCodedDecimal::LoadLoadBinaryCodedDecimal(const x86::memory::Memory80 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Load_Binary_Coded_Decimal_80_C1(), source)
			{

			}
			
			SaveFloatValue::SaveFloatValue(const x86::reg::FPU::Data &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Float_Value_32__64_C1(), source)
			{

			}
			SaveFloatValue::SaveFloatValue(const x86::memory::Memory32 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Float_Value_32__64_C1(), source)
			{

			}
			SaveFloatValue::SaveFloatValue(const x86::memory::Memory64 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Float_Value_32__64_C1(), source)
			{

			}
			SaveIntegerValue::SaveIntegerValue(const x86::memory::Memory16 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Integer_Value_16__32_C1(), source)
			{

			}
			SaveIntegerValue::SaveIntegerValue(const x86::memory::Memory32 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Integer_Value_16__32_C1(), source)
			{

			}
			
			SaveFloatValuePopStack::SaveFloatValuePopStack(const x86::reg::FPU::Data &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Pop_Float_Value_Stack_32__64__80_C1(), source)
			{

			}
			SaveFloatValuePopStack::SaveFloatValuePopStack(const x86::memory::Memory32 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Pop_Float_Value_Stack_32__64__80_C1(), source)
			{

			}
			SaveFloatValuePopStack::SaveFloatValuePopStack(const x86::memory::Memory64 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Pop_Float_Value_Stack_32__64__80_C1(), source)
			{

			}
			SaveFloatValuePopStack::SaveFloatValuePopStack(const x86::memory::Memory80 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Pop_Float_Value_Stack_32__64__80_C1(), source)
			{

			}
			SaveIntegerValuePopStack::SaveIntegerValuePopStack(const x86::memory::Memory16 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Pop_Integer_Value_16__32__64_C1(), source)
			{

			}
			SaveIntegerValuePopStack::SaveIntegerValuePopStack(const x86::memory::Memory32 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Pop_Integer_Value_16__32__64_C1(), source)
			{

			}
			SaveIntegerValuePopStack::SaveIntegerValuePopStack(const x86::memory::Memory64 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Pop_Integer_Value_16__32__64_C1(), source)
			{

			}
			SaveBinaryCodedDecimalPopStack::SaveBinaryCodedDecimalPopStack(const x86::memory::Memory80 &source) 
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Store_Pop_Binary_Coded_Decimal_80_C1(), source)
			{

			}
			DataTransmittedMoveIfBlew::DataTransmittedMoveIfBlew(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination)
				: AbstractInstruction(x86::mnemonic::FPU::data_transmitted::Move_If_Below_C1(), source, destination)
			{
				
			}
		}
	}
}