#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_DATA_HIGH_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_DATA_HIGH_H__
#include "Operation8.h"
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
					class DataHigh : public Operation8 {
					public:
						static DataHigh &GetInstance();
					private:
						explicit DataHigh();
					};
				}
			}
		}
	}
}

#define DH x86::reg::classic::general::operation::DataHigh::GetInstance()

#endif