#ifndef __X86_MNEMONIC_32_FLOAT_ARITHMETIC_H__
#define __X86_MNEMONIC_32_FLOAT_ARITHMETIC_H__
namespace x86
{
	namespace mnemonic {
		namespace size32 {
			class FloatArithmetic {
			public:
				const char *Add_ST__Value_32_C1()const;
				const char *Add_Pop_Stack_ST_C1()const;
				const char *Add_16__32_C1()const;
				const char *Sub_ST__Value_32_C1()const;
				const char *Sub_Pop_Stack_ST_C1()const;
				const char *Swap_Sub_ST__Value_32_C1()const;
				const char *Swap_Sub_Pop_Stack_ST__Value_32_C1()const;
				const char *Sub_Integer_16__32_C1()const;
				const char *Swap_Sub_Integer_16__32_C1()const;
				const char *Mul_ST__Value_32_C1()const;
				const char *Mul_Pop_Stack_ST_C1()const;
				const char *Mul_Integer_16__32_C1()const;
				const char *Div_ST__Value_32_C1()const;
				const char *Div_Pop_Stack_ST_C1()const;
				const char *Swap_Div_ST__Value_32_C1()const;
				const char *Swap_Div_Pop_Stack_ST__Value_32_C1()const;
				const char *Div_Integer_16__32_C1()const;
				const char *Div_Sub_Integer_16__32_C1()const;
				const char *Change_Sign_C1()const;
				const char *Absolute_Value_C1()const;
				const char *Square_Root_C1()const;
				const char *Scale_C1()const;
				const char *Round_To_Integer_C1()const;
			};
		}
	}
}


#endif