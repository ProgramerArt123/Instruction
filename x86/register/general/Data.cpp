
#include "Data.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			Data &Data::GetInstance() {
				static Data instance;
				return instance;
			}

			Data::Data(){
				m_string.append("DX");
			}
		}
	}
}