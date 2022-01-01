#include "Logical.h"
namespace x86
{
	namespace mnemonic {
		namespace classic {
		namespace integer
		{
			namespace size32 {
				namespace logic
				{
					const char *And_8__16__32() {
						return "AND";
					}

					const char *Inclusive_Or_8__16__32() {
						return "OR";
					}

					const char *Exclusive_Or_8__16__32() {
						return "XOR";
					}
					const char *Not_8__16__32() {
						return "NOT";
					}
					const char *Compare_Value_8__16__32_SF_ZF_PF() {
						return "TEST";
					}
					const char *Bits_Move_Left_8__16__32_SF_ZF_PF() {
						return "SHL";
					}
					const char *Bits_Move_Left_Sign_8__16__32_SF_ZF_PF() {
						return "SAL";
					}
					const char *Bits_Move_Right_8__16__32_SF_ZF_PF() {
						return "SHR";
					}
					const char *Bits_Move_Right_Sign_8__16__32_SF_ZF_PF() {
						return "SAR";
					}

					const char *Bits_Move_Left_Roll_8__16__32_OF_CF() {
						return "ROL";
					}

					const char *Bits_Move_Right_Roll_8__16__32_OF_CF() {
						return "ROR";
					}
					const char *Bits_CF_Move_Left_Roll_8__16__32_OF_CF() {
						return "RCL";
					}
					const char *Bits_CF_Move_Right_Roll_8__16__32_OF_CF() {
						return "RCR";
					}
				}
			}
			}
		}
	}
}