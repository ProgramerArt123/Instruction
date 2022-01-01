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
						const char *Convert_Packed_Doubleword_Packed_Single_128__256() {
							return "VCVTDQ2PS";
						}
						const char *Convert_Packed_Single_Packed_Doubleword_128__256() {
							return "VCVTPS2DQ";
						}
						const char *Convert_Truncation_Packed_Single_Packed_Signed_Doubleword_128__256() {
							return "VCVTTPS2DQ";
						}
						const char *Convert_Truncation_Packed_Double_Packed_Doubleword_128__256() {
							return "VCVTTPD2DQ";
						}
						const char *Convert_Packed_Double_Packed_Doubleword_128__256() {
							return "VCVTPD2DQ";
						}
						const char *Convert_Packed_Doubleword_Packed_Double_64__128() {
							return "VCVTDQ2PD";
						}
						const char *Unpack_Interleave_High_Packed_Double_128__256() {
							return "VUNPCKHPD";
						}
						const char *Unpack_Interleave_High_Packed_Single_128__256() {
							return "VUNPCKHPS";
						}
						const char *Unpack_Interleave_Low_Packed_Double_128__256() {
							return "VUNPCKLPD";
						}
					}
				}
			}
		}
	}
}