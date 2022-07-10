#include "Arithmetic.h"
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
					namespace size64 
					{
						namespace arithmetic
						{
							const char *Average_Packed_Unsigned_Byte_Integers_64() {
								return "PAVGB";
							}
							const char *Average_Packed_Unsigned_Word_Integers_64() {
								return "PAVGW";
							}
							const char *Maximum_Packed_Unsigned_Byte_Integers_64() {
								return "PMAXUB";
							}
							const char *Maximum_Packed_Unsigned_Word_Integers_64() {
								return "PMAXSW";
							}
							const char *Minimum_Packed_Unsigned_Byte_Integers_64() {
								return "PMINUB";
							}
							const char *Minimum_Packed_Unsigned_Word_Integers_64() {
								return "PMINSW";
							}
							const char *Multiply_Packed_Unsigned_Integers_High_64() {
								return "PMULHUW";
							}
							const char *Sum_Absolute_Differences_64() {
								return "PSADBW";
							}
						}
					}
				}
			}
		}
	}
}