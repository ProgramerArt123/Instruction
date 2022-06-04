#include "Control.h"
namespace x86
{
	namespace mnemonic {
		namespace FPU {
			namespace control {
				const char *Init_FPU_C0_C1_C2_C3() {
					return "FINIT";
				}
				const char *Clear_Exceptions_PE_UE_OE_ZE_DE_IE_ES_SF_B() {
					return "FCLEX";
				}
				const char *No_Operation() {
					return "FNOP";
				}
				const char *Exchange_Register_Content_C1() {
					return "FXCH";
				}
				const char *Store_FPU_Status_16() {
					return "FSTSW";
				}
				const char *Load_FPU_Control_16() {
					return "FLDCW";
				}
				const char *Store_FPU_Control_16() {
					return "FSTCW";
				}
				const char *Load_FPU_Environment() {
					return "FLDENV";
				}
				const char *Store_FPU_Environment() {
					return "FSTENV";
				}
				const char *Restore_FPU_State() {
					return "FRSTOR";
				}
				const char *Store_FPU_State_C0_C1_C2_C3() {
					return "FSAVE";
				}
				const char *Free_Float_Register() {
					return "FFREE";
				}
				const char *Decrement_Stack_Top_Pointer_C1() {
					return "FDECSTP";
				}
				const char *Increment_Stack_Top_Pointer_C1() {
					return "FINCSTP";
				}
				const char *Setup_FPU_Protected_Mode() {
					return "FSETPM";
				}
			}
		}
	}
}