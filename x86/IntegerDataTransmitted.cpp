#include "IntegerDataTransmitted.h"

/*
 *MOV  �Ĵ���,     �Ĵ���/�ڴ浥Ԫ/�μĴ���/������
 *MOV  �ڴ浥Ԫ,   �Ĵ���/�μĴ���/������
 *MOV  �μĴ���,   �Ĵ���/�ڴ浥Ԫ
 **/
const char *IntegerDataTransmitted::Transmitted_8__16() const {
	return "MOV";
}

/*
 *MOVSX reg32, reg/mem8
 *MOVSX reg32, reg/mem16
 *MOVSX reg16, reg/mem8
 **/
const char *IntegerDataTransmitted::Transmitted_8__16_Fill_Sign()const {
	return "MOVSX";
}

/*
 *MOVZX reg32,reg/mem8
 *MOVZX reg32,reg/mem16
 *MOVZX reg16,reg/mem8*/
const char *IntegerDataTransmitted::Transmitted_8__16_Fill_0()const {
	return "MOVZX";
}

/*
 *PUSH reg/mem16
 *PUSH reg/mem32
 *PUSH inm32*/
const char *IntegerDataTransmitted::Push_Stack_8__16()const {
	return "PUSH";
}

/*
 *POP reg/mem16
 *POP reg/mem32*/
const char *IntegerDataTransmitted::Pop_Stack_8__16()const {
	return "POP";
}
//��AX,CX,DX,BX,SP,BP,SI,DI����ѹ���ջ
const char *IntegerDataTransmitted::Push_Stack_All_16_Registers()const {
	return "PUSHA";
}
//��DI,SI,BP,SP,BX,DX,CX,AX���ε�����ջ
const char *IntegerDataTransmitted::Pop_Stack_All_16_Registers()const {
	return "POPA";
}
//��EAX,ECX,EDX,EBX,ESP,EBP,ESI,EDI����ѹ���ջ
const char *IntegerDataTransmitted::Push_Stack_All_32_Registers()const {
	return "PUSHAD";
}
//��EDI,ESI,EBP,ESP,EBX,EDX,ECX,EAX���ε�����ջ
const char *IntegerDataTransmitted::Pop_Stack_All_32_Registers()const {
	return "POPHAD";
}

const char *IntegerDataTransmitted::Reverse_32_Register_8()const {
	return "BSWAP";
}
/*
 *XCHG reg, reg
 *XCHG reg, mem
 *XCHG mem, reg*/
const char *IntegerDataTransmitted::Swap_8__16__32()const {
	return "XCHG";
}
const char *IntegerDataTransmitted::Transmitted_8__16__32_If_Not_Equal_A_ZF()const {
	return "CMPXCHG";
}
const char *IntegerDataTransmitted::Swap_8__16__32_Add()const {
	return "XADD";
}
//��������DS:[BX+AL]Ϊ��ַ����ȡ�洢���е�һ���ֽ�������AL
const char *IntegerDataTransmitted::Transmitted_8_To_AL_From_DS()const {
	return "XLAT";
}
//�Ӷ˿�����һ���ֽڻ��ֵ�AL��AX�С�Դ�������Ƕ˿ڵ�ַ��������8λ�ĳ�������DX�е�һ��16λ��ַ��
const char *IntegerDataTransmitted::Read_8__16_From_IO_PORT()const {
	return "IN";
}
//���ۼ����е�һ���ֽڻ���������˿ڡ��˿ڵ�ַ����ڷ�Χ0-FFh֮�䣬������һ��������Ҳ������DX�д��0-FFFFh֮��Ķ˿ڵ�ַ��
const char *IntegerDataTransmitted::Write_8__16_To_IO_PORT()const {
	return "OUT";
}
//װ����Ч��ַ.��: LEA DX,string ;��ƫ�Ƶ�ַ�浽DX.
const char *IntegerDataTransmitted::Load_Effective_Address_16__32()const {
	return "LEA";
}
//����Ŀ��ָ��,��ָ������װ��DS.��: LDS SI,string ;�Ѷε�ַ:ƫ�Ƶ�ַ�浽DS:SI. 
const char *IntegerDataTransmitted::Load_Effective_Address_32_DS()const {
	return "LDS";
}
//����Ŀ��ָ��,��ָ������װ��ES.��: LES DI,string ;�Ѷε�ַ:ƫ�Ƶ�ַ�浽ES:DI. 
const char *IntegerDataTransmitted::Load_Effective_Address_32_ES()const {
	return "LES";
}
//����Ŀ��ָ��,��ָ������װ��FS.��: LFS DI,string ;�Ѷε�ַ:ƫ�Ƶ�ַ�浽FS:DI.
const char *IntegerDataTransmitted::Load_Effective_Address_32_FS()const {
	return "LFS";
}
//����Ŀ��ָ��,��ָ������װ��GS.��: LGS DI,string ;�Ѷε�ַ:ƫ�Ƶ�ַ�浽GS:DI. 
const char *IntegerDataTransmitted::Load_Effective_Address_32_GS()const {
	return "LGS";
}
//����Ŀ��ָ��,��ָ������װ��SS.��: LSS DI,string ;�Ѷε�ַ:ƫ�Ƶ�ַ�浽SS:DI. 
const char *IntegerDataTransmitted::Load_Effective_Address_32_SS()const {
	return "LSS";
}
const char *IntegerDataTransmitted::Load_Flags_To_AH()const {
	return "LAHF";
}
const char *IntegerDataTransmitted::Save_Flags_From_AH()const {
	return "SAHF";
}
const char *IntegerDataTransmitted::Push_Stack_16_Flags()const {
	return "PUSHF";
}
const char *IntegerDataTransmitted::Pop_Stack_16_Flags()const {
	return "POPF";
}
const char *IntegerDataTransmitted::Push_Stack_32_Flags()const {
	return "PUSHD";
}
const char *IntegerDataTransmitted::Pop_Stack_32_Flags()const {
	return "POPD";
}