#ifndef __X86_REGISTER_SEGMENT_DATA_H__
#define __X86_REGISTER_SEGMENT_DATA_H__
#include "Segment.h"
namespace segment
{
	class Data : public Segment {
	public:
		static Data &GetInstance();
	private:
		explicit Data();
	};
}

#define DS segment::Data::GetInstance()

#endif