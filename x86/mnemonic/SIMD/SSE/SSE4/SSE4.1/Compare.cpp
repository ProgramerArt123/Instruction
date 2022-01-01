#include "Compare.h"
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
						namespace compare {
							const char *Compare_ZF_CF() {
								return "PTEST";
							}
							const char *Compare_Packed_Quadwords_128() {
								return "PCMPEQQ";
							}
						}
					}
				}
			}
		}
	}
}