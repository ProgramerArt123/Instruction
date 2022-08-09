#include "Conversion.h"
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
					namespace F16C
					{
						namespace convertion {
							const char *Convert_Four__Eight_Packed_Half_Packed_Single() {
								return "VCVTPH2PS";
							}
							const char *Convert_Four__Eight_Packed_Single_Packed_Half() {
								return "VCVTPS2PH";
							}
						}
					}
				}
			}
		}
	}
}