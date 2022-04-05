#include "Source.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace offset
			{
				Source &Source::GetInstance() {
					static Source instance;
					return instance;
				}
				Source::Source() {
					m_string.append("SI");
				}
			}
		}
	}
}