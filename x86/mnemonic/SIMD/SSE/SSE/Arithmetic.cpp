#include "Arithmetic.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE
				{
					namespace arithmetic
					{
						const char *Add_Packed_Single_128() {
							return "ADDPS";
						}
						const char *Add_Scalar_Single_32() {
							return "ADDSS";
						}
						const char *Subtract_Packed_Single_128() {
							return "SUBPS";
						}
						const char *Subtract_Scalar_Single_32() {
							return "SUBSS";
						}
						const char *Multiply_Packed_Single_128() {
							return "MULPS";
						}
						const char *Multiply_Scalar_Single_32() {
							return "MULSS";
						}
						const char *Divide_Packed_Single_128() {
							return "DIVPS";
						}
						const char *Divide_Scalar_Single_32() {
							return "DIVSS";
						}
						const char *Reciprocals_Packed_Single_128() {
							return "RCPPS";
						}
						const char *Reciprocal_Scalar_Single_32() {
							return "RCPSS";
						}
						const char *Square_Roots_Packed_Single_128() {
							return "SQRTPS";
						}
						const char *Square_Root_Scalar_Single_32() {
							return "SQRTSS";
						}
						const char *Square_Roots_Reciprocals_Packed_Single_128() {
							return "RSQRTPS";
						}
						const char *Maximum_Packed_Single_128() {
							return "MAXPS";
						}
						const char *Maximum_Scalar_Single_32() {
							return "MAXSS";
						}
						const char *Minimum_Packed_Single_128() {
							return "MINPS";
						}
						const char *Minimum_Scalar_Single_32() {
							return "MINSS";
						}
					}
				}
			}
		}
	}
}