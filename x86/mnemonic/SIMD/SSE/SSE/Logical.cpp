#include "Logical.h"
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
					namespace logical {
						const char *Logical_And_Packed_Single_128() {
							return "ANDPS";
						}
						const char *Logical_And_Not_Packed_Single_128() {
							return "ANDNPS";
						}
						const char *Logical_Or_Packed_Single_128() {
							return "ORPS";
						}
						const char *Logical_Xor_Packed_Single_128() {
							return "XORPS";
						}
					}
				}
			}
		}
	}
}