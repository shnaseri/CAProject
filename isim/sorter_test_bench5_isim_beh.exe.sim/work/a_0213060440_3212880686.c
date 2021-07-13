/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/UNI/term_4/CA/CAProject - Copy/Sorter.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_0213060440_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(219, ng0);
    t3 = (0.98999999999999999 * 1000000LL);
    t2 = (t0 + 2120);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t2 = (t0 + 1328U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((unsigned char *)t2) = t6;
    t8 = (t0 + 1272U);
    xsi_variable_act(t8);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t2 = (t0 + 2696);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t5;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}


extern void work_a_0213060440_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0213060440_3212880686_p_0};
	xsi_register_didat("work_a_0213060440_3212880686", "isim/sorter_test_bench5_isim_beh.exe.sim/work/a_0213060440_3212880686.didat");
	xsi_register_executes(pe);
}
