#ifndef __X86_MEMORY_8_H__
#define __X86_MEMORY_8_H__
#include "x86/operand/RegMem8.h"
#include "Memory.h"
namespace x86
{
	namespace memory {
		class Memory8 : public Memory, public operand::RegMem8 {
		public:
			using Memory::Memory;
			const char *SizeString() const;
		};
		
	}
}

#endif