#include "Define.h"
#if PLATFORM=='X'
#include "x86/ProcessorControl.h"
#endif
#include "ConcreteInstruction.h"
NoOperation::NoOperation():
#if PLATFORM=='X'
AbstractInstruction(x86::processor_control::No_Operation())
#endif
{
	
}