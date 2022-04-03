#ifndef __X86_REGISTER_SEGMENT_EXTRA_2_H__
#define __X86_REGISTER_SEGMENT_EXTRA_2_H__
#include "Segment.h"
namespace x86
{
	namespace reg
	{
		namespace segment
		{
			class Extra2 : public Segment {
			public:
				static Extra2 &GetInstance();
			private:
				explicit Extra2();
			};
		}
	}
}

#define FS x86::reg::segment::Extra2::GetInstance()

#endif