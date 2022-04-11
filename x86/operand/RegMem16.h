#ifndef __X86_OPERAND_REG_MEM_16_H__
#define __X86_OPERAND_REG_MEM_16_H__
#include "Operand.h"
namespace x86
{
	namespace operand
	{
		class RegMem16 : virtual public Operand {
		protected:
			explicit RegMem16();
		};
	}
}

#endif