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