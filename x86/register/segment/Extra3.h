#ifndef __X86_REGISTER_SEGMENT_EXTRA_3_H__
#define __X86_REGISTER_SEGMENT_EXTRA_3_H__
#include "Segment.h"
namespace x86
{
	namespace reg
	{
		namespace segment
		{
			class Extra3 : public Segment {
			public:
				static Extra3 &GetInstance();
			private:
				explicit Extra3();
			};
		}
	}
}

#define GS x86::reg::segment::Extra3::GetInstance()

#endif