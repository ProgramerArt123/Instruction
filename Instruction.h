#ifndef __INSTRUCTION_H__
#define __INSTRUCTION_H__
#include "Operand.h"
#include "Register.h"
#include "Immediate.h"
#include "Memory.h"
#include "General.h"
#include "Segment.h"
#include "General8.h"
#include "General16.h"
#include "General32.h"
#include "64/General64.h"
#include "Immediate8.h"
#include "Immediate16.h"
#include "Immediate32.h"
#include "64/Immediate64.h"
#include "ImmediateSigned8.h"
#include "ImmediateUnSigned8.h"
#include "ImmediateSigned16.h"
#include "ImmediateUnSigned16.h"
#include "ImmediateSigned32.h"
#include "ImmediateUnSigned32.h"
#include "64/ImmediateSigned64.h"
#include "64/ImmediateUnSigned64.h"
#include "Code.h"
#include "Data.h"
#include "Stack.h"
#include "AccumulatorLow.h"
#include "AccumulatorHigh.h"
#include "Accumulator.h"
#include "AccumulatorExtend.h"
#include "64/AccumulatorExtend64.h"
#include "ConcreteInstruction.h"
#include "64/ConcreteInstruction64.h"
#endif