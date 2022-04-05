#ifndef __X86_REGISTER_CLASSIC_SEGMENT_CODE_H__
#define __X86_REGISTER_CLASSIC_SEGMENT_CODE_H__
#include "Segment.h"
namespace x86
{
	namespace reg
	{
		namespace classic
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
}

#define CS x86::reg::classic::segment::Code::GetInstance()

#endif