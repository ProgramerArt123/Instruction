#ifndef __X86_MNEMONIC_STRING_OPERATION_H__
#define __X86_MNEMONIC_STRING_OPERATION_H__
namespace x86
{
	namespace mnemonic {
		namespace string {
				const char *Transmitted_8();
				const char *Transmitted_16();
				const char *Transmitted_32();
				const char *Compare_Bytes_CF_OF_SF_ZF_AF_PF();
				const char *Compare_Words_CF_OF_SF_ZF_AF_PF();
				const char *Compare_DWords_CF_OF_SF_ZF_AF_PF();
				const char *Compare_AL_Byte_CF_OF_SF_ZF_AF_PF();
				const char *Compare_AX_Word_CF_OF_SF_ZF_AF_PF();
				const char *Compare_EAX_DWord_CF_OF_SF_ZF_AF_PF();
				const char *Load_Byte_To_AL_From_DS_ESI();
				const char *Load_Word_To_AX_From_DS_ESI();
				const char *Load_DWord_To_EAX_From_DS_ESI();
				const char *Store_Byte_To_ES_EDI_From_AL();
				const char *Store_Word_To_ES_EDI_From_AX();
				const char *Store_32_To_ES_EDI_From_EAX();
				const char *Repeat_Prefix_ECX();
				const char *Repeat_Prefix_EQUAL_ZF_ECX();
				const char *Repeat_Prefix_NOT_EQUAL_ZF_ECX();
				const char *Repeat_Prefix_CF_ECX();
				const char *Repeat_Prefix_NOT_CF_ECX();
		}
	}
}

#endif