#ifndef __X86_MNEMONIC_SIMD_AVX_AVX_CONVERSION_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX_CONVERSION_H__
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
						const char *Convert_Packed_Single_Packed_Double_64__128();
						const char *Convert_Packed_Double_Packed_Single_128__256();
						const char *Convert_Packed_Doubleword_Packed_Single_128__256();
						const char *Convert_Packed_Single_Packed_Doubleword_128__256();	
						const char *Convert_Truncation_Packed_Single_Packed_Signed_Doubleword_128__256();
						const char *Convert_Truncation_Packed_Double_Packed_Doubleword_128__256();
						const char *Convert_Packed_Double_Packed_Doubleword_128__256();
						const char *Convert_Packed_Doubleword_Packed_Double_64__128();
						const char *Unpack_Interleave_High_Packed_Double_128__256();
						const char *Unpack_Interleave_High_Packed_Single_128__256();
						const char *Unpack_Interleave_Low_Packed_Double_128__256();
						const char *Sign_Extend_Byte_Packed_Words_64();
						const char *Zero_Extend_Byte_Packed_Words_64();
						const char *Sign_Extend_Byte_Packed_Doublewords();
						const char *Zero_Extend_Byte_Packed_Doublewords();
						const char *Sign_Extend_Word_Packed_Doublewords_64();
						const char *Zero_Extend_Word_Packed_Doublewords_64();
						const char *Sign_Extend_Byte_Packed_Quadwords_16();
						const char *Zero_Extend_Byte_Packed_Quadwords_16();
						const char *Sign_Extend_Word_Packed_Quadwords_32();
						const char *Zero_Extend_Word_Packed_Quadwords_32();
						const char *Sign_Extend_Doubleword_Packed_Quadwords_64();
						const char *Zero_Extend_Doubleword_Packed_Quadwords_64();
						const char *Convert_Integers_Scalar_Single_32__64();
						const char *Convert_Doubleword_Integer_Scalar_Double_32__64();
						const char *Convert_Scalar_Double_Doubleword_Integer_64();
						const char *Convert_Truncation_Scalar_Single_Integer_32();
						const char *Convert_Truncation_Scalar_Double_Scalar_Doubleword_Integers_64();
						const char *Convert_Scalar_Single_Integer_32();
						const char *Convert_Scalar_Single_Scalar_Double_32();
						const char *Convert_Scalar_Double_Scalar_Single_64();
						const char *Pack_Words_Into_Bytes_Unsigned_128();
						const char *Pack_Doublewords_Into_Words_Signed_128();
						const char *Pack_Words_Into_Bytes_Signed_128();
						const char *Unpack_High_Order_Bytes_128();
						const char *Unpack_High_Order_Words_128();
						const char *Unpack_Low_Order_Bytes_128();
						const char *Unpack_Low_Order_Words_128();
						const char *Unpack_High_Order_Doublewords_128();
						const char *Unpack_Low_Order_Doublewords_128();
						const char *Unpack_Low_Quadwords_128();
						const char *Unpack_High_Quadwords_128();
						const char *Pack_Unsigned_Saturation_128();
					}
				}
			}
		}
	}
}

#endif