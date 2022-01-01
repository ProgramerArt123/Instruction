#ifndef __X86_REGISTER_GENERAL_BASE_EXTEND_H__
#define __X86_REGISTER_GENERAL_BASE_EXTEND_H__
#include "General32.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class Base;
			class BaseExtend : public General32 {
			public:
				static BaseExtend &GetInstance();
			private:
				explicit BaseExtend();
				Base &m_low;
			};
		}
	}
}

#define EBX x86::reg::general::BaseExtend::GetInstance()

#endif