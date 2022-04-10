#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_BASE_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_BASE_H__
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
					class BaseLow;
					class BaseHigh;
					class Base : public Operation16 {
					public:
						static Base &GetInstance();
					private:
						explicit Base();
						BaseLow &m_low;
						BaseHigh &m_high;
					};
				}
			}
		}
	}
}

#define BX x86::reg::classic::general::operation::Base::GetInstance()

#endif