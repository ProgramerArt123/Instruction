#ifndef __REGISTER_SEGMENT_EXTRA_H__
#define __REGISTER_SEGMENT_EXTRA_H__
#include "Segment.h"
namespace segment
{
	class Extra : public Segment {
	public:
		static Extra &GetInstance();
	private:
		explicit Extra();
	};
}

#define ES segment::Extra::GetInstance()

#endif