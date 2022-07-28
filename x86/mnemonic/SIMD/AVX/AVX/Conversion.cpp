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
					namespace convertion {
						const char *Convert_Packed_Single_Packed_Double_64__128() {
							return "VCVTPS2PD";
						}
						const char *Convert_Packed_Double_Packed_Single_128__256() {
							return "VCVTPD2PS";
						}
						
					}
				}
			}
		}
	}
}