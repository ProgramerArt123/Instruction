#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_DATA_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_DATA_H__
#include "Operation16.h"
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
					class DataLow;
					class DataHigh;
					class Data : public Operation16 {
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
}

#define DX x86::reg::classic::general::operation::Data::GetInstance()

#endif