#ifndef __X86_REGISTER_CLASSIC_GENERAL_64_BASE_EXTEND_64_H__
#define __X86_REGISTER_CLASSIC_GENERAL_64_BASE_EXTEND_64_H__
#include "General64.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class BaseExtend;
		
				namespace size64
				{
					class BaseExtend : public General64 {
					public:
						static BaseExtend &GetInstance();
					private:
						explicit BaseExtend();
						general::BaseExtend &m_low;
					};
				}
			}
		}
	}
}
#define RBX x86::reg::classic::general::size64::BaseExtend::GetInstance()

#endif