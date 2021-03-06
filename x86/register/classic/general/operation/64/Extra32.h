#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_EXTRA_32_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_EXTRA_32_H__
#include "x86/register/classic/general/operation/Operation32.h"
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
						class Extra32 : public Operation32 {
						public:
							static Extra32 &GetInstance();
						private:
							explicit Extra32();
						};
					}
				}
			}
		}
	}
}
#define R8D x86::reg::classic::general::operation::size64::Extra32::GetInstance()

#endif