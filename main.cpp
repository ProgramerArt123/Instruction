#include <iostream>
#include <fstream>
#include <sstream>
#include "Instruction.h"
int main(int argc, char *argv[])
{
	
	std::stringstream out;
	{
		const NoOperation nop;
		out << nop << std::endl;
	}
	{
		const IntegerDataTransmitted move(ImmediateSigned8(1), AL);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(ImmediateSigned16(-2), AX);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(ImmediateUnSigned32(3), EAX);
		out << move << std::endl;
	}
	{
		const size64::IntegerDataTransmitted move(size64::ImmediateSigned64(3), RAX);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(AX, CS);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(CS, AX);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(AX, DS);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(DS, AX);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(AX, SS);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(SS, AX);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(AX, ES);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(ES, AX);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(AL, BL);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(BX, AX);
		out << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(AX, SP);
		out << move << std::endl;
	}
	const std::string &str = out.str();
	{
		std::ofstream code("test.s");
		if (!code.is_open()) {
			std::cerr << "test.s open faild!";
			return 1;
		}
		code << ".globl main" << std::endl;
		code << ".type main, @function" << std::endl;
		code << "main:" << std::endl;
		code << str;
	}
	system("cat -n test.s");
	if (0==system("gcc test.s")) {
		std::cout << "success" << std::endl;
	}
	return 0;
}