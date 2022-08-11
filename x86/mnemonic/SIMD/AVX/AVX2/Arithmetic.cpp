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
						const char *Average_Packed_Unsigned_Bytes_256() {
							return "VPAVGB";
						}
						const char *Average_Packed_Unsigned_Words_256() {
							return "VPAVGW";
						}
						const char *Multiply_Packed_Unsigned_Words_256() {
							return "VPMULHUW";
						}
						const char *Multiply_Packed_Signed_Words_256() {
							return "VPMULHW";
						}
						const char *Subtract_Packed_Signed_Bytes_256() {
							return "VPSUBSB";
						}
						const char *Subtract_Packed_Signed_Words_256() {
							return "VPSUBSW";
						}
						const char *Minimum_Packed_Signed_Words_256() {
							return "VPMINSW";
						}
						const char *Add_Packed_Signed_Bytes_256() {
							return "VPADDSB";
						}
						const char *Add_Packed_Signed_Words_256() {
							return "VPADDSW";
						}
						const char *Maximum_Packed_Signed_Words_256() {
							return "VPMAXSW";
						}
						const char *Average_Packed_Unsigned_Doublewords_256() {
							return "VPMULUDQ";
						}
						const char *Multiply_Add_Packed_Integers_256() {
							return "VPMADDWD";
						}
						const char *Sum_Absolute_Differences_256() {
							return "VPSADBW";
						}
						const char *Subtract_Packed_Bytes_256() {
							return "VPSUBB";
						}
						const char *Subtract_Packed_Words_256() {
							return "VPSUBW";
						}
						const char *Subtract_Packed_Doublewords_256() {
							return "VPSUBD";
						}
						const char *Subtract_Packed_Quadwords_256() {
							return "VPSUBQ";
						}
						const char *Add_Packed_Bytes_256() {
							return "VPADDB";
						}
						const char *Add_Packed_Words_256() {
							return "VPADDW";
						}
						const char *Add_Packed_Doublewords_256() {
							return "VPADDD";
						}
						const char *Horizontal_Add_Words_Packed_256() {
							return "VPHADDW";
						}
						const char *Horizontal_Add_Doublewords_Packed_256() {
							return "VPHADDD";
						}
						const char *Horizontal_Add_Signed_Words_Packed_256() {
							return "VPHADDSW";
						}
						const char *Horizontal_Subtraction_Words_Packed_256() {
							return "VPHSUBW";
						}
						const char *Horizontal_Subtraction_Signed_Doublewords_Packed_256() {
							return "VPHSUBD";
						}
						const char *Horizontal_Subtraction_Words_Saturated_Packed_256() {
							return "VPHSUBSW";
						}
						const char *Multiply_Add_Packed_Signed__Unsigned_Bytes_256() {
							return "VPMADDUBSW";
						}
						const char *Packed_Align_Right_256() {
							return "VPALIGNR";
						}
						const char *Multiply_Signed_Words_Scale_Round_Signed_Doublewords_256() {
							return "VPMULHRSW";
						}
						const char *Packed_Sign_Bytes_256() {
							return "VPSIGNB";
						}
						const char *Packed_Sign_Words_256() {
							return "VPSIGNW";
						}
						const char *Packed_Sign_Doublewords_256() {
							return "VPSIGND";
						}
						const char *Absolute_Bytes_256() {
							return "VPABSB";
						}
						const char *Absolute_Words_256() {
							return "VPABSW";
						}
						const char *Absolute_Doublewords_256() {
							return "VPABSD";
						}
						const char *Absolute_Difference_Sum() {
							return "VMPSADBW";
						}
						const char *Maximum_Packed_Signed_Bytes_256() {
							return "VPMAXSB";
						}
						const char *Maximum_Packed_Signed_Doublewords_256() {
							return "VPMAXSD";
						}
						const char *Maximum_Packed_Unsigned_Doublewords_256() {
							return "VPMAXUD";
						}
						const char *Minimum_Packed_Signed_Bytes_256() {
							return "VPMINSB";
						}
						const char *Minimum_Packed_Signed_Doublewords_256() {
							return "VPMINSD";
						}
						const char *Minimum_Packed_Unsigned_Doublewords_256() {
							return "VPMINUD";
						}
						const char *Maximum_Packed_Unsigned_Words_256() {
							return "VPMAXUW";
						}
						const char *Minimum_Packed_Unsigned_Words_256() {
							return "VPMINUW";
						}
						const char *Multiply_Packed_Signed_Doublewords_Store_Quadwords_256() {
							return "VPMULDQ";
						}
						const char *Multiply_Packed_Signed_Doublewords_Store_Low_256() {
							return "VPMULLD";
						}
					}
				}
			}
		}
	}
}