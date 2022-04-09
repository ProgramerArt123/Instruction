#include <iostream>
#include <fstream>
#include <sstream>
#include "Instruction.h"
int main(int argc, char *argv[])
{
	
	std::stringstream out;
	{
		const x86::NoOperation nop;
		out << nop << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(x86::immediate::ImmediateSigned8(1), AL);
		out << move << std::endl;
	}
	{
		const  x86::IntegerDataTransmitted move(x86::immediate::ImmediateSigned16(-2), AX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(x86::immediate::ImmediateUnSigned32(3), EAX);
		out << move << std::endl;
	}
	{
		const x86::size64::IntegerDataTransmitted move(x86::immediate::size64::ImmediateSigned64(3), RAX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AX, CS);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(CS, AX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AX, DS);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(DS, AX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AX, SS);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(SS, AX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AX, ES);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(ES, AX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AL, BL);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(BL, BH);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(BX, AX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AX, SP);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AX, BP);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AX, SI);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AX, DI);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(EAX, EBX);
		out << move << std::endl;
	} 
	{
		const x86::size64::IntegerDataTransmitted move(RAX, RBX);
		out << move << std::endl;
	}
	{
		const x86::size64::IntegerDataTransmitted move(RAX, SS);
		out << move << std::endl;
	}
	{
		const x86::size64::IntegerDataTransmitted move(RAX, RCX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AX, CX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AH, CL);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AH, CH);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(EAX, ECX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AX, DX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(DX, BX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AL, DL);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AH, DH);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(EAX, EDX);
		out << move << std::endl;
	}
	{
		const x86::size64::IntegerDataTransmitted move(RAX, RDX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(EAX, EBP);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(EAX, ESP);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(ESI, EAX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(EAX, EDI);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmittedFillSign move(AX, EDI);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmittedFillSign move(AX, EDX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmittedFillSign move(DI, EAX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmittedFillZero move(AX, EDX);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmittedFillZero move(DI, EAX);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, disp, ESI, scale, DS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, disp, EAX, scale, DS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(ESP, disp, EAX, scale, DS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EDI, disp, ESI, scale, DS);
		{
			const x86::IntegerDataTransmitted move(AL, mem);
			out << move << std::endl;
		}
		{
			const x86::IntegerDataTransmitted move(mem, AH);
			out << move << std::endl;
		}
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, ESI, scale, DS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(EBX, EAX, scale, DS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(ESI, EBX, scale, DS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 scale(1);
		const x86::memory::Memory mem(ESI, EDI, scale, DS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBX, disp, EBP, DS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBX, disp, EAX,  DS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBP, disp, EBX, DS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EBP, disp, ESI, SS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EBX, ESI, CS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EBX, EAX, CS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EDI, CS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, ECX, CS);
		const x86::IntegerDataTransmitted move(AL, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EDX, disp, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EDX, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EDI, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EDI, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EBX, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EBX, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EDI, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EDI, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EBX, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EBX, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI,EDI, ES);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EDI);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp, EBX);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EBX);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(ESI, disp, EDI);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EBP);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX, EBX);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EBX);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(ESI, EBP);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EDI, disp);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		x86::immediate::ImmediateSigned8 disp(0);
		const x86::memory::Memory mem(EAX, disp);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EBP);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::memory::Memory mem(EAX);
		const x86::IntegerDataTransmitted move(BH, mem);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(x86::immediate::ImmediateSigned8(1), BPL);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(x86::immediate::ImmediateSigned8(1), DIL);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(x86::immediate::ImmediateSigned8(1), SIL);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(x86::immediate::ImmediateSigned8(1), SPL);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(AX, FS);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(GS, BX);
		out << move << std::endl;
	}
	{
		const x86::size64::IntegerDataTransmitted move(x86::immediate::size64::ImmediateSigned64(3), R8);
		out << move << std::endl;
	}
	{
		const x86::IntegerDataTransmitted move(x86::immediate::ImmediateSigned32(3), R8D);
		out << move << std::endl;
	}

	{
		const x86::memory::Memory8 mem(EBP);
		const x86::PushIntegerToStack push(mem);
		out << push << std::endl;
	}
	{
		const x86::memory::Memory16 mem(EBP);
		const x86::PushIntegerToStack push(mem);
		out << push << std::endl;
	} 
	{
		const x86::memory::Memory32 mem(EBP);
		const x86::PushIntegerToStack push(mem);
		out << push << std::endl;
	}
	{
		const x86::PushIntegerToStack push(EAX);
		out << push << std::endl;
	}
	{
		const x86::PushIntegerToStack push(ESP);
		out << push << std::endl;
	}
	{
		const x86::PushIntegerToStack push(x86::immediate::ImmediateSigned32(3));
		out << push << std::endl;
	}
	
	{
		const x86::memory::Memory8 mem(EBP);
		const x86::PopIntegerFromStack pop(mem);
		out << pop << std::endl;
	}
	{
		const x86::memory::Memory16 mem(EBP);
		const x86::PopIntegerFromStack pop(mem);
		out << pop << std::endl;
	} 
	{
		const x86::memory::Memory32 mem(EBP);
		const x86::PopIntegerFromStack pop(mem);
		out << pop << std::endl;
	}
	{
		const x86::PopIntegerFromStack pop(EAX);
		out << pop << std::endl;
	}
	{
		const x86::PopIntegerFromStack pop(ESP);
		out << pop << std::endl;
	}
	{
		const x86::ReverseRegister32Bytes reverse(EAX);
		out << reverse << std::endl;
	}
	{
		const x86::ReverseRegister32Bytes reverse(ESI);
		out << reverse << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(AL, AH);
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(AL, SIL);
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(AL, x86::memory::Memory8(EBP));
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(AX, BX);
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(AX, SI);
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(AX, x86::memory::Memory16(EBP));
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(EAX, EBX);
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(EAX, ESI);
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(EAX, x86::memory::Memory32(EBP));
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(SIL, DIL);
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(DIL, x86::memory::Memory8(EBP));
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(SI, DI);
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(DI, x86::memory::Memory16(EBP));
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(ESI, EDI);
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(EDI, x86::memory::Memory32(EBP));
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(ESI, EDI);
		out << swap << std::endl;
	}
	{
		const x86::SwapGeneralOffsetMemory swap(EDI, x86::memory::Memory32(EBP));
		out << swap << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(AL, AH);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(AL, SIL);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(AL, x86::memory::Memory8(EBP));
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(SIL, DIL);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(SIL, AL);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(BPL, x86::memory::Memory8(EBP));
		out << mov << std::endl;
	}
	
	{
		const x86::CompareAccumulatorTransmitted mov(AX, DX);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(CX, SP);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(BX, x86::memory::Memory16(EBP));
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(SP, BP);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(BP, DX);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(SP, x86::memory::Memory16(EBP));
		out << mov << std::endl;
	}
	
	{
		const x86::CompareAccumulatorTransmitted mov(EAX, EDX);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(ECX, ESP);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(EBX, x86::memory::Memory32(EBP));
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(ESP, EBP);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(EBP, EDX);
		out << mov << std::endl;
	}
	{
		const x86::CompareAccumulatorTransmitted mov(ESP, x86::memory::Memory32(EBP));
		out << mov << std::endl;
	}
	
	
	{
		const x86::SwapAdd add(AL, AH);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(AL, SIL);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(AL, x86::memory::Memory8(EBP));
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(SIL, DIL);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(SIL, AL);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(BPL, x86::memory::Memory8(EBP));
		out << add << std::endl;
	}
	
	{
		const x86::SwapAdd add(AX, DX);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(CX, SP);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(BX, x86::memory::Memory16(EBP));
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(SP, BP);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(BP, DX);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(SP, x86::memory::Memory16(EBP));
		out << add << std::endl;
	}
	
	{
		const x86::SwapAdd add(EAX, EDX);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(ECX, ESP);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(EBX, x86::memory::Memory32(EBP));
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(ESP, EBP);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(EBP, EDX);
		out << add << std::endl;
	}
	{
		const x86::SwapAdd add(ESP, x86::memory::Memory32(EBP));
		out << add << std::endl;
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
	if (0==system("as test.s")) {
		std::cout << "success" << std::endl;
	}
	return 0;
}