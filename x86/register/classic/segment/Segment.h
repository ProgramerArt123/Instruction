#ifndef __X86_REGISTER_CLASSIC_SEGMENT_H__
#define __X86_REGISTER_CLASSIC_SEGMENT_H__
#include "x86/register/Register.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace segment
			{
				class Segment : public Register {
				public:
					explicit Segment();

				};
			}
		}
	}
}

#endif