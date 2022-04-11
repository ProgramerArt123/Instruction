#ifndef __X86_OPERAND_REG_MEM_32_H__
#define __X86_OPERAND_REG_MEM_32_H__
#include "Operand.h"
namespace x86
{
	namespace operand
	{
		class RegMem32 : virtual public Operand {
		protected:
			explicit RegMem32();
		};
	}
}

#endif