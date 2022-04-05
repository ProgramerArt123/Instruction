#include "SourceLow.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace offset
			{
				SourceLow &SourceLow::GetInstance() {
					static SourceLow instance;
					return instance;
				}
				SourceLow::SourceLow() {
					m_string.append("SIL");
				}
			}
		}
	}
}