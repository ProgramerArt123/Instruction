#include "Arithmetic.h"
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
					namespace arithmetic
					{
						const char *Add_Packed_Double_128() {
							return "ADDPD";
						}
						const char *Add_Scalar_Double_64() {
							return "ADDSD";
						}
						const char *Subtract_Packed_Double_128() {
							return "SUBPD";
						}
						const char *Subtract_Scalar_Double_64() {
							return "SUBSD";
						}
						const char *Multiply_Packed_Double_128() {
							return "MULPD";
						}
						const char *Multiply_Scalar_Double_64() {
							return "MULSD";
						}
						const char *Divide_Packed_Double_128() {
							return "DIVPD";
						}
						const char *Divide_Scalar_Double_64() {
							return "DIVSD";
						}
						const char *Square_Roots_Packed_Double_128() {
							return "SQRTPD";
						}
						const char *Square_Root_Scalar_Double_64() {
							return "SQRTSD";
						}
						const char *Maximum_Packed_Single_128() {
							return "MAXPD";
						}
						const char *Maximum_Scalar_Double_64() {
							return "MAXSD";
						}
						const char *Minimum_Packed_Single_128() {
							return "MINPD";
						}
						const char *Minimum_Scalar_Double_64() {
							return "MINSD";
						}
					}
				}
			}
		}
	}
}