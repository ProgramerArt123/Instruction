#include "IntegerDataTransmitted.h"

/*
 *MOV  寄存器,     寄存器/内存单元/段寄存器/立即数
 *MOV  内存单元,   寄存器/段寄存器/立即数
 *MOV  段寄存器,   寄存器/内存单元
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
//把AX,CX,DX,BX,SP,BP,SI,DI依次压入堆栈
const char *IntegerDataTransmitted::Push_Stack_All_16_Registers()const {
	return "PUSHA";
}
//把DI,SI,BP,SP,BX,DX,CX,AX依次弹出堆栈
const char *IntegerDataTransmitted::Pop_Stack_All_16_Registers()const {
	return "POPA";
}
//把EAX,ECX,EDX,EBX,ESP,EBP,ESI,EDI依次压入堆栈
const char *IntegerDataTransmitted::Push_Stack_All_32_Registers()const {
	return "PUSHAD";
}
//把EDI,ESI,EBP,ESP,EBX,EDX,ECX,EAX依次弹出堆栈
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
//操作是以DS:[BX+AL]为地址，提取存储器中的一个字节再送入AL
const char *IntegerDataTransmitted::Transmitted_8_To_AL_From_DS()const {
	return "XLAT";
}
//从端口输入一个字节或字到AL或AX中。源操作数是端口地址，可以是8位的常量或者DX中的一个16位地址。
const char *IntegerDataTransmitted::Read_8__16_From_IO_PORT()const {
	return "IN";
}
//将累加器中的一个字节或字输出到端口。端口地址如果在范围0-FFh之间，可以是一个常量，也可以在DX中存放0-FFFFh之间的端口地址。
const char *IntegerDataTransmitted::Write_8__16_To_IO_PORT()const {
	return "OUT";
}
//装入有效地址.例: LEA DX,string ;把偏移地址存到DX.
const char *IntegerDataTransmitted::Load_Effective_Address_16__32()const {
	return "LEA";
}
//传送目标指针,把指针内容装入DS.例: LDS SI,string ;把段地址:偏移地址存到DS:SI. 
const char *IntegerDataTransmitted::Load_Effective_Address_32_DS()const {
	return "LDS";
}
//传送目标指针,把指针内容装入ES.例: LES DI,string ;把段地址:偏移地址存到ES:DI. 
const char *IntegerDataTransmitted::Load_Effective_Address_32_ES()const {
	return "LES";
}
//传送目标指针,把指针内容装入FS.例: LFS DI,string ;把段地址:偏移地址存到FS:DI.
const char *IntegerDataTransmitted::Load_Effective_Address_32_FS()const {
	return "LFS";
}
//传送目标指针,把指针内容装入GS.例: LGS DI,string ;把段地址:偏移地址存到GS:DI. 
const char *IntegerDataTransmitted::Load_Effective_Address_32_GS()const {
	return "LGS";
}
//传送目标指针,把指针内容装入SS.例: LSS DI,string ;把段地址:偏移地址存到SS:DI. 
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