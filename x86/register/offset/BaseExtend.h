#ifndef __X86_REGISTER_OFFSET_BASE_EXTEND_H__
#define __X86_REGISTER_OFFSET_BASE_EXTEND_H__
#include "Address32.h"
namespace x86
{
	namespace reg
	{
		namespace offset
		{
			class BaseExtend : public Address32 {
			public:
				static BaseExtend &GetInstance();
			private:
				explicit BaseExtend();
			};
		}
	}
}

#define EBP x86::reg::offset::BaseExtend::GetInstance()

#endif