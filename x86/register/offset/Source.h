#ifndef __X86_REGISTER_OFFSET_SOURCE_H__
#define __X86_REGISTER_OFFSET_SOURCE_H__
#include "Offset16.h"
namespace x86
{
	namespace reg
	{
		namespace offset
		{
			class Source : public Offset16 {
			public:
				static Source &GetInstance();
			private:
				explicit Source();
			};
		}
	}
}

#define SI x86::reg::offset::Source::GetInstance()

#endif