#ifndef __X86_REGISTER_SEGMENT_CODE_H__
#define __X86_REGISTER_SEGMENT_CODE_H__
#include "Segment.h"
namespace x86
{
	namespace reg
	{
		namespace segment
		{
			class Code : public Segment {
			public:
				static Code &GetInstance();
			private:
				explicit Code();
			};
		}
	}
}

#define CS x86::reg::segment::Code::GetInstance()

#endif