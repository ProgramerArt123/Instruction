#include "Compare.h"
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
					namespace compare {
						const char *Compare_Packed_Single_128() {
							return "CMPPS";
						}
						const char *Compare_Scalar_Single_32() {
							return "CMPSS";
						}
						const char *Compare_Ordered_Scalar_Single_EFLAGS_32() {
							return "COMISS";
						}
						const char *Compare_Unordered_Scalar_Single_EFLAGS_32() {
							return "UCOMISS";
						}
					}
				}
			}
		}
	}
}