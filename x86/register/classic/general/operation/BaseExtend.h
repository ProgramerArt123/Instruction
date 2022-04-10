#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_BASE_EXTEND_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_BASE_EXTEND_H__
#include "Operation32.h"
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
					class Base;
					class BaseExtend : public Operation32 {
					public:
						static BaseExtend &GetInstance();
					private:
						explicit BaseExtend();
						Base &m_low;
					};
				}
			}
		}
	}
}

#define EBX x86::reg::classic::general::operation::BaseExtend::GetInstance()

#endif