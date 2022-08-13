#include "Compare.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX512
				{
					namespace compare {
						const char *Compare_Packed_Signed_Doubleword_128__256__512() {
							return "VPCMPD";
						}
						const char *Compare_Packed_Unsigned_Doubleword_128__256__512() {
							return "VPCMPUD";
						}
						const char *Compare_Packed_Signed_Quadword_128__256__512() {
							return "VPCMPQ";
						}
						const char *Compare_Packed_Unsigned_Quadword_128__256__512() {
							return "VPCMPUQ";
						}
					}
				}
			}
		}
	}
}