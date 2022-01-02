#include "IntegerLogical.h"
const char *IntegerLogical::And_8__16__32() {
	return "AND";
}

const char *IntegerLogical::Inclusive_Or_8__16__32() {
	return "OR";
}

const char *IntegerLogical::Exclusive_Or_8__16__32() {
	return "XOR";
}
const char *IntegerLogical::Not_8__16__32() {
	return "NOT";
}
const char *IntegerLogical::Compare_Value_8__16__32_SF_ZF_PF() {
	return "TEST";
}
const char *IntegerLogical::Bits_Move_Left_8__16__32_SF_ZF_PF() {
	return "SHL";
}
const char *IntegerLogical::Bits_Move_Left_Sign_8__16__32_SF_ZF_PF() {
	return "SAL";
}
const char *IntegerLogical::Bits_Move_Right_8__16__32_SF_ZF_PF() {
	return "SHR";
}
const char *IntegerLogical::Bits_Move_Right_Sign_8__16__32_SF_ZF_PF() {
	return "SAR";
}

const char *IntegerLogical::Bits_Move_Left_Roll_8__16__32_OF_CF() {
	return "ROL";
}

const char *IntegerLogical::Bits_Move_Right_Roll_8__16__32_OF_CF() {
	return "ROR";
}
const char *IntegerLogical::Bits_CF_Move_Left_Roll_8__16__32_OF_CF() {
	return "RCL";
}
const char *IntegerLogical::Bits_CF_Move_Right_Roll_8__16__32_OF_CF() {
	return "RCR";
}