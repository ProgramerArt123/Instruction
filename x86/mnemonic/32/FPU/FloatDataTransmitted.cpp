#include "FloatDataTransmitted.h"
namespace x86
{
	namespace mnemonic {
		namespace size32 {

			const char *FloatDataTransmitted::Load_Zero_To_ST0_C1()const {
				return "FLDZ";
			}
			const char *FloatDataTransmitted::Load_One_To_ST0_C1()const {
				return "FLD1";
			}
			const char *FloatDataTransmitted::Load_PI_To_ST0_C1()const {
				return "FLDPI";
			}
			const char *FloatDataTransmitted::Load_L2T_To_ST0_C1()const {
				return "FLDL2T";
			}
			const char *FloatDataTransmitted::Load_L2E_To_ST0_C1()const {
				return "FLDL2E";
			}
			const char *FloatDataTransmitted::Load_LG2_To_ST0_C1()const {
				return "FLDLG2";
			}
			const char *FloatDataTransmitted::Load_LN2_To_ST0_C1()const {
				return "FLDLN2";
			}

			const char *FloatDataTransmitted::Load_Float_Value_4__8__10_C1()const {
				return "FLD";
			}
			const char *FloatDataTransmitted::Load_Integer_Value_2__4__8_C1()const {
				return "FILD";
			}
			const char *FloatDataTransmitted::Load_Binary_Coded_Decimal_10_C1()const {
				return "FBLD";
			}
			const char *FloatDataTransmitted::Store_Float_Value_4__8_C1()const {
				return "FST";
			}
			const char *FloatDataTransmitted::Store_Integer_Value_4__8_C1()const {
				return "FIST";
			}
			const char *FloatDataTransmitted::Store_Pop_Float_Value_Stack_4__8__10_C1()const {
				return "FSTP";
			}
			const char *FloatDataTransmitted::Store_Pop_Integer_Value_2__4__8_C1()const {
				return "FISTP";
			}
			const char *FloatDataTransmitted::Store_Pop_Binary_Coded_Decimal_10_C1()const {
				return "FBSTP";
			}
			const char *FloatDataTransmitted::Move_If_Below_C1()const {
				return "FCMOVB";
			}
			const char *FloatDataTransmitted::Move_If_Below__Equal_C1()const {
				return "FCMOVBE";
			}
			const char *FloatDataTransmitted::Move_If_Equal_C1()const {
				return "FCMOVE";
			}
			const char *FloatDataTransmitted::Move_If_Not_Below_C1()const {
				return "FCMOVNB";
			}
			const char *FloatDataTransmitted::Move_If_Not_Below_Not_Equal_C1()const {
				return "FCMOVNBE";
			}
			const char *FloatDataTransmitted::Move_If_Not_Equal_C1()const {
				return "FCMOVNE";
			}
			const char *FloatDataTransmitted::Move_If_Not_Unordered_C1()const {
				return "FCMOVNU";
			}
			const char *FloatDataTransmitted::Move_If_Unordered_C1()const {
				return "FCMOVU";
			}
		}
	}
}