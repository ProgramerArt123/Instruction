#include "IntegerDataTransmitted.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace size32
		{
			namespace integer_data_transmitted 
			{
				/*
				 *MOV  �Ĵ���,     �Ĵ���/�ڴ浥Ԫ/�μĴ���/������
				 *MOV  �ڴ浥Ԫ,   �Ĵ���/�μĴ���/������
				 *MOV  �μĴ���,   �Ĵ���/�ڴ浥Ԫ
				 **/
				const char *Transmitted_8__16__32() {
					return "MOV";
				}

				/*
				 *MOVSX reg32, reg/mem8
				 *MOVSX reg32, reg/mem16
				 *MOVSX reg16, reg/mem8
				 **/
				const char *Transmitted_8__16_Fill_Sign() {
					return "MOVSX";
				}

				/*
				 *MOVZX reg32,reg/mem8
				 *MOVZX reg32,reg/mem16
				 *MOVZX reg16,reg/mem8*/
				const char *Transmitted_8__16_Fill_Zero() {
					return "MOVZX";
				}

				/*
				 *PUSH reg/mem16
				 *PUSH reg/mem32
				 *PUSH inm32*/
				const char *Push_Stack_8__16__32() {
					return "PUSH";
				}

				/*
				 *POP reg/mem16
				 *POP reg/mem32*/
				const char *Pop_Stack_8__16__32() {
					return "POP";
				}
				//��AX,CX,DX,BX,SP,BP,SI,DI����ѹ���ջ
				const char *Push_Stack_All_16_Registers() {
					return "PUSHA";
				}
				//��DI,SI,BP,SP,BX,DX,CX,AX���ε�����ջ
				const char *Pop_Stack_All_16_Registers() {
					return "POPA";
				}
				//��EAX,ECX,EDX,EBX,ESP,EBP,ESI,EDI����ѹ���ջ
				const char *Push_Stack_All_32_Registers() {
					return "PUSHAD";
				}
				//��EDI,ESI,EBP,ESP,EBX,EDX,ECX,EAX���ε�����ջ
				const char *Pop_Stack_All_32_Registers() {
					return "POPHAD";
				}

				const char *Reverse_32_Register_8() {
					return "BSWAP";
				}
				/*
				 *XCHG reg, reg
				 *XCHG reg, mem
				 *XCHG mem, reg*/
				const char *Swap_8__16__32() {
					return "XCHG";
				}
				const char *Transmitted_8__16__32_If_Not_Equal_A_ZF() {
					return "CMPXCHG";
				}
				const char *Swap_8__16__32_Add() {
					return "XADD";
				}
				//��������DS:[BX+AL]Ϊ��ַ����ȡ�洢���е�һ���ֽ�������AL
				const char *Transmitted_8_To_AL_From_DS() {
					return "XLAT";
				}
				//�Ӷ˿�����һ���ֽڻ��ֵ�AL��AX�С�Դ�������Ƕ˿ڵ�ַ��������8λ�ĳ�������DX�е�һ��16λ��ַ��
				const char *Read_8__16__32_From_IO_PORT() {
					return "IN";
				}
				//���ۼ����е�һ���ֽڻ���������˿ڡ��˿ڵ�ַ����ڷ�Χ0-FFh֮�䣬������һ��������Ҳ������DX�д��0-FFFFh֮��Ķ˿ڵ�ַ��
				const char *Write_8__16__32_To_IO_PORT() {
					return "OUT";
				}
				//װ����Ч��ַ.��: LEA DX,string ;��ƫ�Ƶ�ַ�浽DX.
				const char *Load_Effective_Address_16__32() {
					return "LEA";
				}
				//����Ŀ��ָ��,��ָ������װ��DS.��: LDS SI,string ;�Ѷε�ַ:ƫ�Ƶ�ַ�浽DS:SI. 
				const char *Load_Effective_Address_32_DS() {
					return "LDS";
				}
				//����Ŀ��ָ��,��ָ������װ��ES.��: LES DI,string ;�Ѷε�ַ:ƫ�Ƶ�ַ�浽ES:DI. 
				const char *Load_Effective_Address_32_ES() {
					return "LES";
				}
				//����Ŀ��ָ��,��ָ������װ��FS.��: LFS DI,string ;�Ѷε�ַ:ƫ�Ƶ�ַ�浽FS:DI.
				const char *Load_Effective_Address_32_FS() {
					return "LFS";
				}
				//����Ŀ��ָ��,��ָ������װ��GS.��: LGS DI,string ;�Ѷε�ַ:ƫ�Ƶ�ַ�浽GS:DI. 
				const char *Load_Effective_Address_32_GS() {
					return "LGS";
				}
				//����Ŀ��ָ��,��ָ������װ��SS.��: LSS DI,string ;�Ѷε�ַ:ƫ�Ƶ�ַ�浽SS:DI. 
				const char *Load_Effective_Address_32_SS() {
					return "LSS";
				}
				const char *Load_Flags_To_AH() {
					return "LAHF";
				}
				const char *Save_Flags_From_AH() {
					return "SAHF";
				}
				const char *Push_Stack_16_Flags() {
					return "PUSHF";
				}
				const char *Pop_Stack_16_Flags() {
					return "POPF";
				}
				const char *Push_Stack_32_Flags() {
					return "PUSHD";
				}
				const char *Pop_Stack_32_Flags() {
					return "POPD";
				}
			}
		}
	}
}