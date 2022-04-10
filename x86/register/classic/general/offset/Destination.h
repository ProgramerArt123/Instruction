#ifndef __X86_REGISTER_CLASSIC_GENERAL_OFFSET_DESTINATION_H__
#define __X86_REGISTER_CLASSIC_GENERAL_OFFSET_DESTINATION_H__
#include "Offset16.h"
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
					class Destination : public Offset16 {
					public:
						static Destination &GetInstance();
					private:
						explicit Destination();
					};
				}
			}
		}
	}
}

#define DI x86::reg::classic::general::offset::Destination::GetInstance()

#endif