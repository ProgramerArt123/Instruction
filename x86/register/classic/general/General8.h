#ifndef __X86_REGISTER_CLASSIC_GENERAL_8_H__
#define __X86_REGISTER_CLASSIC_GENERAL_8_H__
#include "x86/operand/RegMem8.h"
#include "General.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class General8 : public General, public operand::RegMem8 {
				protected:
					explicit General8();
				};
			}
			
		}
	}
}

#endif