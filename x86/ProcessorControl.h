#ifndef __PROCESSOR_CONTROL_H__
#define __PROCESSOR_CONTROL_H__

class ProcessorControl {
public:
	const char *Clear_Carry_Flag()const;
	const char *Complement_Carry_Flag()const;
	const char *Set_Carry_Flag()const;
	const char *Clear_Direction_Flag()const;
	const char *Set_Direction_Flag()const;
	const char *Clear_Interrupt_Flag()const;
	const char *Set_Interrupt_Flag()const;
	const char *No_Operation()const;
	const char *Halt()const;
	const char *Check_Float_Exception()const;
	const char *Escape()const;
	const char *Atomic_Prefix()const;
};

#endif