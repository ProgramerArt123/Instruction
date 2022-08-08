#include "DataTransmitted.h"
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
					namespace data_transmitted 
					{
						const char *Transmitted_Two_Aligned_Packed_Double_128() {
							return "MOVAPD";
						}
						const char *Transmitted_Two_Unaligned_Packed_Double_128() {
							return "MOVUPD";
						}
						const char *Transmitted_Packed_Double_High_64() {
							return "MOVHPD";
						}
						const char *Transmitted_Packed_Double_Low_64() {
							return "MOVLPD";
						}
						const char *Extract_Sign_Mask_Two_Packed_Double() {
							return "MOVMSKPD";
						}
						const char *Transmitted_Scalar_Double() {
							return "MOVSD";
						}
						const char *Transmitted_Two_Aligned_Quadwords_128() {
							return "MOVDQA";
						}
						const char *Transmitted_Two_Unaligned_Quadwords_128() {
							return "MOVDQU";
						}
						const char *Store_Selected_Bytes_Two_Quadwords() {
							return "MASKMOVDQU";
						}
						const char *Store_Packed_Doubles_Non_Temporal_Hint_128() {
							return "MOVNTPD";
						}
						const char *Store_Packed_Integers_Non_Temporal_Hint_128() {
							return "MOVNTDQ";
						}
						const char *Transmitted_32() {
							return "MOVD";
						}
						const char *Transmitted_64() {
							return "MOVQ";
						}
					}
				}
			}
		}
	}
}