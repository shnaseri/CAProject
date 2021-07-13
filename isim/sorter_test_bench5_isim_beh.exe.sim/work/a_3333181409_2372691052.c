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
static const char *ng0 = "D:/UNI/term_4/CA/CAProject - Copy/sorter_test_bench5.vhd";



static void work_a_3333181409_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2280);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 8948);
    *((int *)t2) = 0;
    t4 = (t0 + 8952);
    *((int *)t4) = 63;
    t5 = 0;
    t6 = 63;

LAB8:    if (t5 <= t6)
        goto LAB9;

LAB11:    xsi_set_current_line(87, ng0);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(82, ng0);
    t7 = (t0 + 8956);
    t9 = (t0 + 1488U);
    t10 = *((char **)t9);
    t9 = (t0 + 8948);
    t11 = *((int *)t9);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, *((int *)t9));
    t14 = (4U * t13);
    t15 = (0 + t14);
    t16 = (t10 + t15);
    memcpy(t16, t7, 4U);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1488U);
    t4 = *((char **)t2);
    t2 = (t0 + 2856);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 64U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2280);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 8948);
    t5 = *((int *)t2);
    t4 = (t0 + 8952);
    t6 = *((int *)t4);
    if (t5 == t6)
        goto LAB11;

LAB16:    t11 = (t5 + 1);
    t5 = t11;
    t7 = (t0 + 8948);
    *((int *)t7) = t5;
    goto LAB8;

LAB12:    goto LAB10;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

}


extern void work_a_3333181409_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3333181409_2372691052_p_0};
	xsi_register_didat("work_a_3333181409_2372691052", "isim/sorter_test_bench5_isim_beh.exe.sim/work/a_3333181409_2372691052.didat");
	xsi_register_executes(pe);
}
