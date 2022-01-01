#include <iostream>
#include "Instruction.h"
int main(int argc, char *argv[])
{
	NoOperation nop;
	std::cout << nop << std::endl;
//	{
//		Instruction move("MOV", AX, BX);
//		std::cout << move << std::endl;
//	}
//	{
//		ImmediateSigned16 integer(123);
//		Instruction move("MOV", integer, AX);
//		std::cout << move << std::endl;
//	}
	return 0;
}