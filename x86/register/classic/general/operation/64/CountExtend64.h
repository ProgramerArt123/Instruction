#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_COUNT_EXTEND_64_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_COUNT_EXTEND_64_H__
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
					class CountExtend;
		
					namespace size64
					{
						class CountExtend : public Operation64 {
						public:
							static CountExtend &GetInstance();
						private:
							explicit CountExtend();
							operation::CountExtend &m_low;
						};
					}
				}
			}
		}
	}
}
#define RCX x86::reg::classic::general::operation::size64::CountExtend::GetInstance()

#endif