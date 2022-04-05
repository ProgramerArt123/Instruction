#ifndef __X86_REGISTER_CLASSIC_GENERAL_DATA_HIGH_H__
#define __X86_REGISTER_CLASSIC_GENERAL_DATA_HIGH_H__
#include "General8.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				class DataHigh : public General8 {
				public:
					static DataHigh &GetInstance();
				private:
					explicit DataHigh();
				};
			}
		}
	}
}

#define DH x86::reg::classic::general::DataHigh::GetInstance()

#endif