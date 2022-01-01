#ifndef __X86_REGISTER_GENERAL_BASE_H__
#define __X86_REGISTER_GENERAL_BASE_H__
#include "General16.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class BaseLow;
			class BaseHigh;
			class Base : public General16 {
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

#define BX x86::reg::general::Base::GetInstance()

#endif