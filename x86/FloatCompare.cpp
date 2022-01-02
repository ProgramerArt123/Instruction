#include "FloatCompare.h"
const char *FloatCompare::Compare_ST__Value_32_C1_C0_C2_C3()const {
	return "FCOM";
}
const char *FloatCompare::Compare_ST_Value_C1()const {
	return "FCOMI";
}
const char *FloatCompare::Compare_Pop_Stack_ST_Value_C1()const {
	return "FCOMIP";
}
const char *FloatCompare::Compare_Integer_16__32_C1_C0_C2_C3()const {
	return "FICOM";
}
const char *FloatCompare::Compare_Pop_Stack_Integer_16__32_C1_C0_C2_C3()const {
	return "FICOMP";
}
const char *FloatCompare::Compare_ZERO_C1_C0_C2_C3()const {
	return "FTST";
}
const char *FloatCompare::Unordered_Compare_ST_C1_C0_C2_C3()const {
	return "FUCOM";
}
const char *FloatCompare::Unordered_Compare_Pop_Stack_ST_C1_C0_C2_C3()const {
	return "FUCOMP";
}

const char *FloatCompare::Unordered_Compare_Pop_Stack_2_ST_C1_C0_C2_C3()const {
	return "FUCOMPP";
}
const char *FloatCompare::Examine_Value_C1_C0_C2_C3()const {
	return "FXAM";
}