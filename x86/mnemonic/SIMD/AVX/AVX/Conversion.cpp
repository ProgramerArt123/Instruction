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
						const char *Sign_Extend_Byte_Packed_Words_64() {
							return "VPMOVSXBW";
						}
						const char *Zero_Extend_Byte_Packed_Words_64() {
							return "VPMOVZXBW";
						}
						const char *Sign_Extend_Byte_Packed_Doublewords() {
							return "VPMOVSXBD";
						}
						const char *Zero_Extend_Byte_Packed_Doublewords() {
							return "VPMOVZXBD";
						}
						const char *Sign_Extend_Word_Packed_Doublewords_64() {
							return "VPMOVSXWD";
						}
						const char *Zero_Extend_Word_Packed_Doublewords_64() {
							return "VPMOVZXWD";
						}
						const char *Sign_Extend_Byte_Packed_Quadwords_16() {
							return "VPMOVSXBQ";
						}
						const char *Zero_Extend_Byte_Packed_Quadwords_16() {
							return "VPMOVZXBQ";
						}
						const char *Sign_Extend_Word_Packed_Quadwords_32() {
							return "VPMOVSXWQ";
						}
						const char *Zero_Extend_Word_Packed_Quadwords_32() {
							return "VPMOVZXWQ";
						}
						const char *Sign_Extend_Doubleword_Packed_Quadwords_64() {
							return "VPMOVSXDQ";
						}
						const char *Zero_Extend_Doubleword_Packed_Quadwords_64() {
							return "VPMOVZXDQ";
						}
					}
				}
			}
		}
	}
}