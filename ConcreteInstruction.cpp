#include "Define.h"
#if PLATFORM=='X'
#include "x86/ProcessorControl.h"
#include "x86/32/IntegerDataTransmitted.h"
#endif
#include "Instruction.h"
#include "ConcreteInstruction.h"
NoOperation::NoOperation():
#if PLATFORM=='X'
AbstractInstruction(x86::processor_control::No_Operation())
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const Immediate8 &source, const General8 &destination)
	:
#if PLATFORM=='X'
AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const Immediate16 &source, const General16 &destination)
	:
#if PLATFORM=='X'
AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const Immediate32 &source, const General32 &destination)
	:
#if PLATFORM=='X'
AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}

IntegerDataTransmitted::IntegerDataTransmitted(const General8 &source, const General8 &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const General16 &source, const General16 &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const General32 &source, const General32 &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}

IntegerDataTransmitted::IntegerDataTransmitted(const General16 &source, const segment::Segment &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
	
}
IntegerDataTransmitted::IntegerDataTransmitted(const segment::Segment &source, const General16 &destination)
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
	
IntegerDataTransmitted::IntegerDataTransmitted(const General16 &source, const offset::Offset &destination)
	:
#if PLATFORM=='X' 
	AbstractInstruction(x86::size32::integer_data_transmitted::Transmitted_8__16__32(), source, destination)
#endif
{
}
	
IntegerDataTransmitted::IntegerDataTransmitted(const offset::Offset &source, const General16 &destination)
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