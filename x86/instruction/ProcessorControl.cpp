#include "ProcessorControl.h"
namespace x86
{
	namespace processor_control 
	{
		const char *Clear_Carry_Flag() {
			return "CLC";
		}
		const char *Complement_Carry_Flag() {
			return "CMC";
		}
		const char *Set_Carry_Flag() {
			return "STC";
		}
		const char *Clear_Direction_Flag() {
			return "CLD";
		}
		const char *Set_Direction_Flag() {
			return "STD";
		}
		const char *Clear_Interrupt_Flag() {
			return "CLI";
		}
		const char *Set_Interrupt_Flag() {
			return "STI";
		}
		const char *No_Operation() {
			return "NOP";
		}
		const char *Halt_Processor() {
			return "HLT";
		}
		const char *Check_Float_Exception() {
			return "FWAIT";
		}
		const char *Switch_Coprocessor() {
			return "ESC";
		}
		const char *Atomic_Prefix() {
			return "LOCK";
		}
	}
}