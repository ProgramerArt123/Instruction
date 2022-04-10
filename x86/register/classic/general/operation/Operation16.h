#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_16_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_16_H__
#include "x86/register/classic/general/General16.h"
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
					class Operation16 : public General16 {
					protected:
						explicit Operation16();
					};
				}
			}
		}
	}
}
#endif