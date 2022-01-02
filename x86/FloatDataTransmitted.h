#ifndef __FLOAT_DATA_TRANSMITTED_H__
#define __FLOAT_DATA_TRANSMITTED_H__

class FloatDataTransmitted {
public:
	const char *Load_Zero_To_ST0_C1()const;
	const char *Load_One_To_ST0_C1()const;
	const char *Load_PI_To_ST0_C1()const;
	const char *Load_L2T_To_ST0_C1()const;
	const char *Load_L2E_To_ST0_C1()const;
	const char *Load_LG2_To_ST0_C1()const;
	const char *Load_LN2_To_ST0_C1()const;
	const char *Load_Float_Value_4__8__10_C1()const;
	const char *Load_Integer_Value_2__4__8_C1()const;
	const char *Load_Binary_Coded_Decimal_10_C1()const;
	const char *Store_Float_Value_4__8_C1()const;
	const char *Store_Integer_Value_4__8_C1()const;
	const char *Store_Pop_Float_Value_Stack_4__8__10_C1()const;
	const char *Store_Pop_Integer_Value_2__4__8_C1()const;
	const char *Store_Pop_Binary_Coded_Decimal_10_C1()const;
	const char *Move_If_Below_C1()const;
	const char *Move_If_Below__Equal_C1()const;
	const char *Move_If_Equal_C1()const;
	const char *Move_If_Not_Below_C1()const;
	const char *Move_If_Not_Below_Not_Equal_C1()const;
	const char *Move_If_Not_Equal_C1()const;
	const char *Move_If_Not_Unordered_C1()const;
	const char *Move_If_Unordered_C1()const;
};

#endif