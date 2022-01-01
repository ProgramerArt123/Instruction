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