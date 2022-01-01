#ifndef __X86_32_INTEGER_LOGICAL_H__
#define __X86_32_INTEGER_LOGICAL_H__

class IntegerLogical {
public:
	const char *And_8__16__32();
	const char *Inclusive_Or_8__16__32();
	const char *Exclusive_Or_8__16__32();
	const char *Not_8__16__32();
	const char *Compare_Value_8__16__32_SF_ZF_PF();
	const char *Bits_Move_Left_8__16__32_SF_ZF_PF();
	const char *Bits_Move_Left_Sign_8__16__32_SF_ZF_PF();
	const char *Bits_Move_Right_8__16__32_SF_ZF_PF();
	const char *Bits_Move_Right_Sign_8__16__32_SF_ZF_PF();
	const char *Bits_Move_Left_Roll_8__16__32_OF_CF();
	const char *Bits_Move_Right_Roll_8__16__32_OF_CF();
	const char *Bits_CF_Move_Left_Roll_8__16__32_OF_CF();
	const char *Bits_CF_Move_Right_Roll_8__16__32_OF_CF();
};

#endif