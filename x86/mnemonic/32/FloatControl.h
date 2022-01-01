#ifndef __X86_32_FLOAT_CONTROL_H__
#define __X86_32_FLOAT_CONTROL_H__

class FloatControl {
public:
	const char *Init_FPU_C0_C1_C2_C3()const;
	const char *Clear_Exceptions_PE_UE_OE_ZE_DE_IE_ES_SF_B()const;
	const char *No_Operation()const;
	const char *Exchange_Register_Content_C1()const;
	const char *Store_FPU_Status_16()const;
	const char *Load_FPU_Control_16()const;
	const char *Store_FPU_Control_16()const;
	const char *Load_FPU_Environment()const;
	const char *Store_FPU_Environment()const;
	const char *Restore_FPU_State()const;
	const char *Store_FPU_State_C0_C1_C2_C3()const;
	const char *Free_Float_Register()const;
	const char *Decrement_Stack_Top_Pointer_C1()const;
	const char *Increment_Stack_Top_Pointer_C1()const;
	const char *Setup_FPU_Protected_Mode()const;
};

#endif