#include "String.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE4
				{
					namespace SSE4_2
					{
						namespace string {
							const char *Packed_Compare_Explicit_Length_Strings_Index_128() {
								return "PCMPESTRI";
							}
							const char *Packed_Compare_Explicit_Length_Strings_Mask_128() {
								return "PCMPESTRM";
							}
							const char *Packed_Compare_Implicit_Length_Strings_Index_128() {
								return "PCMPISTRI";
							}
							const char *Packed_Compare_Implicit_Length_Strings_Mask_128() {
								return "PCMPISTRM";
							}
						}
					}
				}
			}
		}
	}
}