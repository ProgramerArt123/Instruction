#include "DataTransmitted.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE
				{
					namespace size64 
					{
						namespace data_transmitted 
						{
							const char *Extract_Word() {
								return "PEXTRW";
							}
							const char *Insert_Word() {
								return "PINSRW";
							}
							const char *Move_Byte_Mask() {
								return "PMOVMSKB";
							}
							const char *Shuffle_Packed_Words_64() {
								return "PSHUFW";
							}
						}
					}
				}
			}
		}
	}
}