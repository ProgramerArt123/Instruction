#ifndef __X86_REGISTER_CLASSIC_OFFSET_BASE_H__
#define __X86_REGISTER_CLASSIC_OFFSET_BASE_H__
#include "Offset16.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace offset
			{
				class Base : public Offset16 {
				public:
					static Base &GetInstance();
				private:
					explicit Base();
				};
			}
		}
	}
}

#define BP x86::reg::classic::offset::Base::GetInstance()

#endif