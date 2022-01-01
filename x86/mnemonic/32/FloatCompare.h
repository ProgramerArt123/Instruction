#ifndef __X86_32_FLOAT_COMPARE_H__
#define __X86_32_FLOAT_COMPARE_H__

class FloatCompare {
public:
	const char *Compare_ST__Value_32_C1_C0_C2_C3()const;
	const char *Compare_ST_Value_C1()const;
	const char *Compare_Pop_Stack_ST_Value_C1()const;
	const char *Compare_Integer_16__32_C1_C0_C2_C3()const;
	const char *Compare_Pop_Stack_Integer_16__32_C1_C0_C2_C3()const;
	const char *Compare_ZERO_C1_C0_C2_C3()const;
	const char *Unordered_Compare_ST_C1_C0_C2_C3()const;
	const char *Unordered_Compare_Pop_Stack_ST_C1_C0_C2_C3()const;
	const char *Unordered_Compare_Pop_Stack_2_ST_C1_C0_C2_C3()const;
	const char *Examine_Value_C1_C0_C2_C3()const;
};

#endif