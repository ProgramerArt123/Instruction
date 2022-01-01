#ifndef __X86_REGISTER_GENERAL_64_COUNT_EXTEND_64_H__
#define __X86_REGISTER_GENERAL_64_COUNT_EXTEND_64_H__
#include "General64.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class CountExtend;
		
			namespace size64
			{
				class CountExtend : public General64 {
				public:
					static CountExtend &GetInstance();
				private:
					explicit CountExtend();
					general::CountExtend &m_low;
				};
			}
		}
	}
}
#define RCX x86::reg::general::size64::CountExtend::GetInstance()

#endif