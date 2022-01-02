#ifndef __STRING_OPERATION_H__
#define __STRING_OPERATION_H__

class StringOperation {
public:
	const char *Transmitted_8()const;
	const char *Transmitted_16()const;
	const char *Transmitted_32()const;
	const char *Compare_Bytes_8_CF_OF_SF_ZF_AF_PF()const;
	const char *Compare_Bytes_16_CF_OF_SF_ZF_AF_PF()const;
	const char *Compare_Bytes_32_CF_OF_SF_ZF_AF_PF()const;
	const char *Compare_AX_Bytes_8_CF_OF_SF_ZF_AF_PF()const;
	const char *Compare_AX_Bytes_16_CF_OF_SF_ZF_AF_PF()const;
	const char *Compare_AX_Bytes_32_CF_OF_SF_ZF_AF_PF()const;
	const char *Load_8_To_AL_From_DS_ESI()const;
	const char *Load_16_To_AX_From_DS_ESI()const;
	const char *Load_32_To_EAX_From_DS_ESI()const;
	const char *Store_8_To_ES_EDI_From_AL()const;
	const char *Store_16_To_ES_EDI_From_AX()const;
	const char *Store_32_To_ES_EDI_From_EAX()const;
	const char *Repeat_Prefix_ECX()const;
	const char *Repeat_Prefix_EQUAL_ZF_ECX()const;
	const char *Repeat_Prefix_NOT_EQUAL_ZF_ECX()const;
	const char *Repeat_Prefix_CF_ECX()const;
	const char *Repeat_Prefix_NOT_CF_ECX()const;
};

#endif