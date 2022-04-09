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
				class General8;
				class General16;
				class General32;	 
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
		explicit IntegerDataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::general::General8 &destination);
		explicit IntegerDataTransmitted(const x86::immediate::Immediate8 &source, const x86::reg::classic::offset::Offset8 &destination);
		explicit IntegerDataTransmitted(const x86::immediate::Immediate16 &source, const  x86::reg::classic::general::General16 &destination);
		explicit IntegerDataTransmitted(const x86::immediate::Immediate32 &source, const  x86::reg::classic::general::General32 &destination);
	
		explicit IntegerDataTransmitted(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::general::General8 &destination);
		explicit IntegerDataTransmitted(const  x86::reg::classic::general::General16 &source, const  x86::reg::classic::general::General16 &destination);
		explicit IntegerDataTransmitted(const  x86::reg::classic::general::General32 &source, const  x86::reg::classic::general::General32 &destination);
	
		explicit IntegerDataTransmitted(const  x86::reg::classic::general::General16 &source, const  x86::reg::classic::segment::Segment &destination);
		explicit IntegerDataTransmitted(const  x86::reg::classic::segment::Segment &source, const  x86::reg::classic::general::General16 &destination);
	
		explicit IntegerDataTransmitted(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::offset::Offset16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::classic::offset::Offset32 &source, const x86::reg::classic::offset::Offset32 &destination);
	
		explicit IntegerDataTransmitted(const x86::reg::classic::general::General16 &source, const x86::reg::classic::offset::Offset16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::classic::offset::Offset16 &source, const  x86::reg::classic::general::General16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::classic::general::General32 &source, const x86::reg::classic::offset::Offset32 &destination);
		explicit IntegerDataTransmitted(const x86::reg::classic::offset::Offset32 &source, const  x86::reg::classic::general::General32 &destination);
	
		explicit IntegerDataTransmitted(const  x86::reg::classic::segment::Segment &source, const x86::reg::classic::offset::Offset16 &destination);
		explicit IntegerDataTransmitted(const x86::reg::classic::offset::Offset16 &source, const  x86::reg::classic::segment::Segment &destination);
		
		explicit IntegerDataTransmitted(const x86::reg::classic::general::General8 &source, const x86::memory::Memory &destination);
		explicit IntegerDataTransmitted(const x86::memory::Memory &source, const x86::reg::classic::general::General8 &destination);
	};
	
	class IntegerDataTransmittedFillSign : public AbstractInstruction {
	public:
		explicit IntegerDataTransmittedFillSign(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::general::General16 &destination);
		explicit IntegerDataTransmittedFillSign(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::general::General32 &destination);
		explicit IntegerDataTransmittedFillSign(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::segment::Segment &destination);
		explicit IntegerDataTransmittedFillSign(const  x86::reg::classic::general::General16 &source, const  x86::reg::classic::general::General32 &destination);
		
		explicit IntegerDataTransmittedFillSign(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::offset::Offset32 &destination);
	
		explicit IntegerDataTransmittedFillSign(const x86::reg::classic::general::General16 &source, const x86::reg::classic::offset::Offset32 &destination);
		explicit IntegerDataTransmittedFillSign(const x86::reg::classic::offset::Offset16 &source, const  x86::reg::classic::general::General32 &destination);
	
	};
	
	class IntegerDataTransmittedFillZero : public AbstractInstruction {
	public:
		explicit IntegerDataTransmittedFillZero(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::general::General16 &destination);
		explicit IntegerDataTransmittedFillZero(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::general::General32 &destination);
		explicit IntegerDataTransmittedFillZero(const  x86::reg::classic::general::General8 &source, const  x86::reg::classic::segment::Segment &destination);
		explicit IntegerDataTransmittedFillZero(const  x86::reg::classic::general::General16 &source, const  x86::reg::classic::general::General32 &destination);
		
		explicit IntegerDataTransmittedFillZero(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::offset::Offset32 &destination);
	
		explicit IntegerDataTransmittedFillZero(const x86::reg::classic::general::General16 &source, const x86::reg::classic::offset::Offset32 &destination);
		explicit IntegerDataTransmittedFillZero(const x86::reg::classic::offset::Offset16 &source, const  x86::reg::classic::general::General32 &destination);
	
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
	
	class PushGeneralOffsetWordToStack : public AbstractInstruction {
	public:
		explicit PushGeneralOffsetWordToStack();
	};
	class PopGeneralOffsetWordFromStack : public AbstractInstruction {
	public:
		explicit PopGeneralOffsetWordFromStack();
	};
	class PushGeneralOffsetDoubleWordToStack : public AbstractInstruction {
	public:
		explicit PushGeneralOffsetDoubleWordToStack();
	};
	class PopGeneralOffsetDoubleWordFromStack : public AbstractInstruction {
	public:
		explicit PopGeneralOffsetDoubleWordFromStack();
	};
	class ReverseRegister32Bytes : public AbstractInstruction {
	public:
		explicit ReverseRegister32Bytes(const x86::reg::classic::general::General32 &source);
		explicit ReverseRegister32Bytes(const x86::reg::classic::offset::Offset32 &source);
	};
	class SwapGeneralOffsetMemory : public AbstractInstruction {
	public:
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::general::General8 &source, const x86::reg::classic::general::General8 &destination);
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::general::General8 &source, const x86::reg::classic::offset::Offset8 &destination);
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::general::General8 &source, const x86::memory::Memory8 &destination);
		
		
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::general::General16 &source, const x86::reg::classic::general::General16 &destination);
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::general::General16 &source, const x86::reg::classic::offset::Offset16 &destination);
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::general::General16 &source, const x86::memory::Memory16 &destination);
		
		
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::general::General32 &source, const x86::reg::classic::general::General32 &destination);
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::general::General32 &source, const x86::reg::classic::offset::Offset32 &destination);
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::general::General32 &source, const x86::memory::Memory32 &destination);
		
		
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::offset::Offset8 &source, const x86::reg::classic::offset::Offset8 &destination);
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::offset::Offset8 &source, const x86::memory::Memory8 &destination);
		
		
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::offset::Offset16 &destination);
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::offset::Offset16 &source, const x86::memory::Memory16 &destination);
		
		
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::offset::Offset32 &source, const x86::reg::classic::offset::Offset32 &destination);
		explicit SwapGeneralOffsetMemory(const x86::reg::classic::offset::Offset32 &source, const x86::memory::Memory32 &destination);
		
	};
	class CompareAccumulatorTransmitted :public AbstractInstruction {
	public:
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::General8 &source, const x86::reg::classic::general::General8 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::General8 &source, const x86::reg::classic::offset::Offset8 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::General8 &source, const x86::memory::Memory8 &destination);
		
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::offset::Offset8 &source, const x86::reg::classic::offset::Offset8 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::offset::Offset8 &source, const x86::reg::classic::general::General8 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::offset::Offset8 &source, const x86::memory::Memory8 &destination);
		
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::General16 &source, const x86::reg::classic::general::General16 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::General16 &source, const x86::reg::classic::offset::Offset16 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::General16 &source, const x86::memory::Memory16 &destination);
		
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::offset::Offset16 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::general::General16 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::offset::Offset16 &source, const x86::memory::Memory16 &destination);
		
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::General32 &source, const x86::reg::classic::general::General32 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::General32 &source, const x86::reg::classic::offset::Offset32 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::general::General32 &source, const x86::memory::Memory32 &destination);
		
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::offset::Offset32 &source, const x86::reg::classic::offset::Offset32 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::offset::Offset32 &source, const x86::reg::classic::general::General32 &destination);
		explicit CompareAccumulatorTransmitted(const x86::reg::classic::offset::Offset32 &source, const x86::memory::Memory32 &destination);
	};
	
	class SwapAdd : public AbstractInstruction {
	public:
		explicit SwapAdd(const x86::reg::classic::general::General8 &source, const x86::reg::classic::general::General8 &destination);
		explicit SwapAdd(const x86::reg::classic::general::General8 &source, const x86::reg::classic::offset::Offset8 &destination);
		explicit SwapAdd(const x86::reg::classic::general::General8 &source, const x86::memory::Memory8 &destination);
		
		explicit SwapAdd(const x86::reg::classic::offset::Offset8 &source, const x86::reg::classic::offset::Offset8 &destination);
		explicit SwapAdd(const x86::reg::classic::offset::Offset8 &source, const x86::reg::classic::general::General8 &destination);
		explicit SwapAdd(const x86::reg::classic::offset::Offset8 &source, const x86::memory::Memory8 &destination);
		
		explicit SwapAdd(const x86::reg::classic::general::General16 &source, const x86::reg::classic::general::General16 &destination);
		explicit SwapAdd(const x86::reg::classic::general::General16 &source, const x86::reg::classic::offset::Offset16 &destination);
		explicit SwapAdd(const x86::reg::classic::general::General16 &source, const x86::memory::Memory16 &destination);
		
		explicit SwapAdd(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::offset::Offset16 &destination);
		explicit SwapAdd(const x86::reg::classic::offset::Offset16 &source, const x86::reg::classic::general::General16 &destination);
		explicit SwapAdd(const x86::reg::classic::offset::Offset16 &source, const x86::memory::Memory16 &destination);
		
		explicit SwapAdd(const x86::reg::classic::general::General32 &source, const x86::reg::classic::general::General32 &destination);
		explicit SwapAdd(const x86::reg::classic::general::General32 &source, const x86::reg::classic::offset::Offset32 &destination);
		explicit SwapAdd(const x86::reg::classic::general::General32 &source, const x86::memory::Memory32 &destination);
		
		explicit SwapAdd(const x86::reg::classic::offset::Offset32 &source, const x86::reg::classic::offset::Offset32 &destination);
		explicit SwapAdd(const x86::reg::classic::offset::Offset32 &source, const x86::reg::classic::general::General32 &destination);
		explicit SwapAdd(const x86::reg::classic::offset::Offset32 &source, const x86::memory::Memory32 &destination);
	};
	
	class TransmittedByteToAL : public AbstractInstruction {
	public:
		explicit TransmittedByteToAL();
	};
}
#endif