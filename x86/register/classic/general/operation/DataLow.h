#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_DATA_LOW_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_DATA_LOW_H__
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
					class DataLow : public Operation8 {
					public:
						static DataLow &GetInstance();
					private:
						explicit DataLow();
					};
				}
			}
		}
	}
}

#define DL x86::reg::classic::general::operation::DataLow::GetInstance()

#endif