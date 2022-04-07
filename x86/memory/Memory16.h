#ifndef __X86_MEMORY_16_H__
#define __X86_MEMORY_16_H__
#include "Memory.h"
namespace x86
{
	namespace memory {
		class Memory16 : public Memory {
		public:
			using Memory::Memory;
			const char *SizeString() const;
		};
		
	}
}

#endif