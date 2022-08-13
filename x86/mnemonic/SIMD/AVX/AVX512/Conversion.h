#ifndef __X86_MNEMONIC_SIMD_AVX_AVX512_CONVERSION_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX512_CONVERSION_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX512
				{
					namespace convertion {
						const char *Convert_Packed_Double_Packed_Unsigned_Doubleword_Integers_128__256__512();
						const char *Convert_Truncation_Packed_Double_Packed_Unsigned_Doubleword_Integers_128__256__512();
						const char *Convert_Packed_Single_Packed_Unsigned_Doubleword_Integers_128__256__512();
						const char *Convert_Truncation_Packed_Single_Packed_Unsigned_Doubleword_Integers_128__256__512();
						const char *Convert_Packed_Quadword_Integers_Packed_Double_128__256__512();
						const char *Convert_Packed_Quadword_Integers_Packed_Single_128__256__512();
						const char *Convert_Scalar_Double_Unsigned_Doubleword_Integer();
						const char *Convert_Truncation_Scalar_Double_Unsigned_Doubleword_Integer();
						const char *Convert_Scalar_Single_Unsigned_Doubleword_Integer();
						const char *Convert_Truncation_Scalar_Single_Unsigned_Doubleword_Integer();
						const char *Convert_Packed_Unsigned_Doubleword_Integers_Packed_Double_64__128__256();
						const char *Convert_Packed_Unsigned_Doubleword_Integers_Packed_Single_128__256__512();
						const char *Convert_Unsigned_Integer_Scalar_Double_32__64();
						const char *Convert_Unsigned_Integer_Scalar_Single_32__64();
						const char *Convert_Exponents_Packed_Double_128__256__512();
						const char *Convert_Exponents_Packed_Single_128__256__512();
						const char *Convert_Exponents_Scalar_Double();
						const char *Convert_Exponents_Scalar_Single();
						const char *Extract_Double_Vector_Normalized_Mantissas_Double_Vector_128__256__512();
						const char *Extract_Single_Vector_Normalized_Mantissas_Single_Vector_128__256__512();
						const char *Extract_Double_Normalized_Mantissas_Double_Scalar();
						const char *Extract_Single_Vector_Normalized_Mantissa_Single_Vector();
					}
				}
			}
		}
	}
}

#endif