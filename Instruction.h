#ifndef __INSTRUCTION_H__
#define __INSTRUCTION_H__
#include "x86/operand/Operand.h"
#include "x86/register/Register.h"
#include "x86/immediate/Immediate.h"
#include "x86/memory/Memory.h"
#include "x86/register/classic/general/General.h"
#include "x86/register/classic/segment/Segment.h"
#include "x86/register/classic/offset/Offset8.h"
#include "x86/register/classic/offset/Offset16.h"
#include "x86/register/classic/offset/Offset32.h"
#include "x86/register/classic/general/General8.h"
#include "x86/register/classic/general/General16.h"
#include "x86/register/classic/general/General32.h"
#include "x86/register/classic/general/64/General64.h"
#include "x86/immediate/Immediate8.h"
#include "x86/immediate/Immediate16.h"
#include "x86/immediate/Immediate32.h"
#include "x86/immediate/64/Immediate64.h"
#include "x86/immediate/ImmediateSigned8.h"
#include "x86/immediate/ImmediateUnSigned8.h"
#include "x86/immediate/ImmediateSigned16.h"
#include "x86/immediate/ImmediateUnSigned16.h"
#include "x86/immediate/ImmediateSigned32.h"
#include "x86/immediate/ImmediateUnSigned32.h"
#include "x86/immediate/64/ImmediateSigned64.h"
#include "x86/immediate/64/ImmediateUnSigned64.h"
#include "x86/register/classic/segment/Code.h"
#include "x86/register/classic/segment/Data.h"
#include "x86/register/classic/segment/Stack.h"
#include "x86/register/classic/segment/Extra.h"
#include "x86/register/classic/segment/Extra2.h"
#include "x86/register/classic/segment/Extra3.h"
#include "x86/register/classic/offset/StackLow.h"
#include "x86/register/classic/offset/Stack.h"
#include "x86/register/classic/offset/StackExtend.h"
#include "x86/register/classic/offset/BaseLow.h"
#include "x86/register/classic/offset/Base.h"
#include "x86/register/classic/offset/BaseExtend.h"
#include "x86/register/classic/offset/SourceLow.h"
#include "x86/register/classic/offset/Source.h"
#include "x86/register/classic/offset/SourceExtend.h"
#include "x86/register/classic/offset/DestinationLow.h"
#include "x86/register/classic/offset/Destination.h"
#include "x86/register/classic/offset/DestinationExtend.h"
#include "x86/register/classic/general/AccumulatorLow.h"
#include "x86/register/classic/general/AccumulatorHigh.h"
#include "x86/register/classic/general/Accumulator.h"
#include "x86/register/classic/general/AccumulatorExtend.h"
#include "x86/register/classic/general/BaseLow.h"
#include "x86/register/classic/general/BaseHigh.h"
#include "x86/register/classic/general/Base.h"
#include "x86/register/classic/general/BaseExtend.h"
#include "x86/register/classic/general/CountLow.h"
#include "x86/register/classic/general/CountHigh.h"
#include "x86/register/classic/general/Count.h"
#include "x86/register/classic/general/CountExtend.h"
#include "x86/register/classic/general/Data.h"
#include "x86/register/classic/general/DataLow.h"
#include "x86/register/classic/general/DataHigh.h"
#include "x86/register/classic/general/DataExtend.h"
#include "x86/register/classic/general/64/AccumulatorExtend64.h"
#include "x86/register/classic/general/64/BaseExtend64.h"
#include "x86/register/classic/general/64/CountExtend64.h"
#include "x86/register/classic/general/64/DataExtend64.h"
#include "x86/register/classic/general/64/Extra.h"
#include "x86/register/classic/general/64/Extra32.h"
#include "x86/instruction/ConcreteInstruction.h"
#include "x86/instruction/64/ConcreteInstruction.h"
#endif