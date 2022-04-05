#ifndef __X86_REGISTER_CLASSIC_SEGMENT_STACK_H__
#define __X86_REGISTER_CLASSIC_SEGMENT_STACK_H__
#include "Segment.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace segment
			{
				class Stack : public Segment {
				public:
					static Stack &GetInstance();
				private:
					explicit Stack();
				};
			}
		}
	}
}

#define SS x86::reg::classic::segment::Stack::GetInstance()

#endif