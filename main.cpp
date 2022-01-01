#include <iostream>

#include "Instruction.h"
int main(int argc, char *argv[])
{
	Instruction nop("NOP");
	std::cout << nop << std::endl;
	return 0;
}