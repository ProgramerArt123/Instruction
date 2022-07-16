#include "DataTransmitted.h"
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
					namespace size64
					{
						namespace data_transmitted 
						{
							const char *Transmitted_Quadword_MMX_XMM_64() {
								return "MOVQ2DQ";
							}
							const char *Transmitted_Quadword_XMM_MMX_64() {
								return "MOVDQ2Q";
							}
						}
					}
				}
			}
		}
	}
}