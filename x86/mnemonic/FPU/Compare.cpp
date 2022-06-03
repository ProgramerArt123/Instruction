#include "Compare.h"
namespace x86
{
	namespace mnemonic {
		namespace FPU {
			namespace compare {
				const char *Compare_ST__Value_32__64_C1_C0_C2_C3() {
					return "FCOM";
				}
				const char *Compare_ST_Flags_C1() {
					return "FCOMI";
				}
				const char *Compare_ST_Flags_Pop_Stack_C1() {
					return "FCOMIP";
				}
				const char *Compare_Integer_Value_16__32_C1_C0_C2_C3() {
					return "FICOM";
				}
				const char *Compare_Integer_Value_16__32_Pop_Stack_C1_C0_C2_C3() {
					return "FICOMP";
				}
				const char *Compare_ZERO_C1_C0_C2_C3() {
					return "FTST";
				}
				const char *Unordered_Compare_ST_C1_C0_C2_C3() {
					return "FUCOM";
				}
				const char *Unordered_Compare_Pop_Stack_ST_C1_C0_C2_C3() {
					return "FUCOMP";
				}

				const char *Unordered_Compare_Pop_Stack_2_ST_C1_C0_C2_C3() {
					return "FUCOMPP";
				}
				const char *Examine_Value_C1_C0_C2_C3() {
					return "FXAM";
				}
			}
		}
	}
}