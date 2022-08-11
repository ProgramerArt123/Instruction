#include "DataTransmitted.h"
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
					namespace data_transmitted 
					{
						const char *Load_Double_Quadword_Non_Temporal_Aligned_Hint_256() {
							return "VMOVNTDQA";
						}
						const char *Variable_Blend_Packed_Bytes_256() {
							return "VPBLENDVB";
						}
						const char *Blend_Packed_Words_256() {
							return "VPBLENDW";
						}
					}
				}
			}
		}
	}
}