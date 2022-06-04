#ifndef __X86_MNEMONIC_32_FLOAT_CONTROL_H__
#define __X86_MNEMONIC_32_FLOAT_CONTROL_H__
namespace x86
{
	namespace mnemonic {
		namespace FPU {
			namespace control {
			
				const char *Init_FPU_C0_C1_C2_C3();
				const char *Clear_Exceptions_PE_UE_OE_ZE_DE_IE_ES_SF_B();
				const char *No_Operation();
				const char *Exchange_Register_Content_C1();
				const char *Store_FPU_Status_16();
				const char *Load_FPU_Control_16();
				const char *Store_FPU_Control_16();
				const char *Load_FPU_Environment();
				const char *Store_FPU_Environment();
				const char *Restore_FPU_State();
				const char *Store_FPU_State_C0_C1_C2_C3();
				const char *Free_Float_Register();
				const char *Decrement_Stack_Top_Pointer_C1();
				const char *Increment_Stack_Top_Pointer_C1();
				const char *Setup_FPU_Protected_Mode();
			}
		}
	}
}

#endif