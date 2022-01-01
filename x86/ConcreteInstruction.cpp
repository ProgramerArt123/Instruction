#include "Define.h"
#if PLATFORM=='X'
#include "x86/ProcessorControl.h"
#include "x86/mnemonic/32/IntegerDataTransmitted.h"
#endif
#include "Instruction.h"
#include "ConcreteInstruction.h"
NoOperation::NoOperation():
#if PLATFORM=='X'
AbstractInstruction(x86::processor_control::No_Operation())
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const immediate::Immediate8 &source, const general::General8 &destination)
	:
#if PLATFORM=='X'
AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const immediate::Immediate16 &source, const general::General16 &destination)
	:
#if PLATFORM=='X'
AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const immediate::Immediate32 &source, const general::General32 &destination)
	:
#if PLATFORM=='X'
AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}

IntegerDataTransmitted::IntegerDataTransmitted(const general::General8 &source, const general::General8 &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const general::General16 &source, const general::General16 &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const general::General32 &source, const general::General32 &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}

IntegerDataTransmitted::IntegerDataTransmitted(const general::General16 &source, const segment::Segment &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const segment::Segment &source, const general::General16 &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const offset::Offset &source, const offset::Offset &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
	
IntegerDataTransmitted::IntegerDataTransmitted(const general::General16 &source, const offset::Offset &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
}
	
IntegerDataTransmitted::IntegerDataTransmitted(const offset::Offset &source, const general::General16 &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
}
	
IntegerDataTransmitted::IntegerDataTransmitted(const segment::Segment &source, const offset::Offset &destination)
	:
#if PLATFORM=='X'
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
}
IntegerDataTransmitted::IntegerDataTransmitted(const offset::Offset &source, const segment::Segment &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
}