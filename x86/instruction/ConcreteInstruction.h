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
				class General;
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
	namespace label 
	{
		class CodeLabel;
	}
	namespace instruction
	{
		class NoOperation : public AbstractInstruction {
		public:
			explicit NoOperation();
		};

		class DataTransmitted : public AbstractInstruction {
		public:
			explicit DataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::operation::Operation8 &destination);
			explicit DataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::offset::Offset8 &destination);
			explicit DataTransmitted(const x86::immediate::Immediate16 &source, const  x86::reg::classic::general::operation::Operation16 &destination);
			explicit DataTransmitted(const x86::immediate::Immediate32 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
	
			explicit DataTransmitted(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation8 &destination);
			explicit DataTransmitted(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation16 &destination);
			explicit DataTransmitted(const  x86::reg::classic::general::operation::Operation32 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
	
			explicit DataTransmitted(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::segment::Segment &destination);
			explicit DataTransmitted(const  x86::reg::classic::segment::Segment &source, const  x86::reg::classic::general::operation::Operation16 &destination);
	
			explicit DataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset16 &destination);
			explicit DataTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const x86::reg::classic::general::offset::Offset32 &destination);
	
			explicit DataTransmitted(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset16 &destination);
			explicit DataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::general::operation::Operation16 &destination);
			explicit DataTransmitted(const x86::reg::classic::general::operation::Operation32 &source, const x86::reg::classic::general::offset::Offset32 &destination);
			explicit DataTransmitted(const x86::reg::classic::general::offset::Offset32 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
	
			explicit DataTransmitted(const  x86::reg::classic::segment::Segment &source, const x86::reg::classic::general::offset::Offset16 &destination);
			explicit DataTransmitted(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::segment::Segment &destination);
		
			explicit DataTransmitted(const x86::reg::classic::general::operation::Operation8 &source, const x86::memory::Memory &destination);
			explicit DataTransmitted(const x86::memory::Memory &source, const x86::reg::classic::general::operation::Operation8 &destination);
		};
	
		class DataTransmittedFillSign : public AbstractInstruction {
		public:
			explicit DataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation16 &destination);
			explicit DataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
			explicit DataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::segment::Segment &destination);
			explicit DataTransmittedFillSign(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
		
			explicit DataTransmittedFillSign(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset32 &destination);
	
			explicit DataTransmittedFillSign(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset32 &destination);
			explicit DataTransmittedFillSign(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
	
		};
	
		class DataTransmittedFillZero : public AbstractInstruction {
		public:
			explicit DataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation16 &destination);
			explicit DataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
			explicit DataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation8 &source, const  x86::reg::classic::segment::Segment &destination);
			explicit DataTransmittedFillZero(const  x86::reg::classic::general::operation::Operation16 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
		
			explicit DataTransmittedFillZero(const x86::reg::classic::general::offset::Offset16 &source, const x86::reg::classic::general::offset::Offset32 &destination);
	
			explicit DataTransmittedFillZero(const x86::reg::classic::general::operation::Operation16 &source, const x86::reg::classic::general::offset::Offset32 &destination);
			explicit DataTransmittedFillZero(const x86::reg::classic::general::offset::Offset16 &source, const  x86::reg::classic::general::operation::Operation32 &destination);
	
		};
	
		class PushToStack : public AbstractInstruction {
		public:
			explicit PushToStack(const x86::memory::Memory8 &source);
			explicit PushToStack(const x86::memory::Memory16 &source);
			explicit PushToStack(const x86::memory::Memory32 &source);
		
			explicit PushToStack(const x86::reg::Register &source);
		
			explicit PushToStack(const x86::immediate::Immediate32 &source);
		};
	
		class PopFromStack : public AbstractInstruction {
		public:
			explicit PopFromStack(const x86::memory::Memory8 &source);
			explicit PopFromStack(const x86::memory::Memory16 &source);
			explicit PopFromStack(const x86::memory::Memory32 &source);
		
			explicit PopFromStack(const x86::reg::Register &source);
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
	
		class Add : public AbstractInstruction {
		public:
			explicit Add(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);
			explicit Add(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination);
			explicit Add(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination);
			explicit Add(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);
			explicit Add(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
		};
	
		class AddCarray : public AbstractInstruction {
		public:
			explicit AddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);
			explicit AddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination);
			explicit AddCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination);
			explicit AddCarray(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);
			explicit AddCarray(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
		};
	
		class Increase : public AbstractInstruction {
		public:
			explicit Increase(const x86::reg::classic::general::General8 &source);
			explicit Increase(const x86::reg::classic::general::General16 &source);
			explicit Increase(const x86::reg::classic::general::General32 &source);
		};
	
		class AddConvertASCIIFormat : public AbstractInstruction {
		public:
			explicit AddConvertASCIIFormat();
		};
	
		class AddConvertDecimalFormat : public AbstractInstruction {
		public:
			explicit AddConvertDecimalFormat();
		};

		class Sub : public AbstractInstruction {
		public:
			explicit Sub(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);
			explicit Sub(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination);
			explicit Sub(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination);
			explicit Sub(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);
			explicit Sub(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
		};
	
		class SubCarray : public AbstractInstruction {
		public:
			explicit SubCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);
			explicit SubCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination);
			explicit SubCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination);
			explicit SubCarray(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);
			explicit SubCarray(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
		};
		class Decrease : public AbstractInstruction {
		public:
			explicit Decrease(const x86::reg::classic::general::General8 &source);
			explicit Decrease(const x86::reg::classic::general::General16 &source);
			explicit Decrease(const x86::reg::classic::general::General32 &source);
		};
	
		class Negation : public AbstractInstruction {
		public:
			explicit Negation(const x86::reg::classic::general::General8 &source);
			explicit Negation(const x86::reg::classic::general::General16 &source);
			explicit Negation(const x86::reg::classic::general::General32 &source);
		};
	
		class Compare : public AbstractInstruction {
		public:
			explicit Compare(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);
			explicit Compare(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);
			explicit Compare(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
		};
		class SubConvertASCIIFormat : public AbstractInstruction {
		public:
			explicit SubConvertASCIIFormat();
		};

		class SubConvertDecimalFormat : public AbstractInstruction {
		public:
			explicit SubConvertDecimalFormat();
		};
	
		class UnsignedMultiply : public AbstractInstruction {
		public:
			explicit UnsignedMultiply(const x86::reg::classic::general::General8 &source);
			explicit UnsignedMultiply(const x86::reg::classic::general::General16 &source);
			explicit UnsignedMultiply(const x86::reg::classic::general::General32 &source);
		
			const reg::classic::general::General &ResultLow()const;
			const reg::classic::general::General &ResultHigh()const;
	
		private:
			const reg::classic::general::General &m_result_low;
			const reg::classic::general::General &m_result_high;
		};
	
		class SignedMultiply : public AbstractInstruction {
		public:
			explicit SignedMultiply(const x86::reg::classic::general::General8 &source);
			explicit SignedMultiply(const x86::reg::classic::general::General16 &source);
			explicit SignedMultiply(const x86::reg::classic::general::General32 &source);
		
			const reg::classic::general::General &ResultLow()const;
			const reg::classic::general::General &ResultHigh()const;
	
		private:
			const reg::classic::general::General &m_result_low;
			const reg::classic::general::General &m_result_high;
		};
	
		class MulConvertASCIIFormat : public AbstractInstruction {
		public:
			explicit MulConvertASCIIFormat();
		};
	
		class UnsignedDivide : public AbstractInstruction {
		public:
			explicit UnsignedDivide(const x86::reg::classic::general::General8 &source);
			explicit UnsignedDivide(const x86::reg::classic::general::General16 &source);
			explicit UnsignedDivide(const x86::reg::classic::general::General32 &source);
		
			const reg::classic::general::General &Quotient()const;
			const reg::classic::general::General &Remainder()const;
	
		private:
			const reg::classic::general::General &m_quotient;
			const reg::classic::general::General &m_remainder;
		};
	
		class SignedDivide : public AbstractInstruction {
		public:
			explicit SignedDivide(const x86::reg::classic::general::General8 &source);
			explicit SignedDivide(const x86::reg::classic::general::General16 &source);
			explicit SignedDivide(const x86::reg::classic::general::General32 &source);
		
			const reg::classic::general::General &Quotient()const;
			const reg::classic::general::General &Remainder()const;
	
		private:
			const reg::classic::general::General &m_quotient;
			const reg::classic::general::General &m_remainder;
		};

		class DivideConvertASCIIFormat : public AbstractInstruction {
		public:
			explicit DivideConvertASCIIFormat();
			explicit DivideConvertASCIIFormat(const x86::immediate::Immediate8& source);
		};
	
		class ConvertByteToWord : public AbstractInstruction {
		public:
			explicit ConvertByteToWord();
			const reg::classic::general::operation::Accumulator &Result()const;
		private:
			const reg::classic::general::operation::Accumulator &m_result;
		};
	
		class ConvertWordToDoubleAccumulator : public AbstractInstruction {
		public:
			explicit ConvertWordToDoubleAccumulator();
			const reg::classic::general::operation::AccumulatorExtend &Result()const;
		private:
			const reg::classic::general::operation::AccumulatorExtend &m_result;
		};
	
		class ConvertWordToDoubleData : public AbstractInstruction {
		public:
			explicit ConvertWordToDoubleData();
			const reg::classic::general::operation::Accumulator &ResultLow()const;
			const reg::classic::general::operation::Data &ResultHigh()const;
	
		private:
			const reg::classic::general::operation::Accumulator &m_result_low;
			const reg::classic::general::operation::Data &m_result_high;
		};
	
		class LogicalAND : public AbstractInstruction {
		public:
			explicit LogicalAND(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);
		
			explicit LogicalAND(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination);
		
			explicit LogicalAND(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination);
		
			explicit LogicalAND(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);
		
			explicit LogicalAND(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
		};

		class LogicalInclusiveOR : public AbstractInstruction {
		public:
			explicit LogicalInclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);

			explicit LogicalInclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination);

			explicit LogicalInclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination);

			explicit LogicalInclusiveOR(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);

			explicit LogicalInclusiveOR(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
		};
	
		class LogicalExclusiveOR : public AbstractInstruction {
		public:
			explicit LogicalExclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);

			explicit LogicalExclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination);

			explicit LogicalExclusiveOR(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination);

			explicit LogicalExclusiveOR(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);

			explicit LogicalExclusiveOR(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
		};
	
		class LogicalNOT : public AbstractInstruction {
		public:
			explicit LogicalNOT(const x86::reg::classic::general::General8 &source);

			explicit LogicalNOT(const x86::reg::classic::general::General16 &source);

			explicit LogicalNOT(const x86::reg::classic::general::General32 &source);
		};
	
		class LogicalCompare : public AbstractInstruction {
		public:
			explicit LogicalCompare(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination);

			explicit LogicalCompare(const x86::immediate::Immediate16 &source, const x86::reg::classic::general::General16 &destination);

			explicit LogicalCompare(const x86::immediate::Immediate32 &source, const x86::reg::classic::general::General32 &destination);
		};
	
		class BitsMoveLeft : public AbstractInstruction {
		public:
			explicit BitsMoveLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination);

			explicit BitsMoveLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination);

			explicit BitsMoveLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination);
		};
	
		class BitsMoveLeftSign : public AbstractInstruction {
		public:
			explicit BitsMoveLeftSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination);

			explicit BitsMoveLeftSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination);

			explicit BitsMoveLeftSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination);
		};
	
		class BitsMoveRight : public AbstractInstruction {
		public:
			explicit BitsMoveRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination);

			explicit BitsMoveRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination);

			explicit BitsMoveRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination);
		};
	
		class BitsMoveRightSign : public AbstractInstruction {
		public:
			explicit BitsMoveRightSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination);

			explicit BitsMoveRightSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination);

			explicit BitsMoveRightSign(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination);
		};
	
		class BitsRollLeft : public AbstractInstruction {
		public:
			explicit BitsRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination);

			explicit BitsRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination);

			explicit BitsRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination);
		};
	
		class BitsRollRight : public AbstractInstruction {
		public:
			explicit BitsRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination);

			explicit BitsRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination);

			explicit BitsRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination);
		};
	
		class BitsCarrayRollLeft : public AbstractInstruction {
		public:
			explicit BitsCarrayRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination);

			explicit BitsCarrayRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination);

			explicit BitsCarrayRollLeft(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination);
		};
	
		class BitsCarrayRollRight : public AbstractInstruction {
		public:
			explicit BitsCarrayRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination);

			explicit BitsCarrayRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General16 &destination);

			explicit BitsCarrayRollRight(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General32 &destination);
		};
		
		class InstructionPointerJump : public AbstractInstruction {
		public:
			explicit InstructionPointerJump(const x86::label::CodeLabel &source);
			
			explicit InstructionPointerJump(const x86::memory::Memory8 &source);

			explicit InstructionPointerJump(const x86::memory::Memory16 &source);

			explicit InstructionPointerJump(const x86::memory::Memory32 &source);
			
		};
		
		class CallProcedure : public AbstractInstruction {
		public:
			explicit CallProcedure(const x86::label::CodeLabel &source);
			
			explicit CallProcedure(const x86::memory::Memory8 &source);

			explicit CallProcedure(const x86::memory::Memory16 &source);

			explicit CallProcedure(const x86::memory::Memory32 &source);
			
		};
		
		class ReturnNearFromProcedure : public AbstractInstruction {
		public:
			explicit ReturnNearFromProcedure();
		};
	}
}
#endif