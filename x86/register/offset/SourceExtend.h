#ifndef __X86_REGISTER_OFFSET_SOURCE_EXTEND_H__
#define __X86_REGISTER_OFFSET_SOURCE_EXTEND_H__
#include "Offset32.h"
namespace x86
{
	namespace reg
	{
		namespace offset
		{
			class SourceExtend : public Offset32 {
			public:
				static SourceExtend &GetInstance();
			private:
				explicit SourceExtend();
			};
		}
	}
}

#define ESI x86::reg::offset::SourceExtend::GetInstance()

#endif