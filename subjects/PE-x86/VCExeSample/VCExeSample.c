// VCExeSample.c
// Generated by decompiling VCExeSample.exe
// using Reko decompiler version 0.7.0.0.

#include "VCExeSample.h"

// 00401000: Register int32 main(Stack int32 argc, Stack (ptr (ptr char)) argv)
int32 main(int32 argc, char * * argv)
{
	test1(*argv, argc, "test123", 1.0F);
	return 0x00;
}

// 00401030: void test1(Stack (ptr char) arg1, Stack int32 arg2, Stack (ptr char) arg3, Stack real32 arg4)
void test1(char * arg1, int32 arg2, char * arg3, real32 arg4)
{
	printf("%s %d %s %f", arg1, arg2, arg3, (real64) arg4);
	return;
}

// 00401060: void test2(Stack word32 dwArg04)
void test2(word32 dwArg04)
{
	test1("1", 0x02, "3", globals->r4020E8);
	if (dwArg04 == 0x00)
		test1("5", 0x06, "7", globals->r4020E4);
	return;
}

// 004010B0: void indirect_call_test3(Stack (ptr Eq_52) c)
void indirect_call_test3(cdecl_class * c)
{
	c->vtbl->method04(c, 1000);
	return;
}

// 004010D0: void test4()
void test4()
{
	globals->gbl_c->vtbl->method00(globals->gbl_c);
	return;
}

// 004010F0: void test5()
void test5()
{
	globals->gbl_c->vtbl->method04(globals->gbl_c, 999, globals->r4020EC);
	return;
}

// 00401120: void test6(Stack Eq_63 c, Stack int32 a, Stack int32 b)
void test6(Eq_63 c, int32 a, int32 b)
{
	c->vtbl->method04(c, c->vtbl->sum(c, a, b));
	return;
}

// 00401160: void test7(Stack real64 rArg04)
void test7(real64 rArg04)
{
	if (1.0 < rArg04)
		globals->gbl_thiscall->vtbl->set_double(globals->gbl_thiscall, rArg04);
	globals->gbl_thiscall->vtbl->modify_double(globals->gbl_thiscall, 0x0D, rArg04);
	return;
}

// 004011B0: Register word32 nested_if_blocks_test8(Stack real64 rArg04, FpuStack real64 rArg0)
word32 nested_if_blocks_test8(real64 rArg04, real64 rArg0)
{
	globals->gbl_thiscall->vtbl->modify_double(globals->gbl_thiscall, ~0x00, rArg04);
	if (globals->r4020F8 != rArg04 && globals->r4020F0 > rArg04)
		globals->gbl_thiscall->vtbl->set_double(globals->gbl_thiscall, rArg04);
	test6(globals->gbl_c, 0x06, 0x07);
	return ebp;
}

// 00401230: void loop_test9(Stack real32 rArg04, FpuStack real64 rArg0)
void loop_test9(real32 rArg04, real64 rArg0)
{
	int32 dwLoc08_12 = 0x00;
	while (true)
	{
		globals->gbl_thiscall->vtbl->modify_double(globals->gbl_thiscall, dwLoc08_12, (real64) rArg04);
		if (rArg0 <= (real64) dwLoc08_12)
			break;
		rArg0 = (real64) rArg04;
		globals->gbl_thiscall->vtbl->set_double(globals->gbl_thiscall, rArg0);
		dwLoc08_12 = dwLoc08_12 + 0x01;
	}
	return;
}

// 004012A0: void const_div_test10(Stack word32 dwArg04)
void const_div_test10(word32 dwArg04)
{
	uint32 eax_16 = 0x0A;
	uint32 ecx_19 = 0x03;
	if (dwArg04 != 0x00)
	{
		eax_16 = 0x03;
		ecx_19 = 0x01;
	}
	globals->dw40301C = ecx_19;
	globals->dw403020 = eax_16;
	return;
}

// 004012D0: void loop_test11(Register word32 ecx, Register word32 ebp)
void loop_test11(word32 ecx, word32 ebp)
{
	struct Eq_223 * ebp_19 = fp - 0x04;
	while (*(ebp_19 - 0x04) > 0x00)
	{
		ui32 eax_26 = *(ebp_19 - 0x04);
		ui32 eax_27 = eax_26 & 0x80000001;
		if ((eax_26 & 0x80000001) < 0x00)
			eax_27 = ((eax_26 & 0x80000001) - 0x01 | ~0x01) + 0x01;
		if (eax_27 == 0x00)
		{
			*(ebp_19 - 0x08) = (real32) ebp_19->r0008;
			real64 rLoc1_44 = (real64) *(ebp_19 - 0x08);
			*(fp - 0x10) = ecx;
			*(fp - 0x10) = (real32) rLoc1_44;
			loop_test9(rArg00, rArg0);
		}
		else
		{
			*(fp - 0x14) = ebp_19->r0008;
			ebp_19 = nested_if_blocks_test8(rArg00, rArg0);
		}
		word32 ecx_38 = *(ebp_19 - 0x04);
		*(ebp_19 - 0x04) = ecx_38 - 0x01;
		ecx = ecx_38 - 0x01;
	}
	return;
}

// 00401330: void nested_structs_test12(Stack (ptr Eq_312) dwArg04)
void nested_structs_test12(nested_structs_type * dwArg04)
{
	dwArg04->dw0000 = 0x01;
	dwArg04->dw0004 = 0x02;
	dwArg04->dw0008 = 0x03;
	dwArg04->dw000C = 0x04;
	return;
}

// 00401360: void nested_structs_test13(Stack (ptr Eq_330) str)
void nested_structs_test13(nested_structs_type * str)
{
	nested_structs_test12(str);
	return;
}

