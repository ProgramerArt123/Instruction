#ifndef __X86_REGISTER_GENERAL_DATA_LOW_H__
#define __X86_REGISTER_GENERAL_DATA_LOW_H__
#include "General8.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class DataLow : public General8 {
			public:
				static DataLow &GetInstance();
			private:
				explicit DataLow();
			};
		}
	}
}

#define DL x86::reg::general::DataLow::GetInstance()

#endif