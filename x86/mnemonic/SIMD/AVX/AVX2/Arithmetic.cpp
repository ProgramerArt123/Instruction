#include "Arithmetic.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX2
				{
					namespace arithmetic
					{
						const char *Add_Packed_Quadwords_256() {
							return "VPADDQ";
						}
						const char *Multiply_Packed_Signed_Doublewords_256() {
							return "VPMULLW";
						}
						const char *Move_Byte_Mask() {
							return "VPMOVMSKB";
						}
						const char *Subtract_Packed_Unsigned_Bytes_256() {
							return "VPSUBUSB";
						}
						const char *Subtract_Packed_Unsigned_Words_256() {
							return "VPSUBUSW";
						}
						const char *Minimum_Packed_Unsigned_Bytes_256() {
							return "VPMINUB";
						}
						const char *Add_Packed_Unsigned_Bytes_256() {
							return "VPADDUSB";
						}
						const char *Add_Packed_Unsigned_Words_256() {
							return "VPADDUSW";
						}
						const char *Maximum_Packed_Unsigned_Bytes_256() {
							return "VPMAXUB";
						}
					}
				}
			}
		}
	}
}