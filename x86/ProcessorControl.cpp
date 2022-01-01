#include "ProcessorControl.h"

const char *ProcessorControl::Clear_Carry_Flag()const {
	return "CLC";
}

const char *ProcessorControl::Complement_Carry_Flag()const {
	return "CMC";
}

const char *ProcessorControl::Set_Carry_Flag()const {
	return "STC";
}

const char *ProcessorControl::Clear_Direction_Flag()const {
	return "CLD";
}
const char *ProcessorControl::Set_Direction_Flag()const {
	return "STD";
}
const char *ProcessorControl::Clear_Interrupt_Flag()const {
	return "CLI";
}
const char *ProcessorControl::Set_Interrupt_Flag()const {
	return "STI";
}
const char *ProcessorControl::No_Operation()const {
	return "NOP";
}
const char *ProcessorControl::Halt()const {
	return "HLT";
}
const char *ProcessorControl::Check_Float_Exception()const {
	return "FWAIT";
}
const char *ProcessorControl::Escape()const {
	return "ESC";
}
const char *ProcessorControl::Atomic_Prefix()const {
	return "LOCK";
}