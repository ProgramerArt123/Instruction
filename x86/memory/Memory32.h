#ifndef __X86_MEMORY_32_H__
#define __X86_MEMORY_32_H__
#include "x86/operand/RegMem32.h"
#include "Memory.h"
namespace x86
{
	namespace memory {
		class Memory32 : public Memory, public operand::RegMem32 {
		public:
			using Memory::Memory;
			const char *SizeString() const;
		};
		
	}
}

#endif