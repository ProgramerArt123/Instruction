#ifndef __X86_MEMORY_80_H__
#define __X86_MEMORY_80_H__
#include "x86/operand/RegMem32.h"
#include "Memory.h"
namespace x86
{
	namespace memory {
		class Memory80 : public Memory {
		public:
			using Memory::Memory;
			const char *SizeString() const;
		};
		
	}
}

#endif