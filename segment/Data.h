#ifndef __DATA_H__
#define __DATA_H__
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