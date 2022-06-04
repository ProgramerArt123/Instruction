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
		const x86::instruction::integer::DataTransmitted move(x86::immediate::ImmediateSigned8(1), AL);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(x86::immediate::ImmediateSigned16(-2), AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(x86::immediate::ImmediateUnSigned32(3), EAX);
		out << move << std::endl;
	}
//	{
//		const x86::instruction::size64::DataTransmitted move(x86::immediate::size64::ImmediateSigned64(3), RAX);
//		out << move << std::endl;
//	}
	{
		const x86::instruction::integer::DataTransmitted move(AX, CS);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(CS, AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AX, DS);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(DS, AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AX, SS);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(SS, AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AX, ES);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(ES, AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AL, BL);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(BL, BH);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(BX, AX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AX, SP);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AX, BP);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AX, SI);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AX, DI);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(EAX, EBX);
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
		const x86::instruction::integer::DataTransmitted move(AX, CX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AH, CL);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AH, CH);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(EAX, ECX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AX, DX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(DX, BX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AL, DL);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(AH, DH);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(EAX, EDX);
		out << move << std::endl;
	}
//	{
//		const x86::instruction::size64::DataTransmitted move(RAX, RDX);
//		out << move << std::endl;
//	}
	{
		const x86::instruction::integer::DataTransmitted move(EAX, EBP);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(EAX, ESP);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(ESI, EAX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(EAX, EDI);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmittedFillSign move(AX, EDI);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmittedFillSign move(AX, EDX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmittedFillSign move(DI, EAX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmittedFillZero move(AX, EDX);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmittedFillZero move(DI, EAX);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, disp, ESI, scale, DS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, disp, EAX, scale, DS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(ESP, disp, EAX, scale, DS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EDI, disp, ESI, scale, DS);
		{
			const x86::instruction::integer::DataTransmitted move(AL, mem);
			out << move << std::endl;
		}
		{
			const x86::instruction::integer::DataTransmitted move(mem, AH);
			out << move << std::endl;
		}
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, ESI, scale, DS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, EAX, scale, DS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(ESI, EBX, scale, DS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(ESI, EDI, scale, DS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBX, disp, EBP, DS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBX, disp, EAX,  DS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBP, disp, EBX, DS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBP, disp, ESI, SS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EBX, ESI, CS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EBX, EAX, CS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EDI, CS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, ECX, CS);
		const x86::instruction::integer::DataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EDX, disp, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EDX, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EDI, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EDI, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EBX, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EBX, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EDI, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EDI, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EBX, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EBX, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI,EDI, ES);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EDI);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EBX);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EBX);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EDI);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EBP);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EBX);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EBX);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EBP);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EDI, disp);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EBP);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX);
		const x86::instruction::integer::DataTransmitted move(BH, mem);
		out << move << std::endl;
	}
//	{
//		const x86::instruction::integer::DataTransmitted move(x86::immediate::ImmediateSigned8(1), BPL);
//		out << move << std::endl;
//	}
//	{
//		const x86::instruction::integer::DataTransmitted move(x86::immediate::ImmediateSigned8(1), DIL);
//		out << move << std::endl;
//	}
//	{
//		const x86::instruction::integer::DataTransmitted move(x86::immediate::ImmediateSigned8(1), SIL);
//		out << move << std::endl;
//	}
//	{
//		const x86::instruction::integer::DataTransmitted move(x86::immediate::ImmediateSigned8(1), SPL);
//		out << move << std::endl;
//	}
	{
		const x86::instruction::integer::DataTransmitted move(AX, FS);
		out << move << std::endl;
	}
	{
		const x86::instruction::integer::DataTransmitted move(GS, BX);
		out << move << std::endl;
	}
//	{
//		const x86::instruction::size64::DataTransmitted move(x86::immediate::size64::ImmediateSigned64(3), R8);
//		out << move << std::endl;
//	}
//	{
//		const x86::instruction::integer::DataTransmitted move(x86::immediate::ImmediateSigned32(3), R8D);
//		out << move << std::endl;
//	}

	{
		const x86::memory::Memory8 mem(EBP);
		const x86::instruction::integer::PushToStack push(mem);
		out << push << std::endl;
	}
	{
		const x86::memory::Memory16 mem(EBP);
		const x86::instruction::integer::PushToStack push(mem);
		out << push << std::endl;
	} 
	{
		const x86::memory::Memory32 mem(EBP);
		const x86::instruction::integer::PushToStack push(mem);
		out << push << std::endl;
	}
	{
		const x86::instruction::integer::PushToStack push(EAX);
		out << push << std::endl;
	}
	{
		const x86::instruction::integer::PushToStack push(ESP);
		out << push << std::endl;
	}
	{
		const x86::instruction::integer::PushToStack push(x86::immediate::ImmediateSigned32(3));
		out << push << std::endl;
	}
	
	{
		const x86::memory::Memory8 mem(EBP);
		const x86::instruction::integer::PopFromStack pop(mem);
		out << pop << std::endl;
	}
	{
		const x86::memory::Memory16 mem(EBP);
		const x86::instruction::integer::PopFromStack pop(mem);
		out << pop << std::endl;
	} 
	{
		const x86::memory::Memory32 mem(EBP);
		const x86::instruction::integer::PopFromStack pop(mem);
		out << pop << std::endl;
	}
	{
		const x86::instruction::integer::PopFromStack pop(EAX);
		out << pop << std::endl;
	}
	{
		const x86::instruction::integer::PopFromStack pop(ESP);
		out << pop << std::endl;
	}
	{
		const x86::instruction::integer::ReverseRegister32Bytes reverse(EAX);
		out << reverse << std::endl;
	}
	{
		const x86::instruction::integer::ReverseRegister32Bytes reverse(ESI);
		out << reverse << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(AL, AH);
		out << swap << std::endl;
	}
//	{
//		const x86::instruction::integer::SwapOperationOffsetMemory swap(AL, SIL);
//		out << swap << std::endl;
//	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(AL, x86::memory::Memory8(EBP));
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(AX, BX);
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(AX, SI);
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(AX, x86::memory::Memory16(EBP));
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(EAX, EBX);
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(EAX, ESI);
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(EAX, x86::memory::Memory32(EBP));
		out << swap << std::endl;
	}
//	{
//		const x86::instruction::integer::SwapOperationOffsetMemory swap(SIL, DIL);
//		out << swap << std::endl;
//	}
//	{
//		const x86::instruction::integer::SwapOperationOffsetMemory swap(DIL, x86::memory::Memory8(EBP));
//		out << swap << std::endl;
//	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(SI, DI);
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(DI, x86::memory::Memory16(EBP));
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(ESI, EDI);
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(EDI, x86::memory::Memory32(EBP));
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(ESI, EDI);
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::SwapOperationOffsetMemory swap(EDI, x86::memory::Memory32(EBP));
		out << swap << std::endl;
	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(AL, AH);
		out << mov << std::endl;
	}
//	{
//		const x86::instruction::integer::CompareAccumulatorTransmitted mov(AL, SIL);
//		out << mov << std::endl;
//	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(AL, x86::memory::Memory8(EBP));
		out << mov << std::endl;
	}
//	{
//		const x86::instruction::integer::CompareAccumulatorTransmitted mov(SIL, DIL);
//		out << mov << std::endl;
//	}
//	{
//		const x86::instruction::integer::CompareAccumulatorTransmitted mov(SIL, AL);
//		out << mov << std::endl;
//	}
//	{
//		const x86::instruction::integer::CompareAccumulatorTransmitted mov(BPL, x86::memory::Memory8(EBP));
//		out << mov << std::endl;
//	}
	
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(AX, DX);
		out << mov << std::endl;
	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(CX, SP);
		out << mov << std::endl;
	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(BX, x86::memory::Memory16(EBP));
		out << mov << std::endl;
	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(SP, BP);
		out << mov << std::endl;
	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(BP, DX);
		out << mov << std::endl;
	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(SP, x86::memory::Memory16(EBP));
		out << mov << std::endl;
	}
	
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(EAX, EDX);
		out << mov << std::endl;
	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(ECX, ESP);
		out << mov << std::endl;
	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(EBX, x86::memory::Memory32(EBP));
		out << mov << std::endl;
	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(ESP, EBP);
		out << mov << std::endl;
	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(EBP, EDX);
		out << mov << std::endl;
	}
	{
		const x86::instruction::integer::CompareAccumulatorTransmitted mov(ESP, x86::memory::Memory32(EBP));
		out << mov << std::endl;
	}
	
	
	{
		const x86::instruction::integer::SwapAdd add(AL, AH);
		out << add << std::endl;
	}
//	{
//		const x86::instruction::integer::SwapAdd add(AL, SIL);
//		out << add << std::endl;
//	}
	{
		const x86::instruction::integer::SwapAdd add(AL, x86::memory::Memory8(EBP));
		out << add << std::endl;
	}
//	{
//		const x86::instruction::integer::SwapAdd add(SIL, DIL);
//		out << add << std::endl;
//	}
//	{
//		const x86::instruction::integer::SwapAdd add(SIL, AL);
//		out << add << std::endl;
//	}
//	{
//		const x86::instruction::integer::SwapAdd add(BPL, x86::memory::Memory8(EBP));
//		out << add << std::endl;
//	}
	
	{
		const x86::instruction::integer::SwapAdd add(AX, DX);
		out << add << std::endl;
	}
	{
		const x86::instruction::integer::SwapAdd add(CX, SP);
		out << add << std::endl;
	}
	{
		const x86::instruction::integer::SwapAdd add(BX, x86::memory::Memory16(EBP));
		out << add << std::endl;
	}
	{
		const x86::instruction::integer::SwapAdd add(SP, BP);
		out << add << std::endl;
	}
	{
		const x86::instruction::integer::SwapAdd add(BP, DX);
		out << add << std::endl;
	}
	{
		const x86::instruction::integer::SwapAdd add(SP, x86::memory::Memory16(EBP));
		out << add << std::endl;
	}
	
	{
		const x86::instruction::integer::SwapAdd add(EAX, EDX);
		out << add << std::endl;
	}
	{
		const x86::instruction::integer::SwapAdd add(ECX, ESP);
		out << add << std::endl;
	}
	{
		const x86::instruction::integer::SwapAdd add(EBX, x86::memory::Memory32(EBP));
		out << add << std::endl;
	}
	{
		const x86::instruction::integer::SwapAdd add(ESP, EBP);
		out << add << std::endl;
	}
	{
		const x86::instruction::integer::SwapAdd add(EBP, EDX);
		out << add << std::endl;
	}
	{
		const x86::instruction::integer::SwapAdd add(ESP, x86::memory::Memory32(EBP));
		out << add << std::endl;
	}
	
	{
		const x86::instruction::integer::TransmittedByteToAL mov;
		out << mov << std::endl;
	}

	{
		const x86::instruction::integer::ReadFromIOPortToAccumulator in(x86::immediate::ImmediateSigned8(1), AL);
		out << in << std::endl;
	}
	{
		const x86::instruction::integer::ReadFromIOPortToAccumulator in(x86::immediate::ImmediateSigned8(1), AX);
		out << in << std::endl;
	}
	{
		const x86::instruction::integer::ReadFromIOPortToAccumulator in(x86::immediate::ImmediateSigned8(1), EAX);
		out << in << std::endl;
	}
	
	
	{
		out << x86::instruction::integer::WriteFromAccumulatorToIOPort(AL, x86::immediate::ImmediateSigned8(1)) << std::endl;
	}
	{
		out << x86::instruction::integer::WriteFromAccumulatorToIOPort(AX, x86::immediate::ImmediateSigned8(1)) << std::endl;
	}
	{
		out << x86::instruction::integer::WriteFromAccumulatorToIOPort(EAX, x86::immediate::ImmediateSigned8(1)) << std::endl;
	}
	
	
	{
		out << x86::instruction::integer::LoadEffectiveAddress(x86::memory::Memory8(EAX), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::LoadEffectiveAddress(x86::memory::Memory32(EAX), EAX) << std::endl;
	}
	{
		out << x86::instruction::integer::LoadFlagsToAH() << std::endl;
	}
	{
		out << x86::instruction::integer::SaveFlagsFromAH() << std::endl;
	}
	{
		out << x86::instruction::integer::PushFlagsWordToStack() << std::endl;
	}
	{
		out << x86::instruction::integer::PopFlagsWordFromStack() << std::endl;
	}
	{
		out << x86::instruction::integer::Add(x86::immediate::ImmediateSigned8(0), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::Add(x86::immediate::ImmediateSigned16(0), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::Add(x86::immediate::ImmediateSigned32(0), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::AddCarray(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::AddCarray(x86::immediate::ImmediateSigned16(-1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::AddCarray(x86::immediate::ImmediateSigned32(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::Increase(EAX) << std::endl;
	}
	{
		out << x86::instruction::integer::Increase(DH) << std::endl;
	}
	
		
	{
		out << x86::instruction::integer::Subtract(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::Subtract(x86::immediate::ImmediateSigned16(-1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::Subtract(x86::immediate::ImmediateSigned32(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::SubtractCarray(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::SubtractCarray(x86::immediate::ImmediateSigned16(-1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::SubtractCarray(x86::immediate::ImmediateSigned32(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::Decrease(EAX) << std::endl;
	}
	{
		out << x86::instruction::integer::Decrease(DH) << std::endl;
	}
	
	{
		out << x86::instruction::integer::Negation(EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::Compare(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::Compare(x86::immediate::ImmediateSigned16(-1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::Compare(x86::immediate::ImmediateSigned32(1), EAX) << std::endl;
	}
	{
		out << x86::instruction::integer::Compare(x86::immediate::ImmediateSigned8(1), x86::memory::Memory8(EAX)) << std::endl;
	}
	{
		out << x86::instruction::integer::Compare(x86::immediate::ImmediateSigned16(-1), x86::memory::Memory16(EAX)) << std::endl;
	}
	{
		out << x86::instruction::integer::Compare(x86::immediate::ImmediateSigned32(1), x86::memory::Memory32(EAX)) << std::endl;
	}

	
	{
		out << x86::instruction::integer::UnsignedMultiply(DL) << std::endl;
	}
	{
		out << x86::instruction::integer::UnsignedMultiply(DX) << std::endl;
	}
	{
		out << x86::instruction::integer::UnsignedMultiply(EDX) << std::endl;
	}
	
	
	{
		out << x86::instruction::integer::SignedMultiply(DL) << std::endl;
	}
	{
		out << x86::instruction::integer::SignedMultiply(DX) << std::endl;
	}
	{
		out << x86::instruction::integer::SignedMultiply(EDX) << std::endl;
	}
	
	
	{
		out << x86::instruction::integer::UnsignedDivide(DL) << std::endl;
	}
	{
		out << x86::instruction::integer::UnsignedDivide(DX) << std::endl;
	}
	{
		out << x86::instruction::integer::UnsignedDivide(EDX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::SignedDivide(DL) << std::endl;
	}
	{
		out << x86::instruction::integer::SignedDivide(DX) << std::endl;
	}
	{
		out << x86::instruction::integer::SignedDivide(EDX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::ConvertByteToWord() << std::endl;
	}
	
	{
		out << x86::instruction::integer::ConvertWordToDoubleAccumulator() << std::endl;
	}
	
	{
		out << x86::instruction::integer::ConvertWordToDoubleData() << std::endl;
	}
	
	{
		out << x86::instruction::integer::LogicalAND(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalAND(x86::immediate::ImmediateUnSigned8(1), x86::memory::Memory32(EAX)) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalAND(x86::immediate::ImmediateUnSigned16(1), x86::memory::Memory16(EAX)) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalAND(x86::immediate::ImmediateUnSigned32(1), x86::memory::Memory32(EAX)) << std::endl;
	}

	{
		out << x86::instruction::integer::LogicalInclusiveOR(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalInclusiveOR(x86::immediate::ImmediateUnSigned8(1), x86::memory::Memory32(EAX)) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalInclusiveOR(x86::immediate::ImmediateUnSigned16(1), x86::memory::Memory16(EAX)) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalInclusiveOR(x86::immediate::ImmediateUnSigned32(1), x86::memory::Memory32(EAX)) << std::endl;
	}
	
	
	{
		out << x86::instruction::integer::LogicalExclusiveOR(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalExclusiveOR(x86::immediate::ImmediateUnSigned8(1), x86::memory::Memory32(EAX)) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalExclusiveOR(x86::immediate::ImmediateUnSigned16(1), x86::memory::Memory16(EAX)) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalExclusiveOR(x86::immediate::ImmediateUnSigned32(1), x86::memory::Memory32(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::integer::LogicalNOT(AL) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalNOT(AX) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalNOT(EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::LogicalCompare(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalCompare(x86::immediate::ImmediateUnSigned16(1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::LogicalCompare(x86::immediate::ImmediateUnSigned32(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::BitsMoveLeft(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsMoveLeft(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsMoveLeft(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::AddConvertASCIIFormat() << std::endl;
	}
	
	{
		out << x86::instruction::integer::AddConvertDecimalFormat() << std::endl;
	}
	
	{
		out << x86::instruction::integer::BitsMoveLeftSign(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsMoveLeftSign(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsMoveLeftSign(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::BitsMoveRight(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsMoveRight(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsMoveRight(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::BitsMoveRightSign(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsMoveRightSign(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsMoveRightSign(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::BitsRollLeft(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsRollLeft(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsRollLeft(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::BitsRollRight(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsRollRight(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsRollRight(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::BitsCarrayRollLeft(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsCarrayRollLeft(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsCarrayRollLeft(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::integer::BitsCarrayRollRight(x86::immediate::ImmediateSigned8(1), AL) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsCarrayRollRight(x86::immediate::ImmediateUnSigned8(1), AX) << std::endl;
	}
	{
		out << x86::instruction::integer::BitsCarrayRollRight(x86::immediate::ImmediateUnSigned8(1), EAX) << std::endl;
	}
	
	{
		out << x86::instruction::jump::InstructionPointerJump(x86::memory::Memory8(EBP)) << std::endl;
	}
	{
		out << x86::instruction::jump::InstructionPointerJump(x86::memory::Memory16(EBP)) << std::endl;
	}
	{
		out << x86::instruction::jump::InstructionPointerJump(x86::memory::Memory32(EBP)) << std::endl;
	}
	{
		const x86::label::CodeLabel label("label");
		out << label << std::endl;
		out << x86::instruction::jump::InstructionPointerJump(label) << std::endl;
	}
	
	
	{
		out << x86::instruction::jump::CallProcedure(x86::memory::Memory8(EBP)) << std::endl;
	}
	{
		out << x86::instruction::jump::CallProcedure(x86::memory::Memory16(EBP)) << std::endl;
	}
	{
		out << x86::instruction::jump::CallProcedure(x86::memory::Memory32(EBP)) << std::endl;
	}
	{
		const x86::label::CodeLabel label("procedure");
		out << label << std::endl;
		out << x86::instruction::jump::CallProcedure(label) << std::endl;
	}
	{
		out << x86::instruction::jump::ReturnNearFromProcedure() << std::endl;
	}
	{
		out << x86::instruction::jump::ReturnFarFromProcedure() << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("above");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfUnsignedAbove(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("above_equal");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfUnsignedAboveEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("below");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfUnsignedBelow(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("below_equal");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfUnsignedBelowEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("greater");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfSignedGreater(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("greater_equal");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfSignedGreaterEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("less");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfSignedLess(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("less_equal");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfSignedLessEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("equal");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("not_equal");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfNotEqual(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("carry");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfCarry(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("not_carry");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfNotCarry(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("overflow");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfOverflow(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("not_overflow");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfNotOverflow(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("parity");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfParity(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("not_parity");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfNotParity(label) << std::endl;
	}
		
	{
		const x86::label::CodeLabel label("signed");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfSigned(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("not_signed");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfNotSigned(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("counter");
		out << label << std::endl;
		out << x86::instruction::jump::LoopCounter(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("counter_zero");
		out << label << std::endl;
		out << x86::instruction::jump::LoopCounterAndZero(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("counter_not_zero");
		out << label << std::endl;
		out << x86::instruction::jump::LoopCounterAndNotZero(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("cx_zero");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfCXZero(label) << std::endl;
	}
	
	{
		const x86::label::CodeLabel label("ecx_zero");
		out << label << std::endl;
		out << x86::instruction::jump::JumpIfECXZero(label) << std::endl;
	}
	
	{
		out << x86::instruction::jump::CallInterruptProcedure(x86::immediate::ImmediateUnSigned8(3)) << std::endl;
	}
	
	{
		out << x86::instruction::jump::CallInterruptProcedureIfOverflow() << std::endl;
	}
	
	{
		out << x86::instruction::jump::InterruptReturn() << std::endl;
	}
	
	{
		out << x86::instruction::string::TransmittedBytes() << std::endl;
	}
	
	{
		out << x86::instruction::string::TransmittedWords() << std::endl;
	}
	
	{
		out << x86::instruction::string::TransmittedDWords() << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareBytes() << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareWords() << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareDWords() << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareALByte() << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareAXWord() << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveByteAL() << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveWordAX() << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveByteAddress() << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveWordAddress() << std::endl;
	}
	
	{
		out << x86::instruction::string::TransmittedBytes().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::string::TransmittedWords().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::string::TransmittedDWords().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareBytes().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareWords().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareDWords().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
		
	{
		out << x86::instruction::string::CompareALByte().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareAXWord().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveByteAL().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveWordAX().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	
	{
		out << x86::instruction::string::SaveByteAddress().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveWordAddress().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}

	
	
	
	
	
	
	
	
	{
		out << x86::instruction::string::TransmittedBytes().SetPrefix(x86::instruction::string::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::TransmittedWords().SetPrefix(x86::instruction::string::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::TransmittedDWords().SetPrefix(x86::instruction::string::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareBytes().SetPrefix(x86::instruction::string::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareWords().SetPrefix(x86::instruction::string::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareDWords().SetPrefix(x86::instruction::string::RepeatCounterEqual()) << std::endl;
	}
	
		
	{
		out << x86::instruction::string::CompareALByte().SetPrefix(x86::instruction::string::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareAXWord().SetPrefix(x86::instruction::string::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveByteAL().SetPrefix(x86::instruction::string::RepeatCounterEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveWordAX().SetPrefix(x86::instruction::string::RepeatCounterEqual()) << std::endl;
	}
	
	
	{
		out << x86::instruction::string::SaveByteAddress().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveWordAddress().SetPrefix(x86::instruction::string::RepeatCounter()) << std::endl;
	}
	
	
	
	
	
	
	
	{
		out << x86::instruction::string::TransmittedBytes().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::TransmittedWords().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::TransmittedDWords().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareBytes().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareWords().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareDWords().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
	}
	
		
	{
		out << x86::instruction::string::CompareALByte().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::CompareAXWord().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveByteAL().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveWordAX().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
	}
	
	
	{
		out << x86::instruction::string::SaveByteAddress().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
	}
	
	{
		out << x86::instruction::string::SaveWordAddress().SetPrefix(x86::instruction::string::RepeatCounterNotEqual()) << std::endl;
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
	
	{
		out << x86::instruction::FPU::SaveBinaryCodedDecimalPopStack(x86::memory::Memory80(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::DataTransmittedIfBlew(ST1, ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::DataTransmittedIfBlewEqual(ST1, ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::DataTransmittedIfEqual(ST1, ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::DataTransmittedIfNotBlew(ST1, ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::DataTransmittedIfNotBlewEqual(ST1, ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::DataTransmittedIfNotEqual(ST1, ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::DataTransmittedIfUnordered(ST1, ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::DataTransmittedIfNotUnordered(ST1, ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::Add(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::Add(x86::memory::Memory64(EAX)) << std::endl;
		out << x86::instruction::FPU::Add(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::AddPopStack() << std::endl;
		out << x86::instruction::FPU::AddPopStack(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::AddInteger(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::AddInteger(x86::memory::Memory64(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::Subtract(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::Subtract(x86::memory::Memory64(EAX)) << std::endl;
		out << x86::instruction::FPU::Subtract(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SubtractPopStack() << std::endl;
		out << x86::instruction::FPU::SubtractPopStack(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SubtractInteger(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::SubtractInteger(x86::memory::Memory64(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SwapSubtract(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::SwapSubtract(x86::memory::Memory64(EAX)) << std::endl;
		out << x86::instruction::FPU::SwapSubtract(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SwapSubtractPopStack() << std::endl;
		out << x86::instruction::FPU::SwapSubtractPopStack(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SwapSubtractInteger(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::SwapSubtractInteger(x86::memory::Memory64(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::Multiply(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::Multiply(x86::memory::Memory64(EAX)) << std::endl;
		out << x86::instruction::FPU::Multiply(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::MultiplyPopStack() << std::endl;
		out << x86::instruction::FPU::MultiplyPopStack(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::MultiplyInteger(x86::memory::Memory16(EAX)) << std::endl;
		out << x86::instruction::FPU::MultiplyInteger(x86::memory::Memory32(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::Divide(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::Divide(x86::memory::Memory64(EAX)) << std::endl;
		out << x86::instruction::FPU::Divide(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::DividePopStack() << std::endl;
		out << x86::instruction::FPU::DividePopStack(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::DivideInteger(x86::memory::Memory16(EAX)) << std::endl;
		out << x86::instruction::FPU::DivideInteger(x86::memory::Memory32(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SwapDivide(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::SwapDivide(x86::memory::Memory64(EAX)) << std::endl;
		out << x86::instruction::FPU::SwapDivide(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SwapDividePopStack() << std::endl;
		out << x86::instruction::FPU::SwapDividePopStack(ST0, ST1) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SwapDivideInteger(x86::memory::Memory16(EAX)) << std::endl;
		out << x86::instruction::FPU::SwapDivideInteger(x86::memory::Memory32(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::ChangeSign() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::AbsoluteValue() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::SquareRoot() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::Scale() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::RoundToInteger() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::Compare() << std::endl;
		out << x86::instruction::FPU::Compare(ST0) << std::endl;
		out << x86::instruction::FPU::Compare(x86::memory::Memory32(EAX)) << std::endl;
		out << x86::instruction::FPU::Compare(x86::memory::Memory64(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::CompareEFlags(ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::CompareEFlagsPopStack(ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::CompareInteger(x86::memory::Memory16(EAX)) << std::endl;
		out << x86::instruction::FPU::CompareInteger(x86::memory::Memory32(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::CompareIntegerPopStack(x86::memory::Memory16(EAX)) << std::endl;
		out << x86::instruction::FPU::CompareIntegerPopStack(x86::memory::Memory32(EAX)) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::CompareZero() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::UnorderedCompare() << std::endl;
		out << x86::instruction::FPU::UnorderedCompare(ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::UnorderedComparePopStack() << std::endl;
		out << x86::instruction::FPU::UnorderedComparePopStack(ST0) << std::endl;
	}
	
	{
		out << x86::instruction::FPU::UnorderedComparePopStack2() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::ExamineValue() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::Init() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::ClearExceptions() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::NoOperation() << std::endl;
	}
	
	{
		out << x86::instruction::FPU::ExchangeContents() << std::endl;
		out << x86::instruction::FPU::ExchangeContents(ST0) << std::endl;
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