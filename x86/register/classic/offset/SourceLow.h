#ifndef __X86_REGISTER_CLASSIC_OFFSET_SOURCE_LOW_H__
#define __X86_REGISTER_CLASSIC_OFFSET_SOURCE_LOW_H__
#include "Offset8.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace offset
			{
				class SourceLow : public Offset8 {
				public:
					static SourceLow &GetInstance();
				private:
					explicit SourceLow();
				};
			}
		}
	}
}

#define SIL x86::reg::classic::offset::SourceLow::GetInstance()

#endif