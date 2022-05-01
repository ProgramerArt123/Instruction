#ifndef __X86_MNEMONIC_JUMP_32_INSTRUCTION_POINTER_JUMP_H__
#define __X86_MNEMONIC_JUMP_32_INSTRUCTION_POINTER_JUMP_H__
namespace x86
{
	namespace mnemonic {
		namespace jump
		{
		namespace size32 {
				const char *Jump_8__16__32();
				const char *Call_Procedure_16__32();
				const char *Return_From_Procedure_16();
				const char *Return_From_Procedure_20();
				const char *Jump_If_Unsigned_Above_8();
				const char *Jump_If_Unsigned_Above__Equal_8();
				const char *Jump_If_Unsigned_Below_8();
				const char *Jump_If_Unsigned_Below__Equal_8();
				const char *Jump_If_Signed_Greater_8();
				const char *Jump_If_Signed_Greater__Equal_8();
				const char *Jump_If_Signed_Less_8();
				const char *Jump_If_Signed_Less__Equal_8();
				const char *Jump_If_Equal_8();
				const char *Jump_If_Not_Equal_8();
				const char *Jump_If_Carry_8();
				const char *Jump_If_Not_Carry_8();
				const char *Jump_If_Overflow_8();
				const char *Jump_If_Not_Overflow_8();
				const char *Jump_If_Parity_8();
				const char *Jump_If_Not_Parity_8();
				const char *Jump_If_Signed_8();
				const char *Jump_If_Not_Signed_8();
				const char *Loop_ECX_8();
				const char *Loop_ECX_ZF_8();
				const char *Loop_ECX_NOT_ZF_8();
				const char *Jump_NOT_CX_8();
				const char *Jump_NOT_ECX_8();
				const char *Call_Interrupt_Procedure_8();
				const char *Call_Interrupt_Procedure_If_Overflow();
				const char *Interrupt_Return_16();
			};
		}
	}
}

#endif