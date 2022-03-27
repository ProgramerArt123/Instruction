#ifndef __X86_REGISTER_OFFSET_DESTINATION_EXTEND_H__
#define __X86_REGISTER_OFFSET_DESTINATION_EXTEND_H__
#include "Address32.h"
namespace x86
{
	namespace reg
	{
		namespace offset
		{
			class DestinationExtend : public Address32 {
			public:
				static DestinationExtend &GetInstance();
			private:
				explicit DestinationExtend();
			};
		}
	}
}

#define EDI x86::reg::offset::DestinationExtend::GetInstance()

#endif