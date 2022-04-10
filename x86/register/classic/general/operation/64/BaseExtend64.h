#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_BASE_EXTEND_64_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_BASE_EXTEND_64_H__
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
					class BaseExtend;
		
					namespace size64
					{
						class BaseExtend : public Operation64 {
						public:
							static BaseExtend &GetInstance();
						private:
							explicit BaseExtend();
							operation::BaseExtend &m_low;
						};
					}
				}
			}
		}
	}
}
#define RBX x86::reg::classic::general::operation::size64::BaseExtend::GetInstance()

#endif