#include "DataTransmitted.h"
namespace x86
{
	namespace mnemonic {
		namespace FPU {
			namespace data_transmitted 
			{
				const char *Load_Zero_To_ST0_C1() {
					return "FLDZ";
				}
				const char *Load_One_To_ST0_C1() {
					return "FLD1";
				}
				const char *Load_PI_To_ST0_C1() {
					return "FLDPI";
				}
				const char *Load_L2T_To_ST0_C1() {
					return "FLDL2T";
				}
				const char *Load_L2E_To_ST0_C1() {
					return "FLDL2E";
				}
				const char *Load_LG2_To_ST0_C1() {
					return "FLDLG2";
				}
				const char *Load_LN2_To_ST0_C1() {
					return "FLDLN2";
				}

				const char *Load_Float_Value_32__64__80_C1() {
					return "FLD";
				}
				const char *Load_Integer_Value_16__32__64_C1() {
					return "FILD";
				}
				const char *Load_Binary_Coded_Decimal_80_C1() {
					return "FBLD";
				}
				const char *Store_Float_Value_32__64_C1() {
					return "FST";
				}
				const char *Store_Integer_Value_4__8_C1() {
					return "FIST";
				}
				const char *Store_Pop_Float_Value_Stack_4__8__10_C1() {
					return "FSTP";
				}
				const char *Store_Pop_Integer_Value_2__4__8_C1() {
					return "FISTP";
				}
				const char *Store_Pop_Binary_Coded_Decimal_10_C1() {
					return "FBSTP";
				}
				const char *Move_If_Below_C1() {
					return "FCMOVB";
				}
				const char *Move_If_Below__Equal_C1() {
					return "FCMOVBE";
				}
				const char *Move_If_Equal_C1() {
					return "FCMOVE";
				}
				const char *Move_If_Not_Below_C1() {
					return "FCMOVNB";
				}
				const char *Move_If_Not_Below_Not_Equal_C1() {
					return "FCMOVNBE";
				}
				const char *Move_If_Not_Equal_C1() {
					return "FCMOVNE";
				}
				const char *Move_If_Not_Unordered_C1() {
					return "FCMOVNU";
				}
				const char *Move_If_Unordered_C1() {
					return "FCMOVU";
				}
			}
		}
	}
}