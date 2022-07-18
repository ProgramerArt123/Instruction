#include "Arithmetic.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE3
				{
					namespace arithmetic
					{
						const char *Single_Add__Sub_128() {
							return "ADDSUBPS";
						}
						const char *Double_Add__Sub_128() {
							return "ADDSUBPD";
						}
						const char *Horizontal_Add_Packed_Single_128() {
							return "HADDPS";
						}
						const char *Horizontal_Subtraction_Packed_Single_128() {
							return "HSUBPS";
						}
						const char *Horizontal_Add_Packed_Double_128() {
							return "HADDPD";
						}
						const char *Horizontal_Subtraction_Packed_Double_128() {
							return "HSUBPD";
						}
						const char *Horizontal_Add_Words_Packed_64() {
							return "PHADDW";
						}
						const char *Horizontal_Add_Signed_Words_Packed_64() {
							return "PHADDSW";
						}
						const char *Horizontal_Add_Doublewords_Packed_64__128() {
							return "PHADDD";
						}
						const char *Horizontal_Subtraction_Words_Packed_64__128() {
							return "PHSUBW";
						}
						const char *Horizontal_Subtraction_Words_Saturated_Packed_64__128() {
							return "PHSUBSW";
						}
						const char *Horizontal_Subtraction_Signed_Doublewords_Packed_64__128() {
							return "PHSUBD";
						}
						const char *Multiply__Add_Bytes_64__128() {
							return "PMADDUBSW";
						}
						const char *Multiply_Signed_Words_Scale_Round_Signed_Doublewords_64__128() {
							return "PMULHRSW";
						}
						const char *Absolute_Bytes_64__128() {
							return "PABSB";
						}
						const char *Absolute_Words_64__128() {
							return "PABSW";
						}
						const char *Absolute_Doublewords_64__128() {
							return "PABSD";
						}
					}
				}
			}
		}
	}
}