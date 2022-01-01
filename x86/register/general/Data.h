#ifndef __X86_REGISTER_GENERAL_DATA_H__
#define __X86_REGISTER_GENERAL_DATA_H__
#include "General16.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class Data : public General16 {
			public:
				static Data &GetInstance();
			private:
				explicit Data();
			};
		}
	}
}

#define DX x86::reg::general::Data::GetInstance()

#endif