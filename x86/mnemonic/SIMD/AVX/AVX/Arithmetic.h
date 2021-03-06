#ifndef __X86_MNEMONIC_SIMD_AVX_AVX_ARITHMETIC_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX_ARITHMETIC_H__
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
					namespace arithmetic
					{
						const char *Square_Root_Single_128__256();
						const char *Square_Root_Double_128__256();
						const char *Square_Roots_Reciprocals_Packed_Single_128__256();
						const char *Reciprocals_Packed_Single_128__256();
						const char *Add_Packed_Single_128__256();
						const char *Add_Packed_Double_128__256();
						const char *Subtract_Packed_Single_128__256();
						const char *Subtract_Packed_Double_128__256();
						const char *Multiply_Packed_Single_128__256();
						const char *Multiply_Packed_Double_128__256();
						const char *Divide_Packed_Single_128__256();
						const char *Divide_Packed_Double_128__256();
						const char *Minimum_Packed_Single_128__256();
						const char *Minimum_Packed_Double_128__256();
						const char *Maximum_Packed_Single_128__256();
						const char *Maximum_Packed_Double_128__256();
						const char *Packed_Double_Horizontal_Add_128__256();
						const char *Packed_Single_Horizontal_Add_128__256();
						const char *Packed_Double_Horizontal_Subtract_128__256();
						const char *Packed_Single_Horizontal_Subtract_128__256();
						const char *Packed_Double_Add__Subtract_128__256();
						const char *Packed_Single_Add__Subtract_128__256();
						const char *Dot_Product_Packed_Single_128__256();
						const char *Round_Packed_Double_128__256();
						const char *Round_Packed_Single_128__256();
					}
				}
			}
		}
	}
}

#endif