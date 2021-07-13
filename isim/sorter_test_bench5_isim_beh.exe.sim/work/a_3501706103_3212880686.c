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
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_3501706103_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 14952);
    *((int *)t1) = 0;
    t2 = (t0 + 14956);
    *((int *)t2) = 63;
    t6 = 0;
    t7 = 63;

LAB10:    if (t6 <= t7)
        goto LAB11;

LAB13:
LAB3:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 14968);
    *((int *)t1) = 0;
    t2 = (t0 + 14972);
    *((int *)t2) = 63;
    t6 = 0;
    t7 = 63;

LAB23:    if (t6 <= t7)
        goto LAB24;

LAB26:
LAB16:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t1 = (t0 + 4032);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 256U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 14944);
    *((int *)t1) = 0;
    t5 = (t0 + 14948);
    *((int *)t5) = 63;
    t6 = 0;
    t7 = 63;

LAB5:    if (t6 <= t7)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(56, ng0);
    t8 = (t0 + 2288U);
    t9 = *((char **)t8);
    t8 = (t0 + 1032U);
    t10 = *((char **)t8);
    t8 = (t0 + 6128U);
    t11 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t10, t8);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t11);
    t14 = (4U * t13);
    t15 = (t0 + 14944);
    t16 = *((int *)t15);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t15));
    t19 = (64U * t18);
    t20 = (0 + t19);
    t21 = (t20 + t14);
    t22 = (t9 + t21);
    t23 = (t0 + 2528U);
    t24 = *((char **)t23);
    t23 = (t0 + 14944);
    t25 = *((int *)t23);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t23));
    t28 = (4U * t27);
    t29 = (0 + t28);
    t30 = (t24 + t29);
    memcpy(t30, t22, 4U);
    t31 = (t0 + 2472U);
    xsi_variable_act(t31);

LAB7:    t1 = (t0 + 14944);
    t6 = *((int *)t1);
    t2 = (t0 + 14948);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB8;

LAB9:    t11 = (t6 + 1);
    t6 = t11;
    t5 = (t0 + 14944);
    *((int *)t5) = t6;
    goto LAB5;

LAB11:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 2408U);
    t8 = *((char **)t5);
    t5 = (t0 + 1032U);
    t9 = *((char **)t5);
    t5 = (t0 + 6128U);
    t11 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t9, t5);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t11);
    t14 = (4U * t13);
    t10 = (t0 + 14952);
    t16 = *((int *)t10);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t10));
    t19 = (64U * t18);
    t20 = (0 + t19);
    t21 = (t20 + t14);
    t15 = (t8 + t21);
    t22 = (t0 + 2528U);
    t23 = *((char **)t22);
    t22 = (t0 + 14952);
    t25 = *((int *)t22);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t22));
    t28 = (4U * t27);
    t29 = (0 + t28);
    t24 = (t23 + t29);
    memcpy(t24, t15, 4U);
    t30 = (t0 + 2472U);
    xsi_variable_act(t30);

LAB12:    t1 = (t0 + 14952);
    t6 = *((int *)t1);
    t2 = (t0 + 14956);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB13;

LAB14:    t11 = (t6 + 1);
    t6 = t11;
    t5 = (t0 + 14952);
    *((int *)t5) = t6;
    goto LAB10;

LAB15:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 14960);
    *((int *)t1) = 0;
    t5 = (t0 + 14964);
    *((int *)t5) = 63;
    t6 = 0;
    t7 = 63;

LAB18:    if (t6 <= t7)
        goto LAB19;

LAB21:    goto LAB16;

LAB19:    xsi_set_current_line(65, ng0);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t8 = (t0 + 14960);
    t11 = *((int *)t8);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t8));
    t14 = (4U * t13);
    t18 = (0 + t14);
    t10 = (t9 + t18);
    t15 = (t0 + 2288U);
    t22 = *((char **)t15);
    t15 = (t0 + 1032U);
    t23 = *((char **)t15);
    t15 = (t0 + 6128U);
    t16 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t23, t15);
    t17 = (t16 - 0);
    t19 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t16);
    t20 = (4U * t19);
    t24 = (t0 + 14960);
    t25 = *((int *)t24);
    t26 = (t25 - 0);
    t21 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t24));
    t27 = (64U * t21);
    t28 = (0 + t27);
    t29 = (t28 + t20);
    t30 = (t22 + t29);
    memcpy(t30, t10, 4U);
    t31 = (t0 + 2232U);
    xsi_variable_act(t31);

LAB20:    t1 = (t0 + 14960);
    t6 = *((int *)t1);
    t2 = (t0 + 14964);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB21;

LAB22:    t11 = (t6 + 1);
    t6 = t11;
    t5 = (t0 + 14960);
    *((int *)t5) = t6;
    goto LAB18;

LAB24:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 1192U);
    t8 = *((char **)t5);
    t5 = (t0 + 14968);
    t11 = *((int *)t5);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t5));
    t14 = (4U * t13);
    t18 = (0 + t14);
    t9 = (t8 + t18);
    t10 = (t0 + 2408U);
    t15 = *((char **)t10);
    t10 = (t0 + 1032U);
    t22 = *((char **)t10);
    t10 = (t0 + 6128U);
    t16 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t22, t10);
    t17 = (t16 - 0);
    t19 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t16);
    t20 = (4U * t19);
    t23 = (t0 + 14968);
    t25 = *((int *)t23);
    t26 = (t25 - 0);
    t21 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t23));
    t27 = (64U * t21);
    t28 = (0 + t27);
    t29 = (t28 + t20);
    t24 = (t15 + t29);
    memcpy(t24, t9, 4U);
    t30 = (t0 + 2352U);
    xsi_variable_act(t30);

LAB25:    t1 = (t0 + 14968);
    t6 = *((int *)t1);
    t2 = (t0 + 14972);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB26;

LAB27:    t11 = (t6 + 1);
    t6 = t11;
    t5 = (t0 + 14968);
    *((int *)t5) = t6;
    goto LAB23;

}


extern void work_a_3501706103_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3501706103_3212880686_p_0};
	xsi_register_didat("work_a_3501706103_3212880686", "isim/sorter_test_bench5_isim_beh.exe.sim/work/a_3501706103_3212880686.didat");
	xsi_register_executes(pe);
}
