#ifndef __X86_CONCRETE_INSTRUCTION_H__
#define __X86_CONCRETE_INSTRUCTION_H__
#include "AbstractInstruction.h"
namespace x86
{
	namespace immediate 
	{
		class Immediate8;
		class Immediate16;
		class Immediate32;
	}
	namespace memory
	{		
		class Memory;
		class Memory8;
		class Memory16;
		class Memory32;
	}
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class Operation8;
				class Operation16;
				class Operation32;	 
			}
			namespace offset
			{
				class Offset8;
			}
			namespace segment
			{
				class Segment;
			}
		}
	}
	class NoOperation : public AbstractInstruction {
	public:
		explicit NoOperation();
	};

	class IntegerDataTransmitted : public AbstractInstruction {
	public:
		explicit IntegerDataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::Operation8 &destination);
		explicit IntegerDataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::offset::Offset8 &destination);
		explicit IntegerDataTransmitted(const x86::immediate::Immediate16 &source, const  x86::reg::classic::general::operation::Operation16 &destination);
		explicit IntegerDataTransmitted(const x86::immediate::Immediate32 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
	
		explicit IntegerDataTransmitted(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation8 &destination);
		explicit IntegerDataTransmitted(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation16 &destination);
		explicit IntegerDataTransmitted(const  x86::reg::classic::general::operation::Operation32 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
	
		explicit IntegerDataTransmitted(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::segment::Segment &destination);
		explicit IntegerDataTransmitted(const  x86::reg::classic::segment::Segment &source, const  x86::reg::classic::general::operation::Operation16 &destination);
	
		explicit IntegerDataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination);
	
		explicit IntegerDataTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::general::operation::Operation16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination);
		explicit IntegerDataTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
	
		explicit IntegerDataTransmitted(const  x86::reg::classic::segment::Segment &source, const x86::reg::classic::general::offset::Offset16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::segment::Segment &destination);
		
		explicit IntegerDataTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory &destination);
		explicit IntegerDataTransmitted(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation8 &destination);
	};
	
	class IntegerDataTransmittedFillSign : public AbstractInstruction {
	public:
		explicit IntegerDataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation16 &destination);
		explicit IntegerDataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
		explicit IntegerDataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::segment::Segment &destination);
		explicit IntegerDataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
		
		explicit IntegerDataTransmittedFillSign(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset32 &destination);
	
		explicit IntegerDataTransmittedFillSign(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset32 &destination);
		explicit IntegerDataTransmittedFillSign(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
	
	};
	
	class IntegerDataTransmittedFillZero : public AbstractInstruction {
	public:
		explicit IntegerDataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation16 &destination);
		explicit IntegerDataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
		explicit IntegerDataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::segment::Segment &destination);
		explicit IntegerDataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
		
		explicit IntegerDataTransmittedFillZero(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset32 &destination);
	
		explicit IntegerDataTransmittedFillZero(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset32 &destination);
		explicit IntegerDataTransmittedFillZero(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
	
	};
	
	class PushIntegerToStack : public AbstractInstruction {
	public:
		explicit PushIntegerToStack(const x86::memory::Memory8 &source);
		explicit PushIntegerToStack(const x86::memory::Memory16 &source);
		explicit PushIntegerToStack(const x86::memory::Memory32 &source);
		
		explicit PushIntegerToStack(const x86::reg::Register &source);
		
		explicit PushIntegerToStack(const x86::immediate::Immediate32 &source);
	};
	
	class PopIntegerFromStack : public AbstractInstruction {
	public:
		explicit PopIntegerFromStack(const x86::memory::Memory8 &source);
		explicit PopIntegerFromStack(const x86::memory::Memory16 &source);
		explicit PopIntegerFromStack(const x86::memory::Memory32 &source);
		
		explicit PopIntegerFromStack(const x86::reg::Register &source);
	};
	
	class PushOperationOffsetWordToStack : public AbstractInstruction {
	public:
		explicit PushOperationOffsetWordToStack();
	};
	class PopOperationOffsetWordFromStack : public AbstractInstruction {
	public:
		explicit PopOperationOffsetWordFromStack();
	};
	class PushOperationOffsetDoubleWordToStack : public AbstractInstruction {
	public:
		explicit PushOperationOffsetDoubleWordToStack();
	};
	class PopOperationOffsetDoubleWordFromStack : public AbstractInstruction {
	public:
		explicit PopOperationOffsetDoubleWordFromStack();
	};
	class ReverseRegister32Bytes : public AbstractInstruction {
	public:
		explicit ReverseRegister32Bytes(const x86::reg::classic::general::operation::Operation32 &source);
		explicit ReverseRegister32Bytes(const x86::reg::classic::general::offset::Offset32 &source);
	};
	class SwapOperationOffsetMemory : public AbstractInstruction {
	public:
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::operation::Operation8 &destination);
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::offset::Offset8 &destination);
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory8 &destination);
		
		
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::operation::Operation16 &destination);
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination);
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation16 &source, const x86::memory::Memory16 &destination);
		
		
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::operation::Operation32 &destination);
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination);
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::operation::Operation32 &source, const x86::memory::Memory32 &destination);
		
		
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::offset::Offset8 &destination);
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset8 &source, const x86::memory::Memory8 &destination);
		
		
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination);
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset16 &source, const x86::memory::Memory16 &destination);
		
		
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination);
		explicit SwapOperationOffsetMemory(const x86::reg::classic::general::offset::Offset32 &source, const x86::memory::Memory32 &destination);
		
	};
	class CompareAccumulatorTransmitted :public AbstractInstruction {
	public:
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::operation::Operation8 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::offset::Offset8 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory8 &destination);
		
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::offset::Offset8 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::operation::Operation8 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset8 &source, const x86::memory::Memory8 &destination);
		
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::operation::Operation16 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::memory::Memory16 &destination);
		
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::operation::Operation16 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::memory::Memory16 &destination);
		
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::operation::Operation32 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::memory::Memory32 &destination);
		
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::operation::Operation32 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::memory::Memory32 &destination);
	};
	
	class SwapAdd : public AbstractInstruction {
	public:
		explicit SwapAdd(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::operation::Operation8 &destination);
		explicit SwapAdd(const x86::reg::classic::general::operation::Operation8 &source, const x86::reg::classic::general::offset::Offset8 &destination);
		explicit SwapAdd(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory8 &destination);
		
		explicit SwapAdd(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::offset::Offset8 &destination);
		explicit SwapAdd(const x86::reg::classic::general::offset::Offset8 &source, const x86::reg::classic::general::operation::Operation8 &destination);
		explicit SwapAdd(const x86::reg::classic::general::offset::Offset8 &source, const x86::memory::Memory8 &destination);
		
		explicit SwapAdd(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::operation::Operation16 &destination);
		explicit SwapAdd(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination);
		explicit SwapAdd(const x86::reg::classic::general::operation::Operation16 &source, const x86::memory::Memory16 &destination);
		
		explicit SwapAdd(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination);
		explicit SwapAdd(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::operation::Operation16 &destination);
		explicit SwapAdd(const x86::reg::classic::general::offset::Offset16 &source, const x86::memory::Memory16 &destination);
		
		explicit SwapAdd(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::operation::Operation32 &destination);
		explicit SwapAdd(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination);
		explicit SwapAdd(const x86::reg::classic::general::operation::Operation32 &source, const x86::memory::Memory32 &destination);
		
		explicit SwapAdd(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination);
		explicit SwapAdd(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::operation::Operation32 &destination);
		explicit SwapAdd(const x86::reg::classic::general::offset::Offset32 &source, const x86::memory::Memory32 &destination);
	};
	
	class TransmittedByteToAL : public AbstractInstruction {
	public:
		explicit TransmittedByteToAL();
	};
	
	class ReadFromIOPortToAccumulator : public AbstractInstruction {
	public:
		explicit ReadFromIOPortToAccumulator(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::AccumulatorLow &destination);
		explicit ReadFromIOPortToAccumulator(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::Accumulator &destination);
		explicit ReadFromIOPortToAccumulator(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::AccumulatorExtend &destination);
	};
	
	class WriteFromAccumulatorToIOPort : public AbstractInstruction {
	public:
		explicit WriteFromAccumulatorToIOPort(const x86::reg::classic::general::operation::AccumulatorLow &source, const x86::immediate::Immediate8 &destination);
		explicit WriteFromAccumulatorToIOPort(const x86::reg::classic::general::operation::Accumulator &source, const x86::immediate::Immediate8 &destination);
		explicit WriteFromAccumulatorToIOPort(const x86::reg::classic::general::operation::AccumulatorExtend &source, const x86::immediate::Immediate8 &destination);
	};
	
	class LoadEffectiveAddress : public AbstractInstruction {
	public:
		explicit LoadEffectiveAddress(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination);
		explicit LoadEffectiveAddress(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation32 &destination);
	};
	
	class LoadPointerToDS : public AbstractInstruction {
	public:
		explicit LoadPointerToDS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination);
	};
	
	class LoadPointerToES : public AbstractInstruction {
	public:
		explicit LoadPointerToES(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination);
	};
	
	class LoadPointerToFS : public AbstractInstruction {
	public:
		explicit LoadPointerToFS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination);
	};
	
	class LoadPointerToGS : public AbstractInstruction {
	public:
		explicit LoadPointerToGS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination);
	};
	
	class LoadPointerToSS : public AbstractInstruction {
	public:
		explicit LoadPointerToSS(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation16 &destination);
	};
	
	class LoadFlagsToAH : public AbstractInstruction {
	public:
		explicit LoadFlagsToAH();
	};
	
	class SaveFlagsFromAH : public AbstractInstruction {
	public:
		explicit SaveFlagsFromAH();
	};
	class PushFlagsWordToStack : public AbstractInstruction {
	public:
		explicit PushFlagsWordToStack();
	};
	class PopFlagsWordFromStack : public AbstractInstruction {
	public:
		explicit PopFlagsWordFromStack();
	};
	class PushFlagsDoubleWordToStack : public AbstractInstruction {
	public:
		explicit PushFlagsDoubleWordToStack();
	};
	class PopFlagsDoubleWordFromStack : public AbstractInstruction {
	public:
		explicit PopFlagsDoubleWordFromStack();
	};
	
	class IntegerAdd : public AbstractInstruction {
	public:
		explicit IntegerAdd(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);
		explicit IntegerAdd(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination);
		explicit IntegerAdd(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination);
		explicit IntegerAdd(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);
		explicit IntegerAdd(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
	};
	
	class IntegerAddCarray : public AbstractInstruction {
	public:
		explicit IntegerAddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);
		explicit IntegerAddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination);
		explicit IntegerAddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination);
		explicit IntegerAddCarray(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);
		explicit IntegerAddCarray(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
	};
	
	class IntegerIncrease : public AbstractInstruction {
	public:
		explicit IntegerIncrease(const x86::reg::classic::general::General8 &source);
		explicit IntegerIncrease(const x86::reg::classic::general::General16 &source);
		explicit IntegerIncrease(const x86::reg::classic::general::General32 &source);
	};

}
#endif