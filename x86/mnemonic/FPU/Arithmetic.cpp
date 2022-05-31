#include "Arithmetic.h"
namespace x86
{
	namespace mnemonic {
		namespace FPU {
			namespace arithmetic {
				const char *Add_ST__Value_32__64_C1() {
					return "FADD";
				}

				const char *Add_Pop_Stack_ST_C1() {
					return "FADDP";
				}

				const char *Add_Integer_16__32_C1() {
					return "FIADD";
				}

				const char *Sub_ST__Value_32__64_C1() {
					return "FSUB";
				}
				const char *Sub_Pop_Stack_ST_C1() {
					return "FSUBP";
				}
				const char *Sub_Integer_16__32_C1() {
					return "FISUB";
				}
				const char *Swap_Sub_ST__Value_32__64_C1() {
					return "FSUBR";
				}
				const char *Swap_Sub_Pop_Stack_ST_C1() {
					return "FSUBRP";
				}
				const char *Swap_Sub_Integer_16__32_C1() {
					return "FISUBR";
				}
				const char *Mul_ST__Value_32__64_C1() {
					return "FMUL";
				}
				const char *Mul_Pop_Stack_ST_C1() {
					return "FMULP";
				}
				const char *Mul_Integer_16__32_C1() {
					return "FIMUL";
				}
				const char *Div_ST__Value_32_C1() {
					return "FDIV";
				}
				const char *Div_Pop_Stack_ST_C1() {
					return "FDIVP";
				}
				const char *Swap_Div_ST__Value_32_C1() {
					return "FDIVR";
				}

				const char *Swap_Div_Pop_Stack_ST__Value_32_C1() {
					return "FDIVRP";
				}
				const char *Div_Integer_16__32_C1() {
					return "FIDIV";
				}
				const char *Div_Sub_Integer_16__32_C1() {
					return "FIDIVR";
				}
				const char *Change_Sign_C1() {
					return "FCHS";
				}
				const char *Absolute_Value_C1() {
					return "FABS";
				}
				const char *Square_Root_C1() {
					return "FSQRT";
				}
				const char *Scale_C1() {
					return "FSCALE";
				}

				const char *Round_To_Integer_C1() {
					return "FRNDINT";
				}
			}
		}
	}
}