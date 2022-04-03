#ifndef __X86_REGISTER_GENERAL_64_EXTRA_EXTEND_64_H__
#define __X86_REGISTER_GENERAL_64_EXTRA_EXTEND_64_H__
#include "General64.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			namespace size64
			{
				class ExtraExtend : public General64 {
				public:
					static ExtraExtend &GetInstance();
				private:
					explicit ExtraExtend();
				};
			}
		}
	}
}
#define R8 x86::reg::general::size64::ExtraExtend::GetInstance()

#endif