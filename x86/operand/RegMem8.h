#ifndef __X86_OPERAND_REG_MEM_8_H__
#define __X86_OPERAND_REG_MEM_8_H__
#include "Operand.h"
namespace x86
{
	namespace operand
	{
		class RegMem8 : virtual public Operand{
		protected:
			explicit RegMem8();
		};
	}
}

#endif