#ifndef __X86_32_INTEGER_ARITHMETIC_H__
#define __X86_32_INTEGER_ARITHMETIC_H__

class IntegerArithmetic {
public:
	const char *Add_8__16__32()const;
	const char *Add_8__16__32_CF()const;
	const char *Increase_8__16__32()const;
	const char *Convert_ASCII_Format_Add_AL_AF_CF()const;
	const char *Convert_Decimal_Format_Add_AL_CF_AF()const;
	const char *Sub_8__16__32()const;
	const char *Sub_8__16__32_CF()const;
	const char *Decrease_8__16__32()const;
	const char *Negation_8__16__32_CF()const;
	const char *Compare_Value_8__16__32()const;
	const char *Convert_ASCII_Format_Sub_AL_AF_CF()const;
	const char *Convert_Decimal_Format_Sub_AL_CF_AF()const;
	const char *Unsigned_Multiply_8__16__32()const;
	const char *Signed_Multiply_8__16__32_CF_OF()const;
	const char *Convert_ASCII_Format_Mul_SF_ZF_PF()const;
	const char *Unsigned_Divide_8__16__32()const;
	const char *Signed_Divide_8__16__32()const;
	const char *Convert_ASCII_Format_Div_SF_ZF_PF()const;
	const char *Convert_Byte_To_Word_AX()const;
	const char *Convert_Word_To_Doubleword_DX_AX()const;
	const char *Convert_Word_To_Doubleword_EAX()const;
	const char *Convert_Doubleword_To_Quadword_EDX_EAX()const;
	
};

#endif