#ifndef __CODE_H__
#define __CODE_H__
#include "Segment.h"

namespace segment
{
	class Code : public Segment {
	public:
		static Code &GetInstance();
	private:
		explicit Code();
	};

}

#define CS segment::Code::GetInstance()

#endif