#ifndef __X86_REGISTER_CLASSIC_GENERAL_COUNT_EXTEND_H__
#define __X86_REGISTER_CLASSIC_GENERAL_COUNT_EXTEND_H__
#include "General32.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class Count;
				class CountExtend : public General32 {
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

#define ECX x86::reg::classic::general::CountExtend::GetInstance()

#endif