#ifndef __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_DATA_EXTEND_64_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OPERATION_64_DATA_EXTEND_64_H__
#include "Operation64.h"
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
					class DataExtend;
		
					namespace size64
					{
						class DataExtend : public Operation64 {
						public:
							static DataExtend &GetInstance();
						private:
							explicit DataExtend();
							operation::DataExtend &m_low;
						};
					}
				}
			}
		}
	}
}
#define RDX x86::reg::classic::general::operation::size64::DataExtend::GetInstance()

#endif