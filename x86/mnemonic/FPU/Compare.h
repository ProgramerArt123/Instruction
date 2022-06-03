#ifndef __X86_MNEMONIC_32_FLOAT_COMPARE_H__
#define __X86_MNEMONIC_32_FLOAT_COMPARE_H__
namespace x86
{
	namespace mnemonic {
		namespace FPU {
			namespace compare {
				const char *Compare_ST__Value_32__64_C1_C0_C2_C3();
				const char *Compare_ST_Flags_C1();
				const char *Compare_ST_Flags_Pop_Stack_C1();
				const char *Compare_Integer_Value_16__32_C1_C0_C2_C3();
				const char *Compare_Integer_Value_16__32_Pop_Stack_C1_C0_C2_C3();
				const char *Compare_Zero_C1_C0_C2_C3();
				const char *Unordered_Compare_ST_C1_C0_C2_C3();
				const char *Unordered_Compare_Pop_Stack_ST_C1_C0_C2_C3();
				const char *Unordered_Compare_Pop_Stack_2_ST_C1_C0_C2_C3();
				const char *Examine_Value_C1_C0_C2_C3();
			}
		}
	}
}

#endif