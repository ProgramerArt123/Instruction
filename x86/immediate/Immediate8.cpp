#include "Immediate8.h"
namespace x86
{
	namespace immediate {
		Immediate8::Immediate8() {
		}
		const char *Immediate8::SizeString() const {
			return "BYTE";
		}
	}
}