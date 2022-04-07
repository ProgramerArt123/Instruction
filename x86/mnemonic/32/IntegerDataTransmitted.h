#ifndef __X86_MNEMONIC_32_INTEGER_DATA_TRANSMITTED_H__
#define __X86_MNEMONIC_32_INTEGER_DATA_TRANSMITTED_H__
namespace x86
{
	namespace mnemonic {
		namespace size32
		{
			namespace integer_data_transmitted 
			{
				const char *Transmitted_8__16__32();
				const char *Transmitted_8__16_Fill_Sign();
				const char *Transmitted_8__16_Fill_Zero();
				const char *Push_Stack_8__16__32();
				const char *Pop_Stack_8__16();
				const char *Push_Stack_All_16_Registers();
				const char *Pop_Stack_All_16_Registers();
				const char *Push_Stack_All_32_Registers();
				const char *Pop_Stack_All_32_Registers();
				const char *Reverse_32_Register_8();
				const char *Swap_8__16__32();
				const char *Transmitted_8__16__32_If_Not_Equal_A_ZF();
				const char *Swap_8__16__32_Add();
				const char *Transmitted_8_To_AL_From_DS();
				const char *Read_8__16_From_IO_PORT();
				const char *Write_8__16_To_IO_PORT();
				const char *Load_Effective_Address_16__32();
				const char *Load_Effective_Address_32_DS();
				const char *Load_Effective_Address_32_ES();
				const char *Load_Effective_Address_32_FS();
				const char *Load_Effective_Address_32_GS();
				const char *Load_Effective_Address_32_SS();
				const char *Load_Flags_To_AH();
				const char *Save_Flags_From_AH();
				const char *Push_Stack_16_Flags();
				const char *Pop_Stack_16_Flags();
				const char *Push_Stack_32_Flags();
				const char *Pop_Stack_32_Flags();
			}
		}
	}
}

#endif