#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_DATA_EXTEND_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_DATA_EXTEND_H__
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
					class Data;
					class DataExtend : public Operation32 {
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
}

#define EDX x86::reg::classic::general::operation::DataExtend::GetInstance()

#endif