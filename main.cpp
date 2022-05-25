#include <iostream>
#include <fstream>
#include <sstream>
#include "Instruction.h"
int main(int argc, char *argv[])
{
	
	std::stringstream out;
	{
		const x86::instruction::NoOperation nop;
		out << nop << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(x86::immediate::ImmediateSigned8(1), AL);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(x86::immediate::ImmediateSigned16(-2), AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(x86::immediate::ImmediateUnSigned32(3), EAX);
		out << move << std::endl;
	}
//	{
//		const x86::instruction::size64::DataTransmitted move(x86::immediate::size64::ImmediateSigned64(3), RAX);
//		out << move << std::endl;
//	}
	{
		const x86::instruction::DataTransmitted move(AX, CS);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(CS, AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AX, DS);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(DS, AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AX, SS);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(SS, AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AX, ES);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(ES, AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AL, BL);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(BL, BH);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(BX, AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AX, SP);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AX, BP);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AX, SI);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AX, DI);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(EAX, EBX);
		out << move << std::endl;
	} 
//	{
//		const x86::instruction::size64::DataTransmitted move(RAX, RBX);
//		out << move << std::endl;
//	}
//	{
//		const x86::instruction::size64::DataTransmitted move(RAX, SS);
//		out << move << std::endl;
//	}
//	{
//		const x86::instruction::size64::DataTransmitted move(RAX, RCX);
//		out << move << std::endl;
//	}
	{
		const x86::instruction::DataTransmitted move(AX, CX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AH, CL);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AH, CH);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(EAX, ECX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AX, DX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(DX, BX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AL, DL);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(AH, DH);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(EAX, EDX);
		out << move << std::endl;
	}
//	{
//		const x86::instruction::size64::DataTransmitted move(RAX, RDX);
//		out << move << std::endl;
//	}
	{
		const x86::instruction::DataTransmitted move(EAX, EBP);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(EAX, ESP);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(ESI, EAX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(EAX, EDI);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmittedFillSign move(AX, EDI);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmittedFillSign move(AX, EDX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmittedFillSign move(DI, EAX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmittedFillZero move(AX, EDX);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmittedFillZero move(DI, EAX);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, disp, ESI, scale, DS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, disp, EAX, scale, DS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(ESP, disp, EAX, scale, DS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EDI, disp, ESI, scale, DS);
		{
			const x86::instruction::DataTransmitted move(AL, mem);
			out << move << std::endl;
		}
		{
			const x86::instruction::DataTransmitted move(mem, AH);
			out << move << std::endl;
		}
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, ESI, scale, DS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, EAX, scale, DS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(ESI, EBX, scale, DS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(ESI, EDI, scale, DS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBX, disp, EBP, DS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBX, disp, EAX,  DS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBP, disp, EBX, DS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBP, disp, ESI, SS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EBX, ESI, CS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EBX, EAX, CS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EDI, CS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, ECX, CS);
		const x86::instruction::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EDX, disp, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EDX, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EDI, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EDI, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EBX, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EBX, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EDI, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EDI, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EBX, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EBX, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI,EDI, ES);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EDI);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EBX);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EBX);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EDI);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EBP);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EBX);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EBX);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EBP);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EDI, disp);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EBP);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX);
		const x86::instruction::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
//	{
//		const x86::instruction::DataTransmitted move(x86::immediate::ImmediateSigned8(1), BPL);
//		out << move << std::endl;
//	}
//	{
//		const x86::instruction::DataTransmitted move(x86::immediate::ImmediateSigned8(1), DIL);
//		out << move << std::endl;
//	}
//	{
//		const x86::instruction::DataTransmitted move(x86::immediate::ImmediateSigned8(1), SIL);
//		out << move << std::endl;
//	}
//	{
//		const x86::instruction::DataTransmitted move(x86::immediate::ImmediateSigned8(1), SPL);
//		out << move << std::endl;
//	}
	{
		const x86::instruction::DataTransmitted move(AX, FS);
		out << move << std::endl;
	}
	{
		const x86::instruction::DataTransmitted move(GS, BX);
		out << move << std::endl;
	}
//	{
//		const x86::instruction::size64::DataTransmitted move(x86::immediate::size64::ImmediateSigned64(3), R8);
//		out << move << std::endl;
//	}
//	{
//		const x86::instruction::DataTransmitted move(x86::immediate::ImmediateSigned32(3), R8D);
//		out << move << std::endl;
//	}

	{
		const x86::memory::Memory8 mem(EBP);
		const x86::instruction::PushToStack push(mem);
		out << push << std::endl;
	}
	{
		const x86::memory::Memory16 mem(EBP);
		const x86::instruction::PushToStack push(mem);
		out << push << std::endl;
	} 
	{
		const x86::memory::Memory32 mem(EBP);
		const x86::instruction::PushToStack push(mem);
		out << push << std::endl;
	}
	{
		const x86::instruction::PushToStack push(EAX);
		out << push << std::endl;
	}
	{
		const x86::instruction::PushToStack push(ESP);
		out << push << std::endl;
	}
	{
		const x86::instruction::PushToStack push(x86::immediate::ImmediateSigned32(3));
		out << push << std::endl;
	}
	
	{
		const x86::memory::Memory8 mem(EBP);
		const x86::instruction::PopFromStack pop(mem);
		out << pop << std::endl;
	}
	{
		const x86::memory::Memory16 mem(EBP);
		const x86::instruction::PopFromStack pop(mem);
		out << pop << std::endl;
	} 
	{
		const x86::memory::Memory32 mem(EBP);
		const x86::instruction::PopFromStack pop(mem);
		out << pop << std::endl;
	}
	{
		const x86::instruction::PopFromStack pop(EAX);
		out << pop << std::endl;
	}
	{
		const x86::instruction::PopFromStack pop(ESP);
		out << pop << std::endl;
	}
	{
		const x86::instruction::ReverseRegister32Bytes reverse(EAX);
		out << reverse << std::endl;
	}
	{
		const x86::instruction::ReverseRegister32Bytes reverse(ESI);
		out << reverse << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(AL, AH);
		out << swap << std::endl;
	}
//	{
//		const x86::instruction::SwapOperationOffsetMemory swap(AL, SIL);
//		out << swap << std::endl;
//	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(AL, x86::memory::Memory8(EBP));
		out << swap << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(AX, BX);
		out << swap << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(AX, SI);
		out << swap << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(AX, x86::memory::Memory16(EBP));
		out << swap << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(EAX, EBX);
		out << swap << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(EAX, ESI);
		out << swap << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(EAX, x86::memory::Memory32(EBP));
		out << swap << std::endl;
	}
//	{
//		const x86::instruction::SwapOperationOffsetMemory swap(SIL, DIL);
//		out << swap << std::endl;
//	}
//	{
//		const x86::instruction::SwapOperationOffsetMemory swap(DIL, x86::memory::Memory8(EBP));
//		out << swap << std::endl;
//	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(SI, DI);
		out << swap << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(DI, x86::memory::Memory16(EBP));
		out << swap << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(ESI, EDI);
		out << swap << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(EDI, x86::memory::Memory32(EBP));
		out << swap << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(ESI, EDI);
		out << swap << std::endl;
	}
	{
		const x86::instruction::SwapOperationOffsetMemory swap(EDI, x86::memory::Memory32(EBP));
		out << swap << std::endl;
	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(AL, AH);
		out << mov << std::endl;
	}
//	{
//		const x86::instruction::CompareAccumulatorTransmitted mov(AL, SIL);
//		out << mov << std::endl;
//	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(AL, x86::memory::Memory8(EBP));
		out << mov << std::endl;
	}
//	{
//		const x86::instruction::CompareAccumulatorTransmitted mov(SIL, DIL);
//		out << mov << std::endl;
//	}
//	{
//		const x86::instruction::CompareAccumulatorTransmitted mov(SIL, AL);
//		out << mov << std::endl;
//	}
//	{
//		const x86::instruction::CompareAccumulatorTransmitted mov(BPL, x86::memory::Memory8(EBP));
//		out << mov << std::endl;
//	}
	
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(AX, DX);
		out << mov << std::endl;
	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(CX, SP);
		out << mov << std::endl;
	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(BX, x86::memory::Memory16(EBP));
		out << mov << std::endl;
	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(SP, BP);
		out << mov << std::endl;
	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(BP, DX);
		out << mov << std::endl;
	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(SP, x86::memory::Memory16(EBP));
		out << mov << std::endl;
	}
	
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(EAX, EDX);
		out << mov << std::endl;
	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(ECX, ESP);
		out << mov << std::endl;
	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(EBX, x86::memory::Memory32(EBP));
		out << mov << std::endl;
	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(ESP, EBP);
		out << mov << std::endl;
	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(EBP, EDX);
		out << mov << std::endl;
	}
	{
		const x86::instruction::CompareAccumulatorTransmitted mov(ESP, x86::memory::Memory32(EBP));
		out << mov << std::endl;
	}
	
	
	{
		const x86::instruction::SwapAdd add(AL, AH);
		out << add << std::endl;
	}
//	{
//		const x86::instruction::SwapAdd add(AL, SIL);
//		out << add << std::endl;
//	}
	{
		const x86::instruction::SwapAdd add(AL, x86::memory::Memory8(EBP));
		out << add << std::endl;
	}
//	{
//		const x86::instruction::SwapAdd add(SIL, DIL);
//		out << add << std::endl;
//	}
//	{
//		const x86::instruction::SwapAdd add(SIL, AL);
//		out << add << std::endl;
//	}
//	{
//		const x86::instruction::SwapAdd add(BPL, x86::memory::Memory8(EBP));
//		out << add << std::endl;
//	}
	
	{
		const x86::instruction::SwapAdd add(AX, DX);
		out << add << std::endl;
	}
	{
		const x86::instruction::SwapAdd add(CX, SP);
		out << add << std::endl;
	}
	{
		const x86::instruction::SwapAdd add(BX, x86::memory::Memory16(EBP));
		out << add << std::endl;
	}
	{
		const x86::instruction::SwapAdd add(SP, BP);
		out << add << std::endl;
	}
	{
		const x86::instruction::SwapAdd add(BP, DX);
		out << add << std::endl;
	}
	{
		const x86::instruction::SwapAdd add(SP, x86::memory::Memory16(EBP));
		out << add << std::endl;
	}
	
	{
		const x86::instruction::SwapAdd add(EAX, EDX);
		out << add << std::endl;
	}
	{
		const x86::instruction::SwapAdd add(ECX, ESP);
		out << add << std::endl;
	}
	{
		const x86::instruction::SwapAdd add(EBX, x86::memory::Memory32(EBP));
		out << add << std::endl;
	}
	{
		const x86::instruction::SwapAdd add(ESP, EBP);
		out << add << std::endl;
	}
	{
		const x86::instruction::SwapAdd add(EBP, EDX);
		out << add << std::endl;
	}
	{
		const x86::instruction::SwapAdd add(ESP, x86::memory::Memory32(EBP));
		out << add << std::endl;
	}
	
	{
		const x86::instruction::TransmittedByteToAL mov;
		out << mov << std::endl;
	}

	{
		const x86::instruction::ReadFromIOPortToAccumulator in(x86::immediate::ImmediateSigned8(1), AL);
		out << in << std::endl;
	}
	{
		const x86::instruction::ReadFromIOPortToAccumulator in(x86::immediate::ImmediateSigned8(1), AX);
		out << in << std::endl;
	}
	{
		const x86::instruction::ReadFromIOPortToAccumulator in(x86::immediate::ImmediateSigned8(1), EAX);
		out << in << std::endl;
	}
	
	
	{
		out << x86::instruction::WriteFromAccumulatorToIOPort(AL, x86::immediate::ImmediateSigned8(1)) << std::endl;
	}
	{
		out << x86::instruction::WriteFromAccumulatorToIOPort(AX, x86::immediate::ImmediateSigned8(1)) << std::endl;
	}
	{
		out << x86::instruction::WriteFromAccumulatorToIOPort(EAX, x86::immediate::ImmediateSigned8(1)) << std::endl;
	}
	
	
	{
		out << x86::instruction::LoadEffectiveAddress(x86::memory::Memory8(EAX), AX) << std::endl;
	}
	{
		out << x86::instruction::LoadEffectiveAddress(x86::memory::Memory32(EAX), EAX) << std::endl;
	}
	{
		out << x86::instruction::LoadFlagsToAH() << std::endl;
	}
	{
		out << x86::instruction::SaveFlagsFromAH() << std::endl;
	}
	{
		out << x86::instruction::PushFlagsWordToStack() << std::endl;
	}
	{
		out << x86::instruction::PopFlagsWordFromStack() << std::endl;
	}
	{
		out << x86::instruction::Add(x86::immediate::ImmediateSigned8(0), AL) << std::endl;
	}
	{
		out << x86::instruction::Add(x86::immediate::ImmediateSigned16(0), AX) << std::endl;
	}
	{
		out << x86::instruction::Add(x86::immediate::ImmediateSigned32(0), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::AddCarray(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::AddCarray(x86::immediate::ImmediateSigned16(-1), AX) << std::endl;
	}
	{
		out << x86::instruction::AddCarray(x86::immediate::ImmediateSigned32(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::Increase(EAX) << std::endl;
	}
	{
		out << x86::instruction::Increase(DH) << std::endl;
	}
	
		
	{
		out << x86::instruction::Sub(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::Sub(x86::immediate::ImmediateSigned16(-1), AX) << std::endl;
	}
	{
		out << x86::instruction::Sub(x86::immediate::ImmediateSigned32(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::SubCarray(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::SubCarray(x86::immediate::ImmediateSigned16(-1), AX) << std::endl;
	}
	{
		out << x86::instruction::SubCarray(x86::immediate::ImmediateSigned32(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::Decrease(EAX) << std::endl;
	}
	{
		out << x86::instruction::Decrease(DH) << std::endl;
	}
	
	{
		out << x86::instruction::Negation(EAX) << std::endl;
	}
	
	{
		out << x86::instruction::Compare(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::Compare(x86::immediate::ImmediateSigned16(-1), AX) << std::endl;
	}
	{
		out << x86::instruction::Compare(x86::immediate::ImmediateSigned32(1), EAX) << std::endl;
	}
	{
		out << x86::instruction::Compare(x86::immediate::ImmediateSigned8(1), x86::memory::Memory8(EAX)) << std::endl;
	}
	{
		out << x86::instruction::Compare(x86::immediate::ImmediateSigned16(-1), x86::memory::Memory16(EAX)) << std::endl;
	}
	{
		out << x86::instruction::Compare(x86::immediate::ImmediateSigned32(1), x86::memory::Memory32(EAX)) << std::endl;
	}

	
	{
		out << x86::instruction::UnsignedMultiply(DL) << std::endl;
	}
	{
		out << x86::instruction::UnsignedMultiply(DX) << std::endl;
	}
	{
		out << x86::instruction::UnsignedMultiply(EDX) << std::endl;
	}
	
	
	{
		out << x86::instruction::SignedMultiply(DL) << std::endl;
	}
	{
		out << x86::instruction::SignedMultiply(DX) << std::endl;
	}
	{
		out << x86::instruction::SignedMultiply(EDX) << std::endl;
	}
	
	
	{
		out << x86::instruction::UnsignedDivide(DL) << std::endl;
	}
	{
		out << x86::instruction::UnsignedDivide(DX) << std::endl;
	}
	{
		out << x86::instruction::UnsignedDivide(EDX) << std::endl;
	}
	
	{
		out << x86::instruction::SignedDivide(DL) << std::endl;
	}
	{
		out << x86::instruction::SignedDivide(DX) << std::endl;
	}
	{
		out << x86::instruction::SignedDivide(EDX) << std::endl;
	}
	
	{
		out << x86::instruction::ConvertByteToWord() << std::endl;
	}
	
	{
		out << x86::instruction::ConvertWordToDoubleAccumulator() << std::endl;
	}
	
	{
		out << x86::instruction::ConvertWordToDoubleData() << std::endl;
	}
	
	{
		out << x86::instruction::LogicalAND(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::LogicalAND(x86::immediate::ImmediateUnSigned8(1), x86::memory::Memory32(EAX)) << std::endl;
	}
	{
		out << x86::instruction::LogicalAND(x86::immediate::ImmediateUnSigned16(1), x86::memory::Memory16(EAX)) << std::endl;
	}
	{
		out << x86::instruction::LogicalAND(x86::immediate::ImmediateUnSigned32(1), x86::memory::Memory32(EAX)) << std::endl;
	}

	{
		out << x86::instruction::LogicalInclusiveOR(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::LogicalInclusiveOR(x86::immediate::ImmediateUnSigned8(1), x86::memory::Memory32(EAX)) << std::endl;
	}
	{
		out << x86::instruction::LogicalInclusiveOR(x86::immediate::ImmediateUnSigned16(1), x86::memory::Memory16(EAX)) << std::endl;
	}
	{
		out << x86::instruction::LogicalInclusiveOR(x86::immediate::ImmediateUnSigned32(1), x86::memory::Memory32(EAX)) << std::endl;
	}
	
	
	{
		out << x86::instruction::LogicalExclusiveOR(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::LogicalExclusiveOR(x86::immediate::ImmediateUnSigned8(1), x86::memory::Memory32(EAX)) << std::endl;
	}
	{
		out << x86::instruction::LogicalExclusiveOR(x86::immediate::ImmediateUnSigned16(1), x86::memory::Memory16(EAX)) << std::endl;
	}
	{
		out << x86::instruction::LogicalExclusiveOR(x86::immediate::ImmediateUnSigned32(1), x86::memory::Memory32(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::LogicalNOT(AL) << std::endl;
	}
	{
		out << x86::instruction::LogicalNOT(AX) << std::endl;
	}
	{
		out << x86::instruction::LogicalNOT(EAX) << std::endl;
	}
	
	{
		out << x86::instruction::LogicalCompare(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::LogicalCompare(x86::immediate::ImmediateUnSigned16(1), AX) << std::endl;
	}
	{
		out << x86::instruction::LogicalCompare(x86::immediate::ImmediateUnSigned32(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::BitsMoveLeft(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::BitsMoveLeft(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::BitsMoveLeft(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::AddConvertASCIIFormat() << std::endl;
	}
	
	{
		out << x86::instruction::AddConvertDecimalFormat() << std::endl;
	}
	
	{
		out << x86::instruction::BitsMoveLeftSign(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::BitsMoveLeftSign(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::BitsMoveLeftSign(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::BitsMoveRight(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::BitsMoveRight(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::BitsMoveRight(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::BitsMoveRightSign(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::BitsMoveRightSign(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::BitsMoveRightSign(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::BitsRollLeft(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::BitsRollLeft(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::BitsRollLeft(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::BitsRollRight(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::BitsRollRight(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::BitsRollRight(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::BitsCarrayRollLeft(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::BitsCarrayRollLeft(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::BitsCarrayRollLeft(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::BitsCarrayRollRight(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::BitsCarrayRollRight(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::BitsCarrayRollRight(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::InstructionPointerJump(x86::memory::Memory8(EBP)) << std::endl;
	}
	{
		out << x86::instruction::InstructionPointerJump(x86::memory::Memory16(EBP)) << std::endl;
	}
	{
		out << x86::instruction::InstructionPointerJump(x86::memory::Memory32(EBP)) << std::endl;
	}
	{
		const x86::label::CodeLabel label("label");
		out << label << std::endl;
		out << x86::instruction::InstructionPointerJump(label) << std::endl;
	}
	
	
	{
		out << x86::instruction::CallProcedure(x86::memory::Memory8(EBP)) << std::endl;
	}
	{
		out << x86::instruction::CallProcedure(x86::memory::Memory16(EBP)) << std::endl;
	}
	{
		out << x86::instruction::CallProcedure(x86::memory::Memory32(EBP)) << std::endl;
	}
	{
		const x86::label::CodeLabel label("procedure");
		out << label << std::endl;
		out << x86::instruction::CallProcedure(label) << std::endl;
	}
	{
		out << x86::instruction::ReturnNearFromProcedure() << std::endl;
	}
	{
		out << x86::instruction::ReturnFarFromProcedure() << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("above");
		out << label << std::endl;
		out << x86::instruction::JumpIfUnsignedAbove(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("above_equal");
		out << label << std::endl;
		out << x86::instruction::JumpIfUnsignedAboveEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("below");
		out << label << std::endl;
		out << x86::instruction::JumpIfUnsignedBelow(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("below_equal");
		out << label << std::endl;
		out << x86::instruction::JumpIfUnsignedBelowEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("greater");
		out << label << std::endl;
		out << x86::instruction::JumpIfSignedGreater(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("greater_equal");
		out << label << std::endl;
		out << x86::instruction::JumpIfSignedGreaterEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("less");
		out << label << std::endl;
		out << x86::instruction::JumpIfSignedLess(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("less_equal");
		out << label << std::endl;
		out << x86::instruction::JumpIfSignedLessEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("equal");
		out << label << std::endl;
		out << x86::instruction::JumpIfEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("not_equal");
		out << label << std::endl;
		out << x86::instruction::JumpIfNotEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("carry");
		out << label << std::endl;
		out << x86::instruction::JumpIfCarry(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("not_carry");
		out << label << std::endl;
		out << x86::instruction::JumpIfNotCarry(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("overflow");
		out << label << std::endl;
		out << x86::instruction::JumpIfOverflow(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("not_overflow");
		out << label << std::endl;
		out << x86::instruction::JumpIfNotOverflow(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("parity");
		out << label << std::endl;
		out << x86::instruction::JumpIfParity(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("not_parity");
		out << label << std::endl;
		out << x86::instruction::JumpIfNotParity(label) << std::endl;
	}
		
	{
		const x86::label::CodeLabel label("signed");
		out << label << std::endl;
		out << x86::instruction::JumpIfSigned(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("not_signed");
		out << label << std::endl;
		out << x86::instruction::JumpIfNotSigned(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("counter");
		out << label << std::endl;
		out << x86::instruction::LoopCounter(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("counter_zero");
		out << label << std::endl;
		out << x86::instruction::LoopCounterAndZero(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("counter_not_zero");
		out << label << std::endl;
		out << x86::instruction::LoopCounterAndNotZero(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("cx_zero");
		out << label << std::endl;
		out << x86::instruction::JumpIfCXZero(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("ecx_zero");
		out << label << std::endl;
		out << x86::instruction::JumpIfECXZero(label) << std::endl;
	}
	
	{
		out << x86::instruction::CallInterruptProcedure(x86::immediate::ImmediateUnSigned8(3)) << std::endl;
	}
	
	{
		out << x86::instruction::CallInterruptProcedureIfOverflow() << std::endl;
	}
	
	{
		out << x86::instruction::InterruptReturn() << std::endl;
	}
	
	{
		out << x86::instruction::TransmittedBytes() << std::endl;
	}
	
	{
		out << x86::instruction::TransmittedWords() << std::endl;
	}
	
	{
		out << x86::instruction::TransmittedDWords() << std::endl;
	}
	
	{
		out << x86::instruction::CompareBytes() << std::endl;
	}
	
	{
		out << x86::instruction::CompareWords() << std::endl;
	}
	
	{
		out << x86::instruction::CompareDWords() << std::endl;
	}
	
	{
		out << x86::instruction::CompareALByte() << std::endl;
	}
	
	{
		out << x86::instruction::CompareAXWord() << std::endl;
	}
	
	{
		out << x86::instruction::SaveByteAL() << std::endl;
	}
	
	{
		out << x86::instruction::SaveWordAX() << std::endl;
	}
	
	{
		out << x86::instruction::SaveByteAddress() << std::endl;
	}
	
	{
		out << x86::instruction::SaveWordAddress() << std::endl;
	}
	
	{
		out << x86::instruction::TransmittedBytes().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::TransmittedWords().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::TransmittedDWords().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareBytes().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareWords().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareDWords().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
		
	{
		out << x86::instruction::CompareALByte().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareAXWord().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::SaveByteAL().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::SaveWordAX().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	
	{
		out << x86::instruction::SaveByteAddress().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::SaveWordAddress().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}

	
	
	
	
	
	
	
	
	{
		out << x86::instruction::TransmittedBytes().SetPrefix(x86::instruction::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::TransmittedWords().SetPrefix(x86::instruction::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::TransmittedDWords().SetPrefix(x86::instruction::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareBytes().SetPrefix(x86::instruction::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareWords().SetPrefix(x86::instruction::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareDWords().SetPrefix(x86::instruction::RepeatCounterEqual()) << std::endl;
	}
	
		
	{
		out << x86::instruction::CompareALByte().SetPrefix(x86::instruction::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareAXWord().SetPrefix(x86::instruction::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::SaveByteAL().SetPrefix(x86::instruction::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::SaveWordAX().SetPrefix(x86::instruction::RepeatCounterEqual()) << std::endl;
	}
	
	
	{
		out << x86::instruction::SaveByteAddress().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::SaveWordAddress().SetPrefix(x86::instruction::RepeatCounter()) << std::endl;
	}
	
	
	
	
	
	
	
	{
		out << x86::instruction::TransmittedBytes().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::TransmittedWords().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::TransmittedDWords().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareBytes().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareWords().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareDWords().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
		
	{
		out << x86::instruction::CompareALByte().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::CompareAXWord().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::SaveByteAL().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::SaveWordAX().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
	
	{
		out << x86::instruction::SaveByteAddress().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::SaveWordAddress().SetPrefix(x86::instruction::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::LoadZero() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::LoadOne() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::LoadPI() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::LoadL2T() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::LoadL2E() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::LoadLG2() << std::endl;
	}	
	{
		out << x86::instruction::FPU::LoadLN2() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::LoadFloatValue(x86::label::CodeLabel("float")) << std::endl;
		out << x86::instruction::FPU::LoadFloatValue(ST0) << std::endl;
		out << x86::instruction::FPU::LoadFloatValue(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::LoadFloatValue(x86::memory::Memory64(EAX)) << std::endl;
		out << x86::instruction::FPU::LoadFloatValue(x86::memory::Memory80(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::LoadIntegerValue(x86::label::CodeLabel("float")) << std::endl;
		out << x86::instruction::FPU::LoadIntegerValue(x86::memory::Memory16(EAX)) << std::endl;
		out << x86::instruction::FPU::LoadIntegerValue(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::LoadIntegerValue(x86::memory::Memory64(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::LoadLoadBinaryCodedDecimal(x86::label::CodeLabel("float")) << std::endl;
		out << x86::instruction::FPU::LoadLoadBinaryCodedDecimal(x86::memory::Memory80(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SaveFloatValue(ST0) << std::endl;
		out << x86::instruction::FPU::SaveFloatValue(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::SaveFloatValue(x86::memory::Memory64(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SaveIntegerValue(x86::memory::Memory16(EAX)) << std::endl;
		out << x86::instruction::FPU::SaveIntegerValue(x86::memory::Memory32(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SaveFloatValuePopStack(ST0) << std::endl;
		out << x86::instruction::FPU::SaveFloatValuePopStack(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::SaveFloatValuePopStack(x86::memory::Memory64(EAX)) << std::endl;
		out << x86::instruction::FPU::SaveFloatValuePopStack(x86::memory::Memory80(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SaveIntegerValuePopStack(x86::memory::Memory16(EAX)) << std::endl;
		out << x86::instruction::FPU::SaveIntegerValuePopStack(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::SaveIntegerValuePopStack(x86::memory::Memory64(EAX)) << std::endl;
	}
	
	const std::string &str = out.str();
	{
		std::ofstream code("test.s");
		if (!code.is_open()) {
			std::cerr << "test.s open faild!";
			return 1;
		}
		code << str;
	}
	system("cat -n test.s");
	if (0==system("as -W test.s")) {
		std::cout << "success" << std::endl;
	}
	return 0;
}