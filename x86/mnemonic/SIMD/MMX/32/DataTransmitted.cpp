#include "DataTransmitted.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace MMX
			{
				namespace size32
				{
					namespace data_transmitted 
					{
						const char *Transmitted_32() {
							return "MOVD";
						}
						const char *Transmitted_64() {
							return "MOVQ";
						}
					}
				}
			}
		}
	}
}