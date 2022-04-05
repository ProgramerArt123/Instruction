#ifndef __X86_REGISTER_CLASSIC_SEGMENT_DATA_H__
#define __X86_REGISTER_CLASSIC_SEGMENT_DATA_H__
#include "Segment.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace segment
			{
				class Data : public Segment {
				public:
					static Data &GetInstance();
				private:
					explicit Data();
				};
			}
		}
	}
}

#define DS x86::reg::classic::segment::Data::GetInstance()

#endif