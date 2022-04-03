#include "FloatArithmetic.h"
namespace x86
{
	namespace mnemonic {
		namespace size32 {
			const char *FloatArithmetic::Add_ST__Value_32_C1()const {
				return "FADD";
			}

			const char *FloatArithmetic::Add_Pop_Stack_ST_C1()const {
				return "FADDP";
			}

			const char *FloatArithmetic::Add_16__32_C1()const {
				return "FIADD";
			}

			const char *FloatArithmetic::Sub_ST__Value_32_C1()const {
				return "FSUB";
			}
			const char *FloatArithmetic::Sub_Pop_Stack_ST_C1()const {
				return "FSUBP";
			}
			const char *FloatArithmetic::Swap_Sub_ST__Value_32_C1()const {
				return "FSUBR";
			}
			const char *FloatArithmetic::Swap_Sub_Pop_Stack_ST__Value_32_C1()const {
				return "FSUBRP";
			}
			const char *FloatArithmetic::Sub_Integer_16__32_C1()const {
				return "FISUB";
			}
			const char *FloatArithmetic::Swap_Sub_Integer_16__32_C1()const {
				return "FISUBR";
			}
			const char *FloatArithmetic::Mul_ST__Value_32_C1()const {
				return "FMUL";
			}
			const char *FloatArithmetic::Mul_Pop_Stack_ST_C1()const {
				return "FMULP";
			}
			const char *FloatArithmetic::Mul_Integer_16__32_C1()const {
				return "FIMUL";
			}
			const char *FloatArithmetic::Div_ST__Value_32_C1()const {
				return "FDIV";
			}
			const char *FloatArithmetic::Div_Pop_Stack_ST_C1()const {
				return "FDIVP";
			}
			const char *FloatArithmetic::Swap_Div_ST__Value_32_C1()const {
				return "FDIVR";
			}

			const char *FloatArithmetic::Swap_Div_Pop_Stack_ST__Value_32_C1()const {
				return "FDIVRP";
			}
			const char *FloatArithmetic::Div_Integer_16__32_C1()const {
				return "FIDIV";
			}
			const char *FloatArithmetic::Div_Sub_Integer_16__32_C1()const {
				return "FIDIVR";
			}
			const char *FloatArithmetic::Change_Sign_C1()const {
				return "FCHS";
			}
			const char *FloatArithmetic::Absolute_Value_C1()const {
				return "FABS";
			}
			const char *FloatArithmetic::Square_Root_C1()const {
				return "FSQRT";
			}
			const char *FloatArithmetic::Scale_C1()const {
				return "FSCALE";
			}

			const char *FloatArithmetic::Round_To_Integer_C1()const {
				return "FRNDINT";
			}
		}
	}
}