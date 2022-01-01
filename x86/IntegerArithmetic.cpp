#include "IntegerArithmetic.h"

const char *IntegerArithmetic::Add_8__16__32()const {
	return "ADD";
}
const char *IntegerArithmetic::Add_8__16__32_CF()const {
	return "ADC";
}
const char *IntegerArithmetic::Increase_8__16__32()const {
	return "INC";
}
const char *IntegerArithmetic::Convert_ASCII_Format_Add_AL_AF_CF()const {
	return "AAA";
}
const char *IntegerArithmetic::Convert_Decimal_Format_Add_AL_CF_AF()const {
	return "DAA";
}
const char *IntegerArithmetic::Sub_8__16__32()const {
	return "SUB";
}
const char *IntegerArithmetic::Sub_8__16__32_CF()const {
	return "SBB";
}
const char *IntegerArithmetic::Decrease_8__16__32()const {
	return "DEC";
}
const char *IntegerArithmetic::Negation_8__16__32_CF()const {
	return "NEG";
}
const char *IntegerArithmetic::Compare_Value_8__16__32()const {
	return "CMP";
}
const char *IntegerArithmetic::Convert_ASCII_Format_Sub_AL_AF_CF()const {
	return "AAS";
}
const char *IntegerArithmetic::Convert_Decimal_Format_Sub_AL_CF_AF()const {
	return "DAS";
}
const char *IntegerArithmetic::Unsigned_Multiply_8__16__32()const {
	return "MUL";
}
const char *IntegerArithmetic::Signed_Multiply_8__16__32_CF_OF()const {
	return "IMUL";
}
const char *IntegerArithmetic::Convert_ASCII_Format_Mul_SF_ZF_PF()const {
	return "AAM";
}
const char *IntegerArithmetic::Unsigned_Divide_8__16__32()const {
	return "DIV";
}
const char *IntegerArithmetic::Signed_Divide_8__16__32()const {
	return "IDIV";
}
const char *IntegerArithmetic::Convert_ASCII_Format_Div_SF_ZF_PF()const {
	return "AAD";
}
const char *IntegerArithmetic::Convert_Byte_To_Word_AX()const {
	return "CBW";
}
const char *IntegerArithmetic::Convert_Word_To_Doubleword_DX_AX()const {
	return "CWD";
}
const char *IntegerArithmetic::Convert_Word_To_Doubleword_EAX()const {
	return "CWDE";
}
const char *IntegerArithmetic::Convert_Doubleword_To_Quadword_EDX_EAX()const {
	return "CDQ";
}