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
		class Memory64;
		class Memory80;
		template<std::size_t size> class MemoryN;
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
				namespace offset
				{
					class Offset8;
					class Offset16;
					class Offset32;
					class Address32;
				}
			}

			namespace segment
			{
				class Segment;
			}
		}
		
		namespace FPU
		{
			class Data;
		}
	}
	namespace label 
	{
		class CodeLabel;
		template<std::size_t size> class SizeLabel;
	}
	namespace instruction
	{
		class NoOperation : public AbstractInstruction {
		public:
			explicit NoOperation();
		};
		namespace integer
		{
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

			class Subtract : public AbstractInstruction {
			public:
				explicit Subtract(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);
				explicit Subtract(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination);
				explicit Subtract(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination);
				explicit Subtract(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);
				explicit Subtract(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
			};
	
			class SubtractCarray : public AbstractInstruction {
			public:
				explicit SubtractCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem8 &destination);
				explicit SubtractCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem16 &destination);
				explicit SubtractCarray(const x86::immediate::Immediate8 &source, const x86::operand::RegMem32 &destination);
				explicit SubtractCarray(const x86::immediate::Immediate16 &source, const x86::operand::RegMem16 &destination);
				explicit SubtractCarray(const x86::immediate::Immediate32 &source, const x86::operand::RegMem32 &destination);
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
			class SubtractConvertASCIIFormat : public AbstractInstruction {
			public:
				explicit SubtractConvertASCIIFormat();
			};

			class SubtractConvertDecimalFormat : public AbstractInstruction {
			public:
				explicit SubtractConvertDecimalFormat();
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
		}
		namespace jump
		{
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
		
			class ReturnFarFromProcedure : public AbstractInstruction {
			public:
				explicit ReturnFarFromProcedure();
			};
		
			class JumpIfUnsignedAbove : public AbstractInstruction {
			public:
				explicit JumpIfUnsignedAbove(const x86::label::CodeLabel &source);
			};
		
			class JumpIfUnsignedAboveEqual : public AbstractInstruction {
			public:
				explicit JumpIfUnsignedAboveEqual(const x86::label::CodeLabel &source);
			};
		
			class JumpIfUnsignedBelow : public AbstractInstruction {
			public:
				explicit JumpIfUnsignedBelow(const x86::label::CodeLabel &source);
			};
		
			class JumpIfUnsignedBelowEqual : public AbstractInstruction {
			public:
				explicit JumpIfUnsignedBelowEqual(const x86::label::CodeLabel &source);
			};
		
			class JumpIfSignedGreater : public AbstractInstruction {
			public:
				explicit JumpIfSignedGreater(const x86::label::CodeLabel &source);
			};
		
			class JumpIfSignedGreaterEqual : public AbstractInstruction {
			public:
				explicit JumpIfSignedGreaterEqual(const x86::label::CodeLabel &source);
			};
		
			class JumpIfSignedLess : public AbstractInstruction {
			public:
				explicit JumpIfSignedLess(const x86::label::CodeLabel &source);
			};
		
			class JumpIfSignedLessEqual : public AbstractInstruction {
			public:
				explicit JumpIfSignedLessEqual(const x86::label::CodeLabel &source);
			};
		
			class JumpIfEqual : public AbstractInstruction {
			public:
				explicit JumpIfEqual(const x86::label::CodeLabel &source);
			};
		
			class JumpIfNotEqual : public AbstractInstruction {
			public:
				explicit JumpIfNotEqual(const x86::label::CodeLabel &source);
			};
		
			class JumpIfCarry : public AbstractInstruction {
			public:
				explicit JumpIfCarry(const x86::label::CodeLabel &source);
			};
		
			class JumpIfNotCarry : public AbstractInstruction {
			public:
				explicit JumpIfNotCarry(const x86::label::CodeLabel &source);
			};
		
			class JumpIfOverflow : public AbstractInstruction {
			public:
				explicit JumpIfOverflow(const x86::label::CodeLabel &source);
			};
		
			class JumpIfNotOverflow : public AbstractInstruction {
			public:
				explicit JumpIfNotOverflow(const x86::label::CodeLabel &source);
			};
		
			class JumpIfParity : public AbstractInstruction {
			public:
				explicit JumpIfParity(const x86::label::CodeLabel &source);
			};
		
			class JumpIfNotParity : public AbstractInstruction {
			public:
				explicit JumpIfNotParity(const x86::label::CodeLabel &source);
			};
		
			class JumpIfSigned : public AbstractInstruction {
			public:
				explicit JumpIfSigned(const x86::label::CodeLabel &source);
			};
			class JumpIfNotSigned : public AbstractInstruction {
			public:
				explicit JumpIfNotSigned(const x86::label::CodeLabel &source);
			};
		
			class LoopCounter : public AbstractInstruction {
			public:
				explicit LoopCounter(const x86::label::CodeLabel &source);
			};
		
			class LoopCounterAndZero : public AbstractInstruction {
			public:
				explicit LoopCounterAndZero(const x86::label::CodeLabel &source);
			};
		
			class LoopCounterAndNotZero : public AbstractInstruction {
			public:
				explicit LoopCounterAndNotZero(const x86::label::CodeLabel &source);
			};
		
			class JumpIfCXZero : public AbstractInstruction {
			public:
				explicit JumpIfCXZero(const x86::label::CodeLabel &source);
			};
		
			class JumpIfECXZero : public AbstractInstruction {
			public:
				explicit JumpIfECXZero(const x86::label::CodeLabel &source);
			};
		
			class CallInterruptProcedure : public AbstractInstruction {
			public:
				explicit CallInterruptProcedure(const x86::immediate::Immediate8 &source);
			};
		
			class CallInterruptProcedureIfOverflow : public AbstractInstruction {
			public:
				explicit CallInterruptProcedureIfOverflow();
			};
		
			class InterruptReturn : public AbstractInstruction {
			public:
				explicit InterruptReturn();
			};
		}
		namespace string
		{
			class Source {
			public:
				const reg::classic::segment::Segment &Segment()const;
				const reg::classic::general::offset::Address32 &Offset()const;
			protected:
				explicit Source(const reg::classic::segment::Segment &segment, const reg::classic::general::offset::Address32 &offset);
				virtual ~Source();
				const reg::classic::segment::Segment &m_segment;
				const reg::classic::general::offset::Address32 &m_offset;
			};
		
			class Destination {
			public:
				const reg::classic::segment::Segment &Segment()const;
				const reg::classic::general::offset::Address32 &Offset()const;
			protected:
				explicit Destination(const reg::classic::segment::Segment &segment, const reg::classic::general::offset::Address32 &offset);
				virtual ~Destination();
				const reg::classic::segment::Segment &m_segment;
				const reg::classic::general::offset::Address32 &m_offset;
			};
		
			class Prefix : public AbstractInstruction {
			protected:
				explicit Prefix(const char *mnemonic);
				virtual ~Prefix();
			};
		
			class PrefixAble : public AbstractInstruction {
			public:
				AbstractInstruction &SetPrefix(const Prefix &prefix);
			protected:
				explicit PrefixAble(const char *mnemonic);
				virtual ~PrefixAble();
			};
		
			class TransmittedBytes : public PrefixAble, public Source, public Destination {
			public:
				explicit TransmittedBytes();
			};
		
			class TransmittedWords : public PrefixAble, public Source, public Destination {
			public:
				explicit TransmittedWords();
			};
		
			class TransmittedDWords : public PrefixAble, public Source, public Destination {
			public:
				explicit TransmittedDWords();
			};
		
			class CompareBytes : public PrefixAble, public Source, public Destination {
			public:
				explicit CompareBytes();
			};
		
			class CompareWords : public PrefixAble, public Source, public Destination {
			public:
				explicit CompareWords();
			};
		
			class CompareDWords : public PrefixAble, public Source, public Destination {
			public:
				explicit CompareDWords();
			};
		
			class CompareALByte : public PrefixAble, public Destination {
			public:
				explicit CompareALByte();
			};
		
			class CompareAXWord : public PrefixAble, public Destination {
			public:
				explicit CompareAXWord();
			};
		
			class CompareEAXDWord : public PrefixAble, public Destination {
			public:
				explicit CompareEAXDWord();
			};
		
			class SaveByteAL : public PrefixAble, public Source {
			public:
				explicit SaveByteAL();
			};
		
			class SaveWordAX : public PrefixAble, public Source {
			public:
				explicit SaveWordAX();
			};
		
			class SaveDWordEAX : public PrefixAble, public Source {
			public:
				explicit SaveDWordEAX();
			};
		
			class SaveByteAddress : public PrefixAble, public Destination {
			public:
				explicit SaveByteAddress();
			};
		
			class SaveWordAddress : public PrefixAble, public Destination {
			public:
				explicit SaveWordAddress();
			};
		
			class SaveDWordAddress : public PrefixAble, public Destination {
			public:
				explicit SaveDWordAddress();
			};
		
			class Counter : public Prefix {
			public:
				explicit Counter(const char *mnemonic);
				const reg::classic::general::operation::CountExtend &Count()const;
			private:
				const reg::classic::general::operation::CountExtend &m_count;
			};
		
			class RepeatCounter : public Counter {
			public:
				explicit RepeatCounter();
			};
		
			class RepeatCounterEqual : public Counter {
			public:
				explicit RepeatCounterEqual();
			};
		
			class RepeatCounterNotEqual : public Counter {
			public:
				explicit RepeatCounterNotEqual();
			};
		
			class RepeatCounterCarray : public Counter {
			public:
				explicit RepeatCounterCarray();
			};
		
			class RepeatCounterNotCarray : public Counter {
			public:
				explicit RepeatCounterNotCarray();
			};
		}
		namespace FPU
		{
			class LoadZero : public AbstractInstruction {
			public:
				explicit LoadZero();
			};
			
			class LoadOne : public AbstractInstruction {
			public:
				explicit LoadOne();
			};
			
			class LoadPI : public AbstractInstruction {
			public:
				explicit LoadPI();
			};
			
			class LoadL2T : public AbstractInstruction {
			public:
				explicit LoadL2T();
			};
			
			class LoadL2E : public AbstractInstruction {
			public:
				explicit LoadL2E();
			};
			
			class LoadLG2 : public AbstractInstruction {
			public:
				explicit LoadLG2();
			};
			
			class LoadLN2 : public AbstractInstruction {
			public:
				explicit LoadLN2();
			};
			
			class LoadFloatValue : public AbstractInstruction {
			public:
				explicit LoadFloatValue(const x86::label::CodeLabel &source);
				explicit LoadFloatValue(const x86::reg::FPU::Data &source);
				explicit LoadFloatValue(const x86::memory::Memory32 &source);
				explicit LoadFloatValue(const x86::memory::Memory64 &source);
				explicit LoadFloatValue(const x86::memory::Memory80 &source);
			};
			
			class LoadIntegerValue : public AbstractInstruction {
			public:
				explicit LoadIntegerValue(const x86::label::CodeLabel &source);
				explicit LoadIntegerValue(const x86::memory::Memory16 &source);
				explicit LoadIntegerValue(const x86::memory::Memory32 &source);
				explicit LoadIntegerValue(const x86::memory::Memory64 &source);
			};
			
			class LoadLoadBinaryCodedDecimal : public AbstractInstruction {
			public:
				explicit LoadLoadBinaryCodedDecimal(const x86::label::CodeLabel &source);
				explicit LoadLoadBinaryCodedDecimal(const x86::memory::Memory80 &source);
			};
			
			class SaveFloatValue : public AbstractInstruction {
			public:
				explicit SaveFloatValue(const x86::reg::FPU::Data &source);
				explicit SaveFloatValue(const x86::memory::Memory32 &source);
				explicit SaveFloatValue(const x86::memory::Memory64 &source);
			};
			
			class SaveIntegerValue : public AbstractInstruction {
			public:
				explicit SaveIntegerValue(const x86::memory::Memory16 &source);
				explicit SaveIntegerValue(const x86::memory::Memory32 &source);
			};
			
			class SaveFloatValuePopStack : public AbstractInstruction {
			public:
				explicit SaveFloatValuePopStack(const x86::reg::FPU::Data &source);
				explicit SaveFloatValuePopStack(const x86::memory::Memory32 &source);
				explicit SaveFloatValuePopStack(const x86::memory::Memory64 &source);
				explicit SaveFloatValuePopStack(const x86::memory::Memory80 &source);
			};
			
			class SaveIntegerValuePopStack : public AbstractInstruction {
			public:
				explicit SaveIntegerValuePopStack(const x86::memory::Memory16 &source);
				explicit SaveIntegerValuePopStack(const x86::memory::Memory32 &source);
				explicit SaveIntegerValuePopStack(const x86::memory::Memory64 &source);
			};
			
			class SaveBinaryCodedDecimalPopStack : public AbstractInstruction {
			public:
				explicit SaveBinaryCodedDecimalPopStack(const x86::memory::Memory80 &source);
			};
			
			class DataTransmittedIfBlew : public AbstractInstruction {
			public:
				explicit DataTransmittedIfBlew(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			
			class DataTransmittedIfBlewEqual : public AbstractInstruction {
			public:
				explicit DataTransmittedIfBlewEqual(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			
			class DataTransmittedIfEqual : public AbstractInstruction {
			public:
				explicit DataTransmittedIfEqual(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			
			class DataTransmittedIfNotBlew : public AbstractInstruction {
			public:
				explicit DataTransmittedIfNotBlew(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			
			class DataTransmittedIfNotBlewEqual : public AbstractInstruction {
			public:
				explicit DataTransmittedIfNotBlewEqual(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class DataTransmittedIfNotEqual : public AbstractInstruction {
			public:
				explicit DataTransmittedIfNotEqual(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class DataTransmittedIfUnordered : public AbstractInstruction {
			public:
				explicit DataTransmittedIfUnordered(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class DataTransmittedIfNotUnordered : public AbstractInstruction {
			public:
				explicit DataTransmittedIfNotUnordered(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class Add : public AbstractInstruction {
			public:
				explicit Add(const x86::memory::Memory32 &source);
				explicit Add(const x86::memory::Memory64 &source);
				explicit Add(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			
			class AddPopStack : public AbstractInstruction {
			public:
				explicit AddPopStack();
				explicit AddPopStack(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			
			class AddInteger : public AbstractInstruction {
			public:
				explicit AddInteger(const x86::memory::Memory32 &source);
				explicit AddInteger(const x86::memory::Memory64 &source);
			};
			
			class Subtract : public AbstractInstruction {
			public:
				explicit Subtract(const x86::memory::Memory32 &source);
				explicit Subtract(const x86::memory::Memory64 &source);
				explicit Subtract(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class SubtractPopStack : public AbstractInstruction {
			public:
				explicit SubtractPopStack();
				explicit SubtractPopStack(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class SubtractInteger : public AbstractInstruction {
			public:
				explicit SubtractInteger(const x86::memory::Memory32 &source);
				explicit SubtractInteger(const x86::memory::Memory64 &source);
			};
			class SwapSubtract : public AbstractInstruction {
			public:
				explicit SwapSubtract(const x86::memory::Memory32 &source);
				explicit SwapSubtract(const x86::memory::Memory64 &source);
				explicit SwapSubtract(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			
			class SwapSubtractPopStack : public AbstractInstruction {
			public:
				explicit SwapSubtractPopStack();
				explicit SwapSubtractPopStack(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class SwapSubtractInteger : public AbstractInstruction {
			public:
				explicit SwapSubtractInteger(const x86::memory::Memory32 &source);
				explicit SwapSubtractInteger(const x86::memory::Memory64 &source);
			};
			
			class Multiply : public AbstractInstruction {
			public:
				explicit Multiply(const x86::memory::Memory32 &source);
				explicit Multiply(const x86::memory::Memory64 &source);
				explicit Multiply(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class MultiplyPopStack : public AbstractInstruction {
			public:
				explicit MultiplyPopStack();
				explicit MultiplyPopStack(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class MultiplyInteger : public AbstractInstruction {
			public:
				explicit MultiplyInteger(const x86::memory::Memory16 &source);
				explicit MultiplyInteger(const x86::memory::Memory32 &source);
			};
			class Divide : public AbstractInstruction {
			public:
				explicit Divide(const x86::memory::Memory32 &source);
				explicit Divide(const x86::memory::Memory64 &source);
				explicit Divide(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class DividePopStack : public AbstractInstruction {
			public:
				explicit DividePopStack();
				explicit DividePopStack(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class DivideInteger : public AbstractInstruction {
			public:
				explicit DivideInteger(const x86::memory::Memory16 &source);
				explicit DivideInteger(const x86::memory::Memory32 &source);
			};
			class SwapDivide : public AbstractInstruction {
			public:
				explicit SwapDivide(const x86::memory::Memory32 &source);
				explicit SwapDivide(const x86::memory::Memory64 &source);
				explicit SwapDivide(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class SwapDividePopStack : public AbstractInstruction {
			public:
				explicit SwapDividePopStack();
				explicit SwapDividePopStack(const x86::reg::FPU::Data &source, const x86::reg::FPU::Data &destination);
			};
			class SwapDivideInteger : public AbstractInstruction {
			public:
				explicit SwapDivideInteger(const x86::memory::Memory16 &source);
				explicit SwapDivideInteger(const x86::memory::Memory32 &source);
			};
			class ChangeSign : public AbstractInstruction {
			public:
				explicit ChangeSign();
			};
			
			class AbsoluteValue : public AbstractInstruction {
			public:
				explicit AbsoluteValue();
			};
			
			class SquareRoot : public AbstractInstruction {
			public:
				explicit SquareRoot();
			};
			class Scale : public AbstractInstruction {
			public:
				explicit Scale();
			};
			
			class RoundToInteger : public AbstractInstruction {
			public:
				explicit RoundToInteger();
			};
			
			class Compare : public AbstractInstruction {
			public:
				explicit Compare();
				explicit Compare(const x86::memory::Memory32 &source);
				explicit Compare(const x86::memory::Memory64 &source);
				explicit Compare(const x86::reg::FPU::Data &source);
			};
			
			class CompareEFlags : public AbstractInstruction {
			public:
				explicit CompareEFlags(const x86::reg::FPU::Data &source);
			};
			
			class CompareEFlagsPopStack : public AbstractInstruction {
			public:
				explicit CompareEFlagsPopStack(const x86::reg::FPU::Data &source);
			};
			
			class CompareInteger : public AbstractInstruction {
			public:
				explicit CompareInteger(const x86::memory::Memory16 &source);
				explicit CompareInteger(const x86::memory::Memory32 &source);
			};
			
			class CompareIntegerPopStack : public AbstractInstruction {
			public:
				explicit CompareIntegerPopStack(const x86::memory::Memory16 &source);
				explicit CompareIntegerPopStack(const x86::memory::Memory32 &source);
			};
			
			class CompareZero : public AbstractInstruction {
			public:
				explicit CompareZero();
			};
			
			class UnorderedCompare : public AbstractInstruction {
			public:
				explicit UnorderedCompare();
				explicit UnorderedCompare(const x86::reg::FPU::Data &source);
			};
			
			class UnorderedComparePopStack : public AbstractInstruction {
			public:
				explicit UnorderedComparePopStack();
				explicit UnorderedComparePopStack(const x86::reg::FPU::Data &source);
			};
			
			class UnorderedComparePopStack2 : public AbstractInstruction {
			public:
				explicit UnorderedComparePopStack2();
			};
			class ExamineValue : public AbstractInstruction {
			public:
				explicit ExamineValue();
			};
			class Init : public AbstractInstruction {
			public:
				explicit Init();
			};
			class ClearExceptions : public AbstractInstruction {
			public:
				explicit ClearExceptions();
			};
			class NoOperation : public AbstractInstruction {
			public:
				explicit NoOperation();
			};
			
			class ExchangeContents : public AbstractInstruction {
			public:
				explicit ExchangeContents();
				explicit ExchangeContents(const x86::reg::FPU::Data &source);
			};
			
			class SaveFPUStatus : public AbstractInstruction {
			public:
				explicit SaveFPUStatus();
				explicit SaveFPUStatus(const x86::memory::Memory16 &source);
			};
			
			class LoadControl : public AbstractInstruction {
			public:
				explicit LoadControl(const x86::memory::Memory16 &source);
			};
			
			class SaveControl : public AbstractInstruction {
			public:
				explicit SaveControl(const x86::memory::Memory16 &source);
			};
			
			class LoadEnvironment : public AbstractInstruction {
			public:
				explicit LoadEnvironment(const x86::label::SizeLabel<14> &source);
				explicit LoadEnvironment(const x86::label::SizeLabel<28> &source);
				explicit LoadEnvironment(const x86::memory::MemoryN<14> &source);
				explicit LoadEnvironment(const x86::memory::MemoryN<28> &source);
			};
			class SaveEnvironment : public AbstractInstruction {
			public:
				explicit SaveEnvironment(const x86::label::SizeLabel<14> &source);
				explicit SaveEnvironment(const x86::label::SizeLabel<28> &source);
				explicit SaveEnvironment(const x86::memory::MemoryN<14> &source);
				explicit SaveEnvironment(const x86::memory::MemoryN<28> &source);
			};
			class RestoreState : public AbstractInstruction {
			public:
				explicit RestoreState(const x86::label::SizeLabel<94> &source);
				explicit RestoreState(const x86::label::SizeLabel<108> &source);
				explicit RestoreState(const x86::memory::MemoryN<94> &source);
				explicit RestoreState(const x86::memory::MemoryN<108> &source);
			};
			class SaveState : public AbstractInstruction {
			public:
				explicit SaveState(const x86::label::SizeLabel<94> &source);
				explicit SaveState(const x86::label::SizeLabel<108> &source);
				explicit SaveState(const x86::memory::MemoryN<94> &source);
				explicit SaveState(const x86::memory::MemoryN<108> &source);
			};
			class Free : public AbstractInstruction {
			public:
				explicit Free(const x86::reg::FPU::Data &source);
			};
			class Decrement : public AbstractInstruction {
			public:
				explicit Decrement();
			};
			class Increment : public AbstractInstruction {
			public:
				explicit Increment();
			};
			class SetProtectedMode : public AbstractInstruction {
			public:
				explicit SetProtectedMode();
			};
		}

	}
}
#endif