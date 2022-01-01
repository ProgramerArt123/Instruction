#include "InstructionPointerJump.h"

const char *InstructionPointerJump::Jump_8__16__32()const {
	return "JMP";
}

const char *InstructionPointerJump::Call_Procedure_16__32()const {
	return "CALL";
}
const char *InstructionPointerJump::Return_From_Procedure_16()const {
	return "RET";
}
const char *InstructionPointerJump::Return_From_Procedure_32()const {
	return "RETF";
}
const char *InstructionPointerJump::Jump_If_Unsigned_Above_8()const {
	return "JA";
}
const char *InstructionPointerJump::Jump_If_Unsigned_Above__Equal_8()const {
	return "JAE";
}
const char *InstructionPointerJump::Jump_If_Unsigned_Below_8()const {
	return "JB";
}
const char *InstructionPointerJump::Jump_If_Unsigned_Below__Equal_8()const {
	return "JBE";
}
const char *InstructionPointerJump::Jump_If_Signed_Greater_8()const {
	return "JG";
}
const char *InstructionPointerJump::Jump_If_Signed_Greater__Equal_8()const {
	return "JGE";
}
const char *InstructionPointerJump::Jump_If_Signed_Less_8()const {
	return "JL";
}
const char *InstructionPointerJump::Jump_If_Signed_Less__Equal_8()const {
	return "JLE";
}
const char *InstructionPointerJump::Jump_If_Equal_8()const {
	return "JE";
}
const char *InstructionPointerJump::Jump_If_Not_Equal_8()const {
	return "JNE";
}
const char *InstructionPointerJump::Jump_If_Carry_8()const {
	return "JC";
}
const char *InstructionPointerJump::Jump_If_Not_Carry_8()const {
	return "JNC";
}
const char *InstructionPointerJump::Jump_If_Overflow_8()const {
	return "JO";
}
const char *InstructionPointerJump::Jump_If_Not_Overflow_8()const {
	return "JNO";
}
const char *InstructionPointerJump::Jump_If_Parity_8()const {
	return "JP";
}
const char *InstructionPointerJump::Jump_If_Not_Parity_8()const {
	return "JNP";
}
const char *InstructionPointerJump::Jump_If_Signed_8()const {
	return "JS";
}
const char *InstructionPointerJump::Jump_If_Not_Signed_8()const {
	return "JNS";
}
const char *InstructionPointerJump::Loop_ECX_8()const {
	return "LOOP";
}
const char *InstructionPointerJump::Loop_ECX_ZF_8()const {
	return "LOOPE";
}
const char *InstructionPointerJump::Loop_ECX_NOT_ZF_8()const {
	return "LOOPNE";
}
const char *InstructionPointerJump::Jump_NOT_CX_8()const {
	return "JCXZ";
}

const char *InstructionPointerJump::Jump_NOT_ECX_8()const {
	return "JECXZ";
}
const char *InstructionPointerJump::Call_Interrupt_Procedure_8()const {
	return "INT";
}
const char *InstructionPointerJump::Call_Interrupt_Procedure_If_Overflow()const {
	return "INTO";
}
const char *InstructionPointerJump::Interrupt_Return_16()const {
	return "IRET";
}