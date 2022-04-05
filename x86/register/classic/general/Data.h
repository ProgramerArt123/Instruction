#ifndef __X86_REGISTER_CLASSIC_GENERAL_DATA_H__
#define __X86_REGISTER_CLASSIC_GENERAL_DATA_H__
#include "General16.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class DataLow;
				class DataHigh;
				class Data : public General16 {
				public:
					static Data &GetInstance();
				private:
					explicit Data();
					DataLow &m_low;
					DataHigh &m_high;
				};
			}
		}
	}
}

#define DX x86::reg::classic::general::Data::GetInstance()

#endif