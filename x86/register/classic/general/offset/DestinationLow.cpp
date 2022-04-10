#include "DestinationLow.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace offset
				{
					DestinationLow &DestinationLow::GetInstance() {
						static DestinationLow instance;
						return instance;
					}
					DestinationLow::DestinationLow() {
						m_string.append("DIL");
					}
				}
			}
		}
	}
}