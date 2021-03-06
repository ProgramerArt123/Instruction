#ifndef __X86_REGISTER_CLASSIC_GENERAL_OFFSET_DESTINATION_LOW_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OFFSET_DESTINATION_LOW_H__
#include "Offset8.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace offset
				{
					class DestinationLow : public Offset8 {
					public:
						static DestinationLow &GetInstance();
					private:
						explicit DestinationLow();
					};
				}
			}
		}
	}
}

#define DIL x86::reg::classic::general::offset::DestinationLow::GetInstance()

#endif