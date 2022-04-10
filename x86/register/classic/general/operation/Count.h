#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_COUNT_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_COUNT_H__
#include "Operation16.h"
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
					class CountLow;
					class CountHigh;
					class Count : public Operation16 {
					public:
						static Count &GetInstance();
					private:
						explicit Count();
						CountLow &m_low;
						CountHigh &m_high;
					};
				}
			}
		}
	}
}

#define CX x86::reg::classic::general::operation::Count::GetInstance()

#endif