#include <iostream>
#include "Instruction.h"
int main(int argc, char *argv[])
{
	{
		NoOperation nop;
		std::cout << nop << std::endl;
	}
	{
		IntegerDataTransmitted move(ImmediateSigned8(1), AL);
		std::cout << move << std::endl;
	}
	{
		IntegerDataTransmitted move(ImmediateSigned16(-2), AX);
		std::cout << move << std::endl;
	}
	{
		IntegerDataTransmitted move(ImmediateUnSigned32(3), EAX);
		std::cout << move << std::endl;
	}
	return 0;
}