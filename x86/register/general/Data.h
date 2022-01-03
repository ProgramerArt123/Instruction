#ifndef __X86_REGISTER_GENERAL_DATA_H__
#define __X86_REGISTER_GENERAL_DATA_H__
#include "General16.h"
namespace x86
{
	namespace reg
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

#define DX x86::reg::general::Data::GetInstance()

#endif