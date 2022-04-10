#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_OPERATION_64_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_OPERATION_64_H__
#include "x86/register/classic/general/General.h"
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
					namespace size64
					{
						class Operation64 : public General {
						protected:
							explicit Operation64();
						};
					}
				}
			}
		}
	}
}
#endif