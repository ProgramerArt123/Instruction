#include "Conversion.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE2
				{
					namespace size64
					{
						namespace convertion {
							const char *Convert_Packed_Double_Packed_Doubleword_Integers_128() {
								return "CVTPD2PI";
							}
							const char *Convert_Truncation_Double_Packed_Doubleword_Integers_128() {
								return "CVTTPD2PI";
							}
							const char *Convert_Packed_Doubleword_Integers_Packed_Double_128() {
								return "CVTPI2PD";
							}
						}
					}
				}
			}
		}
	}
}