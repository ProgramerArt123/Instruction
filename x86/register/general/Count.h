#ifndef __X86_REGISTER_GENERAL_COUNT_H__
#define __X86_REGISTER_GENERAL_COUNT_H__
#include "General16.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			class Count : public General16 {
			public:
				static Count &GetInstance();
			private:
				explicit Count();
			};
		}
	}
}

#define CX x86::reg::general::Count::GetInstance()

#endif