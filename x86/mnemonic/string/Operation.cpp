#include "Operation.h"
namespace x86
{
	namespace mnemonic {
		namespace string {
			const char *Transmitted_8() {
				return "MOVSB";
			}
			const char *Transmitted_16() {
				return "MOVSW";
			}
			const char *Transmitted_32() {
				return "MOVSD";
			}
			const char *Compare_Bytes_CF_OF_SF_ZF_AF_PF() {
				return "CMPSB";
			}
			const char *Compare_Words_CF_OF_SF_ZF_AF_PF() {
				return "CMPSW";
			}
			const char *Compare_DWords_CF_OF_SF_ZF_AF_PF() {
				return "CMPSD";
			}
			const char *Compare_AL_Byte_CF_OF_SF_ZF_AF_PF() {
				return "SCASB";
			}
			const char *Compare_AX_Word_CF_OF_SF_ZF_AF_PF() {
				return "SCASW";
			}
			const char *Compare_EAX_DWord_CF_OF_SF_ZF_AF_PF() {
				return "SCASD";
			}
			const char *Load_Byte_To_AL_From_DS_ESI() {
				return "LODSB";
			}
			const char *Load_Word_To_AX_From_DS_ESI() {
				return "LODSW";
			}
			const char *Load_32_To_EAX_From_DS_ESI() {
				return "LODSD";
			}
			const char *Store_8_To_ES_EDI_From_AL() {
				return "STOSB";
			}
			const char *Store_16_To_ES_EDI_From_AX() {
				return "STOSW";
			}
			const char *Store_32_To_ES_EDI_From_EAX() {
				return "STOSD";
			}
			const char *Repeat_Prefix_ECX() {
				return "REP";
			}
			const char *Repeat_Prefix_EQUAL_ZF_ECX() {
				return "REPE";
			}
			const char *Repeat_Prefix_NOT_EQUAL_ZF_ECX() {
				return "REPNE";
			}
			const char *Repeat_Prefix_CF_ECX() {
				return "REPC";
			}
			const char *Repeat_Prefix_NOT_CF_ECX() {
				return "REPNC";
			}
		}
	}
}