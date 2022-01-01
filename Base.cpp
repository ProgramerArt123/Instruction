#include "Define.h"
#include "Base.h"
Base &Base::GetInstance() {
	static  Base instance;
	return instance;
}
const char *Base::ToString() {
#if FORMAT=='A'
	return "%BX";
#else
	return "BX";
#endif
}
Base::Base() {
	
}