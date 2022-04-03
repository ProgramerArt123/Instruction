#include "FloatControl.h"
namespace x86
{
	namespace mnemonic {
		namespace size32 {
			const char *FloatControl::Init_FPU_C0_C1_C2_C3()const {
				return "FINIT";
			}
			const char *FloatControl::Clear_Exceptions_PE_UE_OE_ZE_DE_IE_ES_SF_B()const {
				return "FCLEX";
			}
			const char *FloatControl::No_Operation()const {
				return "FNOP";
			}
			const char *FloatControl::Exchange_Register_Content_C1()const {
				return "FXCH";
			}
			const char *FloatControl::Store_FPU_Status_16()const {
				return "FSTSW";
			}
			const char *FloatControl::Load_FPU_Control_16()const {
				return "FLDCW";
			}
			const char *FloatControl::Store_FPU_Control_16()const {
				return "FSTCW";
			}
			const char *FloatControl::Load_FPU_Environment()const {
				return "FLDENV";
			}
			const char *FloatControl::Store_FPU_Environment()const {
				return "FSTENV";
			}
			const char *FloatControl::Restore_FPU_State()const {
				return "FRSTOR";
			}
			const char *FloatControl::Store_FPU_State_C0_C1_C2_C3()const {
				return "FSAVE";
			}
			const char *FloatControl::Free_Float_Register()const {
				return "FFREE";
			}
			const char *FloatControl::Decrement_Stack_Top_Pointer_C1()const {
				return "FDECSTP";
			}
			const char *FloatControl::Increment_Stack_Top_Pointer_C1()const {
				return "FINCSTP";
			}
			const char *FloatControl::Setup_FPU_Protected_Mode()const {
				return "FSETPM";
			}
		}
	}
}