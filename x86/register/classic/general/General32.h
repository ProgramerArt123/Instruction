#ifndef __X86_REGISTER_CLASSIC_GENERAL_32_H__
#define __X86_REGISTER_CLASSIC_GENERAL_32_H__
#include "x86/operand/RegMem32.h"
#include "General.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class General32 : public General, public operand::RegMem32 {
				protected:
					explicit General32();
				};
			}
		}
	}
}
#endif