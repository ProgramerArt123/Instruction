#include <iostream>
#include "Instruction.h"
int main(int argc, char *argv[])
{
	{
		const NoOperation nop;
		std::cout << nop << std::endl;
	}
	{
		const IntegerDataTransmitted move(ImmediateSigned8(1), AL);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(ImmediateSigned16(-2), AX);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(ImmediateUnSigned32(3), EAX);
		std::cout << move << std::endl;
	}
	{
		const size64::IntegerDataTransmitted move(size64::ImmediateSigned64(3), RAX);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(AX, CS);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(CS, AX);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(AX, DS);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(DS, AX);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(AX, SS);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(SS, AX);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(AX, ES);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(ES, AX);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(AL, BL);
		std::cout << move << std::endl;
	}
	{
		const IntegerDataTransmitted move(BX, AX);
		std::cout << move << std::endl;
	}
	return 0;
}