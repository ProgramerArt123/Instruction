#ifndef __X86_MEMORY_32_H__
#define __X86_MEMORY_32_H__
#include "Memory.h"
namespace x86
{
	namespace memory {
		class Memory32 : public Memory {
		public:
			using Memory::Memory;
			const char *SizeString() const;
		};
		
	}
}

#endif