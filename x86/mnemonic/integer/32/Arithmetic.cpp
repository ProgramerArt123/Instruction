#include "Arithmetic.h"
namespace x86
{
	namespace mnemonic {
		namespace integer
		{
			namespace size32 {
				namespace arithmetic
				{
					const char *Add_8__16__32() {
						return "ADD";
					}
					const char *Add_8__16__32_CF() {
						return "ADC";
					}
					const char *Increase_8__16__32() {
						return "INC";
					}
					const char *Convert_ASCII_Format_Add_AL_AF_CF() {
						return "AAA";
					}
					const char *Convert_Decimal_Format_Add_AL_CF_AF() {
						return "DAA";
					}
					const char *Sub_8__16__32() {
						return "SUB";
					}
					const char *Sub_8__16__32_CF() {
						return "SBB";
					}
					const char *Decrease_8__16__32() {
						return "DEC";
					}
					const char *Negation_8__16__32_CF() {
						return "NEG";
					}
					const char *Compare_Value_8__16__32() {
						return "CMP";
					}
					const char *Convert_ASCII_Format_Sub_AL_AF_CF() {
						return "AAS";
					}
					const char *Convert_Decimal_Format_Sub_AL_CF_AF() {
						return "DAS";
					}
					const char *Unsigned_Multiply_8__16__32() {
						return "MUL";
					}
					const char *Signed_Multiply_8__16__32_CF_OF() {
						return "IMUL";
					}
					const char *Convert_ASCII_Format_Mul_SF_ZF_PF() {
						return "AAM";
					}
					const char *Unsigned_Divide_8__16__32() {
						return "DIV";
					}
					const char *Signed_Divide_8__16__32() {
						return "IDIV";
					}
					const char *Convert_ASCII_Format_Div_SF_ZF_PF() {
						return "AAD";
					}
					const char *Convert_Byte_To_Word_AX() {
						return "CBW";
					}
					const char *Convert_Word_To_Doubleword_DX_AX() {
						return "CWD";
					}
					const char *Convert_Word_To_Doubleword_EAX() {
						return "CWDE";
					}
					const char *Convert_Doubleword_To_Quadword_EDX_EAX() {
						return "CDQ";
					}
				}
			}
		}
	}
}