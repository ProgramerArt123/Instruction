#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_32_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_32_H__
#include "x86/register/classic/general/General32.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace operation
				{
					class Operation32 : public General32 {
					protected:
						explicit Operation32();
					};
				}
			}
		}
	}
}
#endif