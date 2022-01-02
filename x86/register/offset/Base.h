#ifndef __X86_REGISTER_OFFSET_BASE_H__
#define __X86_REGISTER_OFFSET_BASE_H__
#include "Offset.h"
namespace x86
{
	namespace reg
	{
		namespace offset
		{
			class Base : public Offset {
			public:
				static Base &GetInstance();
			private:
				explicit Base();
			};
		}
	}
}

#define BP x86::reg::offset::Base::GetInstance()

#endif