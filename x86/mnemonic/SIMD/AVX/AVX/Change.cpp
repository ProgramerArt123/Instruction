#include "Change.h"
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
					namespace change {
						const char *Packed_Interleave_Shuffle_Two_Double_128__256() {
							return "VSHUFPD";
						}
						const char *Packed_Interleave_Shuffle_Quadruplets_Single_128__256() {
							return "VSHUFPS";
						}
						const char *Unpack_Interleave_Low_Packed_Single_128__256() {
							return "VUNPCKLPS";
						}
						const char *Permute_Double_128__256() {
							return "VPERMILPD";
						}
						const char *Permute_Single_128__256() {
							return "VPERMILPS";
						}
						const char *Permute_Float_256() {
							return "VPERM2F128";
						}
					}
				}
			}
		}
	}
}