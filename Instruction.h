#ifndef __INSTRUCTION_H__
#define __INSTRUCTION_H__
#include "x86/Operand.h"
#include "x86/register/Register.h"
#include "x86/immediate/Immediate.h"
#include "x86/memory/Memory.h"
#include "x86/register/general/General.h"
#include "x86/register/segment/Segment.h"
#include "x86/register/offset/Offset.h"
#include "x86/register/general/General8.h"
#include "x86/register/general/General16.h"
#include "x86/register/general/General32.h"
#include "x86/register/general/64/General64.h"
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
#include "x86/register/segment/Code.h"
#include "x86/register/segment/Data.h"
#include "x86/register/segment/Stack.h"
#include "x86/register/segment/Extra.h"
#include "x86/register/offset/Stack.h"
#include "x86/register/general/AccumulatorLow.h"
#include "x86/register/general/AccumulatorHigh.h"
#include "x86/register/general/Accumulator.h"
#include "x86/register/general/AccumulatorExtend.h"
#include "x86/register/general/BaseLow.h"
#include "x86/register/general/BaseHigh.h"
#include "x86/register/general/Base.h"
#include "x86/register/general/BaseExtend.h"
#include "x86/register/general/CountLow.h"
#include "x86/register/general/CountHigh.h"
#include "x86/register/general/Count.h"
#include "x86/register/general/CountExtend.h"
#include "x86/register/general/Data.h"
#include "x86/register/general/DataLow.h"
#include "x86/register/general/64/AccumulatorExtend64.h"
#include "x86/register/general/64/BaseExtend64.h"
#include "x86/register/general/64/CountExtend64.h"
#include "x86/ConcreteInstruction.h"
#include "x86/64/ConcreteInstruction.h"
#endif