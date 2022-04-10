#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_EXTRA_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_EXTRA_H__
#include "Operation64.h"
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
						class Extra32;
						class Extra : public Operation64 {
						public:
							static Extra &GetInstance();
						private:
							explicit Extra();
							Extra32 &m_low;
						};
					}
				}
			}
		}
	}
}
#define R8 x86::reg::classic::general::operation::size64::Extra::GetInstance()

#endif