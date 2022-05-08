#include "InstructionPointerJump.h"
namespace x86
{
	namespace mnemonic {
		namespace jump
		{
			namespace size32 {
				const char *Jump_8__16__32() {
					return "JMP";
				}
				const char *Call_Procedure_16__32() {
					return "CALL";
				}
				const char *Return_From_Procedure_16() {
					return "RET";
				}
				const char *Return_From_Procedure_20() {
					return "RETF";
				}
				const char *Jump_If_Unsigned_Above_8() {
					return "JA";
				}
				const char *Jump_If_Unsigned_Above__Equal_8() {
					return "JAE";
				}
				const char *Jump_If_Unsigned_Below_8() {
					return "JB";
				}
				const char *Jump_If_Unsigned_Below__Equal_8() {
					return "JBE";
				}
				const char *Jump_If_Signed_Greater_8() {
					return "JG";
				}
				const char *Jump_If_Signed_Greater__Equal_8() {
					return "JGE";
				}
				const char *Jump_If_Signed_Less_8() {
					return "JL";
				}
				const char *Jump_If_Signed_Less__Equal_8() {
					return "JLE";
				}
				const char *Jump_If_Equal_8() {
					return "JE";
				}
				const char *Jump_If_Not_Equal_8() {
					return "JNE";
				}
				const char *Jump_If_Carry_8() {
					return "JC";
				}
				const char *Jump_If_Not_Carry_8() {
					return "JNC";
				}
				const char *Jump_If_Overflow_8() {
					return "JO";
				}
				const char *Jump_If_Not_Overflow_8() {
					return "JNO";
				}
				const char *Jump_If_Parity_8() {
					return "JP";
				}
				const char *Jump_If_Not_Parity_8() {
					return "JNP";
				}
				const char *Jump_If_Signed_8() {
					return "JS";
				}
				const char *Jump_If_Not_Signed_8() {
					return "JNS";
				}
				const char *Loop_ECX_8() {
					return "LOOP";
				}
				const char *Loop_ECX_ZF_8() {
					return "LOOPZ";
				}
				const char *Loop_ECX_Not_ZF_8() {
					return "LOOPNZ";
				}
				const char *Jump_CX_Zero_8() {
					return "JCXZ";
				}

				const char *Jump_NOT_ECX_8() {
					return "JECXZ";
				}
				const char *Call_Interrupt_Procedure_8() {
					return "INT";
				}
				const char *Call_Interrupt_Procedure_If_Overflow() {
					return "INTO";
				}
				const char *Interrupt_Return_16() {
					return "IRET";
				}
			}
		}
	}
}