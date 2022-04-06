#ifndef __X86_MEMORY_8_H__
#define __X86_MEMORY_8_H__
#include "Memory.h"
namespace x86
{
	namespace memory {
		class Memory8 : public Memory {
		public:
			const char *SizeString() const;
		};
		
	}
}

#endif