#ifndef __X86_REGISTER_CLASSIC_GENERAL_DATA_EXTEND_H__
#define __X86_REGISTER_CLASSIC_GENERAL_DATA_EXTEND_H__
#include "General32.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class Data;
				class DataExtend : public General32 {
				public:
					static DataExtend &GetInstance();
				private:
					explicit DataExtend();
					Data &m_low;
				};
			}
		}
	}
}

#define EDX x86::reg::classic::general::DataExtend::GetInstance()

#endif