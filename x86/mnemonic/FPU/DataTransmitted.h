#ifndef __X86_MNEMONIC_FPU_DATA_TRANSMITTED_H__
#define __X86_MNEMONIC_FPU_DATA_TRANSMITTED_H__
namespace x86
{
	namespace mnemonic {
		namespace FPU {
			namespace data_transmitted 
			{
				const char *Load_Zero_To_ST0_C1();
				const char *Load_One_To_ST0_C1();
				const char *Load_PI_To_ST0_C1();
				const char *Load_L2T_To_ST0_C1();
				const char *Load_L2E_To_ST0_C1();
				const char *Load_LG2_To_ST0_C1();
				const char *Load_LN2_To_ST0_C1();
				const char *Load_Float_Value_32__64__80_C1();
				const char *Load_Integer_Value_16__32__64_C1();
				const char *Load_Binary_Coded_Decimal_80_C1();
				const char *Store_Float_Value_32__64_C1();
				const char *Store_Integer_Value_16__32_C1();
				const char *Store_Pop_Float_Value_Stack_32__64__80_C1();
				const char *Store_Pop_Integer_Value_2__4__8_C1();
				const char *Store_Pop_Binary_Coded_Decimal_10_C1();
				const char *Move_If_Below_C1();
				const char *Move_If_Below__Equal_C1();
				const char *Move_If_Equal_C1();
				const char *Move_If_Not_Below_C1();
				const char *Move_If_Not_Below_Not_Equal_C1();
				const char *Move_If_Not_Equal_C1();
				const char *Move_If_Not_Unordered_C1();
				const char *Move_If_Unordered_C1();
			}
		}
	}
}

#endif