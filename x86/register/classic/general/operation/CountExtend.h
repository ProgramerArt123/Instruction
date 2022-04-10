#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_COUNT_EXTEND_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_COUNT_EXTEND_H__
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
					class Count;
					class CountExtend : public Operation32 {
					public:
						static CountExtend &GetInstance();
					private:
						explicit CountExtend();
						Count &m_low;
					};
				}
			}
		}
	}
}

#define ECX x86::reg::classic::general::operation::CountExtend::GetInstance()

#endif