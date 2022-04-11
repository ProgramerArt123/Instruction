#ifndef __X86_REGISTER_CLASSIC_GENERAL_16_H__
#define __X86_REGISTER_CLASSIC_GENERAL_16_H__
#include "x86/operand/RegMem16.h"
#include "General.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class General16 : public General, public operand::RegMem16 {
				protected:
					explicit General16();
				};
			}
		}
		
	}
}
#endif