#ifndef __X86_REGISTER_GENERAL_64_DATA_EXTEND_64_H__
#define __X86_REGISTER_GENERAL_64_DATA_EXTEND_64_H__
#include "General64.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class DataExtend;
		
			namespace size64
			{
				class DataExtend : public General64 {
				public:
					static DataExtend &GetInstance();
				private:
					explicit DataExtend();
					general::DataExtend &m_low;
				};
			}
		}
	}
}
#define RDX x86::reg::general::size64::DataExtend::GetInstance()

#endif