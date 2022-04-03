#ifndef __X86_REGISTER_GENERAL_64_EXTRA_H__
#define __X86_REGISTER_GENERAL_64_EXTRA_H__
#include "General64.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			namespace size64
			{
				class Extra : public General64 {
				public:
					static Extra &GetInstance();
				private:
					explicit Extra();
				};
			}
		}
	}
}
#define R8 x86::reg::general::size64::Extra::GetInstance()

#endif