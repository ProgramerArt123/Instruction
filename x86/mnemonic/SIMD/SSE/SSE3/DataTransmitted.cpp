#include "DataTransmitted.h"
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
					namespace data_transmitted 
					{
						const char *Load_Unaligned_Integer_128() {
							return "LDDQU";
						}
						const char *Replicate_Single_High_128() {
							return "MOVSHDUP";
						}
						const char *Replicate_Single_Low_128() {
							return "MOVSLDUP";
						}
						const char *Replicate_Double_64() {
							return "MOVDDUP";
						}
					}
				}
			}
		}
	}
}