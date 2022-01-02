#ifndef __SEGMENT_DATA_H__
#define __SEGMENT_DATA_H__
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