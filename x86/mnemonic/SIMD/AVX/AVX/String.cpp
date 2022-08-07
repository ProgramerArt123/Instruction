#include "String.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX
				{
					namespace string {
						const char *Packed_Compare_Explicit_Length_Strings_Index_128() {
							return "VPCMPESTRI";
						}
						const char *Packed_Compare_Explicit_Length_Strings_Mask_128() {
							return "VPCMPESTRM";
						}
						const char *Packed_Compare_Implicit_Length_Strings_Index_128() {
							return "VPCMPISTRI";
						}
						const char *Packed_Compare_Implicit_Length_Strings_Mask_128() {
							return "VPCMPISTRM";
						}
					}
				}
			}
		}
	}
}