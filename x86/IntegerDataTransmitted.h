#ifndef __INTEGER_DATA_TRANSMITTED_H__
#define __INTEGER_DATA_TRANSMITTED_H__

class IntegerDataTransmitted {
public:
	const char *Transmitted_8__16()const;
	const char *Transmitted_8__16_Fill_Sign()const;
	const char *Transmitted_8__16_Fill_0()const;
	const char *Push_Stack_8__16()const;
	const char *Pop_Stack_8__16()const;
	const char *Push_Stack_All_16_Registers()const;
	const char *Pop_Stack_All_16_Registers()const;
	const char *Push_Stack_All_32_Registers()const;
	const char *Pop_Stack_All_32_Registers()const;
	const char *Reverse_32_Register_8()const;
	const char *Swap_8__16__32()const;
	const char *Transmitted_8__16__32_If_Not_Equal_A_ZF()const;
	const char *Swap_8__16__32_Add()const;
	const char *Transmitted_8_To_AL_From_DS()const;
	const char *Read_8__16_From_IO_PORT()const;
	const char *Write_8__16_To_IO_PORT()const;
	const char *Load_Effective_Address_16__32()const;
	const char *Load_Effective_Address_32_DS()const;
	const char *Load_Effective_Address_32_ES()const;
	const char *Load_Effective_Address_32_FS()const;
	const char *Load_Effective_Address_32_GS()const;
	const char *Load_Effective_Address_32_SS()const;
	const char *Load_Flags_To_AH()const;
	const char *Save_Flags_From_AH()const;
	const char *Push_Stack_16_Flags()const;
	const char *Pop_Stack_16_Flags()const;
	const char *Push_Stack_32_Flags()const;
	const char *Pop_Stack_32_Flags()const;
};

#endif