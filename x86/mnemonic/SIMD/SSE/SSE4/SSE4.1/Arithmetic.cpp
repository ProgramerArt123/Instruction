#include "Arithmetic.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE4
				{
					namespace SSE4_1
					{
						namespace arithmetic
						{
							const char *Multiply_Packed_Signed_Doublewords_Store_Low_128() {
								return "PMULLD";
							}
							const char *Multiply_Packed_Signed_Doublewords_Store_Quadwords_128() {
								return "PMULDQ";
							}
							const char *Packed_Double_Dot_Product_128() {
								return "DPPD";
							}
							const char *Packed_Single_Dot_Product_128() {
								return "DPPS";
							}
							const char *Minimum_Packed_Unsigned_Words_128() {
								return "PMINUW";
							}
							const char *Minimum_Packed_Unsigned_Doublewords_128() {
								return "PMINUD";
							}
							const char *Minimum_Packed_Signed_Words_128() {
								return "PMINSB";
							}
							const char *Minimum_Packed_Signed_Doublewords_128() {
								return "PMINSD";
							}
							const char *Maximum_Packed_Unsigned_Words_128() {
								return "PMAXUW";
							}
							const char *Maximum_Packed_Unsigned_Doublewords_128() {
								return "PMAXUD";
							}
							const char *Maximum_Packed_Signed_Words_128() {
								return "PMAXSB";
							}
							const char *Maximum_Packed_Signed_Doublewords_128() {
								return "PMAXSD";
							}
							const char *Round_Packed_Single_128() {
								return "ROUNDPS";
							}
							const char *Round_Packed_Double_128() {
								return "ROUNDPD";
							}
							const char *Round_Scalar_Single_32() {
								return "ROUNDSS";
							}
							const char *Round_Scalar_Double_64() {
								return "ROUNDSD";
							}
							const char *Absolute_Difference_Sum() {
								return "MPSADBW";
							}
							const char *Packed_Horizontal_Word_Minimum() {
								return "PHMINPOSUW";
							}
						}
					}
				}
			}
		}
	}
}