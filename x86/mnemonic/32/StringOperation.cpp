#include "StringOperation.h"
namespace x86
{
	namespace mnemonic {
		namespace size32 {
			const char *StringOperation::Transmitted_8()const {
				return "MOVSB";
			}
			const char *StringOperation::Transmitted_16()const {
				return "MOVSW";
			}
			const char *StringOperation::Transmitted_32()const {
				return "MOVSD";
			}
			const char *StringOperation::Compare_Bytes_8_CF_OF_SF_ZF_AF_PF()const {
				return "CMPSB";
			}
			const char *StringOperation::Compare_Bytes_16_CF_OF_SF_ZF_AF_PF()const {
				return "CMPSW";
			}
			const char *StringOperation::Compare_Bytes_32_CF_OF_SF_ZF_AF_PF()const {
				return "CMPSD";
			}
			const char *StringOperation::Compare_AX_Bytes_8_CF_OF_SF_ZF_AF_PF()const {
				return "SCASB";
			}
			const char *StringOperation::Compare_AX_Bytes_16_CF_OF_SF_ZF_AF_PF()const {
				return "SCASW";
			}
			const char *StringOperation::Compare_AX_Bytes_32_CF_OF_SF_ZF_AF_PF()const {
				return "SCASD";
			}
			const char *StringOperation::Load_8_To_AL_From_DS_ESI()const {
				return "LODSB";
			}
			const char *StringOperation::Load_16_To_AX_From_DS_ESI()const {
				return "LODSW";
			}
			const char *StringOperation::Load_32_To_EAX_From_DS_ESI()const {
				return "LODSD";
			}
			const char *StringOperation::Store_8_To_ES_EDI_From_AL()const {
				return "STOSB";
			}
			const char *StringOperation::Store_16_To_ES_EDI_From_AX()const {
				return "STOSW";
			}
			const char *StringOperation::Store_32_To_ES_EDI_From_EAX()const {
				return "STOSD";
			}
			const char *StringOperation::Repeat_Prefix_ECX()const {
				return "REP";
			}
			const char *StringOperation::Repeat_Prefix_EQUAL_ZF_ECX()const {
				return "REPE";
			}
			const char *StringOperation::Repeat_Prefix_NOT_EQUAL_ZF_ECX()const {
				return "REPNE";
			}
			const char *StringOperation::Repeat_Prefix_CF_ECX()const {
				return "REPC";
			}
			const char *StringOperation::Repeat_Prefix_NOT_CF_ECX()const {
				return "REPNC";
			}
		}
	}
}