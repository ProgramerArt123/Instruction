#ifndef __X86_PROCESSOR_CONTROL_H__
#define __X86_PROCESSOR_CONTROL_H__

namespace x86
{
	namespace processor_control 
	{
		const char *Clear_Carry_Flag();
		const char *Complement_Carry_Flag();
		const char *Set_Carry_Flag();
		const char *Clear_Direction_Flag();
		const char *Set_Direction_Flag();
		const char *Clear_Interrupt_Flag();
		const char *Set_Interrupt_Flag();
		const char *No_Operation();
		const char *Halt_Processor();
		const char *Check_Float_Exception();
		const char *Switch_Coprocessor();
		const char *Atomic_Prefix();
	}
}

#endif