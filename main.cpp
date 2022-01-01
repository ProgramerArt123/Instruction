#include <iostream>

#include "Instruction.h"
#include "Accumulator.h"
#include "Base.h"
int main(int argc, char *argv[])
{
	Instruction nop("NOP");
	std::cout << nop << std::endl;
	Instruction move("MOV", Accumulator::GetInstance(), Base::GetInstance());
	std::cout << move << std::endl;
	return 0;
}