#ifndef __X86_REGISTER_CLASSIC_SEGMENT_EXTRA_H__
#define __X86_REGISTER_CLASSIC_SEGMENT_EXTRA_H__
#include "Segment.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace segment
			{
				class Extra : public Segment {
				public:
					static Extra &GetInstance();
				private:
					explicit Extra();
				};
			}
		}
	}
}

#define ES x86::reg::classic::segment::Extra::GetInstance()

#endif