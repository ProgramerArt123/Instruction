#include <iostream>

#include "Instruction.h"
#include "Accumulator.h"
#include "Base.h"
#include "Define.h"
#include "ImmediateSigned16.h"
int main(int argc, char *argv[])
{
	Instruction nop("NOP");
	std::cout << nop << std::endl;
	{
		Instruction move("MOV", AX, BX);
		std::cout << move << std::endl;
	}
	{
		ImmediateSigned16 integer(123);
		Instruction move("MOV", integer, AX);
		std::cout << move << std::endl;
	}
	return 0;
}