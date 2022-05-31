#ifndef __X86_MNEMONIC_FPU_ARITHMETIC_H__
#define __X86_MNEMONIC_FPU_ARITHMETIC_H__
namespace x86
{
	namespace mnemonic {
		namespace FPU {
			namespace arithmetic {
				const char *Add_ST__Value_32__64_C1();
				const char *Add_Pop_Stack_ST_C1();
				const char *Add_Integer_16__32_C1();
				const char *Sub_ST__Value_32__64_C1();
				const char *Sub_Pop_Stack_ST_C1();
				const char *Sub_Integer_16__32_C1();
				const char *Swap_Sub_ST__Value_32__64_C1();
				const char *Swap_Sub_Pop_Stack_ST_C1();
				const char *Swap_Sub_Integer_16__32_C1();
				const char *Mul_ST__Value_32_C1();
				const char *Mul_Pop_Stack_ST_C1();
				const char *Mul_Integer_16__32_C1();
				const char *Div_ST__Value_32_C1();
				const char *Div_Pop_Stack_ST_C1();
				const char *Swap_Div_ST__Value_32_C1();
				const char *Swap_Div_Pop_Stack_ST__Value_32_C1();
				const char *Div_Integer_16__32_C1();
				const char *Div_Sub_Integer_16__32_C1();
				const char *Change_Sign_C1();
				const char *Absolute_Value_C1();
				const char *Square_Root_C1();
				const char *Scale_C1();
				const char *Round_To_Integer_C1();
			}
		}
	}
}


#endif