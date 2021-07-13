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
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t16[16];
    char t52[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    char *t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    char *t41;
    char *t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 2968U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 64U);
    t4 = (t0 + 2912U);
    xsi_variable_act(t4);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3088U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 64U);
    t4 = (t0 + 3032U);
    xsi_variable_act(t4);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2728U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 256U);
    t4 = (t0 + 2672U);
    xsi_variable_act(t4);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 8017);
    *((int *)t1) = 0;
    t2 = (t0 + 8021);
    *((int *)t2) = 63;
    t9 = 0;
    t10 = 63;

LAB34:    if (t9 <= t10)
        goto LAB35;

LAB37:
LAB3:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t0 + 7156U);
    t3 = (t0 + 8025);
    t7 = (t16 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (3 - 0);
    t13 = (t9 * 1);
    t13 = (t13 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t13;
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t16);
    if (t5 != 0)
        goto LAB43;

LAB45:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 7044U);
    t3 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t16, t2, t1, 1);
    t4 = (t0 + 2848U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    t8 = (t16 + 12U);
    t13 = *((unsigned int *)t8);
    t14 = (1U * t13);
    memcpy(t4, t3, t14);
    t17 = (t0 + 2792U);
    xsi_variable_act(t17);

LAB44:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t0 + 4472);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 256U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t0 + 4536);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t1 = (t0 + 4600);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 64U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t1 = (t0 + 4664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 64U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 4392);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 7993);
    t4 = (t0 + 2608U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 4U);
    t8 = (t0 + 2552U);
    xsi_variable_act(t8);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 7997);
    *((int *)t1) = 0;
    t2 = (t0 + 8001);
    *((int *)t2) = 63;
    t9 = 0;
    t10 = 63;

LAB5:    if (t9 <= t10)
        goto LAB6;

LAB8:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 8005);
    *((int *)t1) = 0;
    t2 = (t0 + 8009);
    *((int *)t2) = 63;
    t9 = 0;
    t10 = 63;

LAB19:    if (t9 <= t10)
        goto LAB20;

LAB22:    goto LAB3;

LAB6:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 7997);
    t11 = *((int *)t3);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t3));
    t14 = (4U * t13);
    t15 = (0 + t14);
    t7 = (t4 + t15);
    t8 = (t16 + 0U);
    t17 = (t8 + 0U);
    *((int *)t17) = 3;
    t17 = (t8 + 4U);
    *((int *)t17) = 0;
    t17 = (t8 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 3);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t8 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t0 + 2608U);
    t20 = *((char **)t17);
    t17 = (t0 + 7140U);
    t21 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t7, t16, t20, t17);
    if (t21 == 1)
        goto LAB15;

LAB16:    t6 = (unsigned char)0;

LAB17:    if (t6 == 1)
        goto LAB12;

LAB13:    t5 = (unsigned char)0;

LAB14:    if (t5 != 0)
        goto LAB9;

LAB11:
LAB10:
LAB7:    t1 = (t0 + 7997);
    t9 = *((int *)t1);
    t2 = (t0 + 8001);
    t10 = *((int *)t2);
    if (t9 == t10)
        goto LAB8;

LAB18:    t11 = (t9 + 1);
    t9 = t11;
    t3 = (t0 + 7997);
    *((int *)t3) = t9;
    goto LAB5;

LAB9:    xsi_set_current_line(113, ng0);
    t41 = (t0 + 1032U);
    t42 = *((char **)t41);
    t41 = (t0 + 7997);
    t43 = *((int *)t41);
    t44 = (t43 - 0);
    t45 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t41));
    t46 = (4U * t45);
    t47 = (0 + t46);
    t48 = (t42 + t47);
    t49 = (t0 + 2608U);
    t50 = *((char **)t49);
    t49 = (t50 + 0);
    memcpy(t49, t48, 4U);
    t51 = (t0 + 2552U);
    xsi_variable_act(t51);
    goto LAB10;

LAB12:    t31 = (t0 + 3088U);
    t32 = *((char **)t31);
    t31 = (t0 + 7997);
    t33 = *((int *)t31);
    t34 = (t33 - 63);
    t35 = (t34 * -1);
    xsi_vhdl_check_range_of_index(63, 0, -1, *((int *)t31));
    t36 = (1U * t35);
    t37 = (0 + t36);
    t38 = (t32 + t37);
    t39 = *((unsigned char *)t38);
    t40 = (t39 == (unsigned char)2);
    t5 = t40;
    goto LAB14;

LAB15:    t22 = (t0 + 2968U);
    t23 = *((char **)t22);
    t22 = (t0 + 7997);
    t24 = *((int *)t22);
    t25 = (t24 - 63);
    t19 = (t25 * -1);
    xsi_vhdl_check_range_of_index(63, 0, -1, *((int *)t22));
    t26 = (1U * t19);
    t27 = (0 + t26);
    t28 = (t23 + t27);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)3);
    t6 = t30;
    goto LAB17;

LAB20:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 3088U);
    t4 = *((char **)t3);
    t3 = (t0 + 8005);
    t11 = *((int *)t3);
    t12 = (t11 - 63);
    t13 = (t12 * -1);
    xsi_vhdl_check_range_of_index(63, 0, -1, *((int *)t3));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t7 = (t4 + t15);
    t5 = *((unsigned char *)t7);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB23;

LAB25:
LAB24:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t1 = (t0 + 8005);
    t11 = *((int *)t1);
    t12 = (t11 - 63);
    t13 = (t12 * -1);
    xsi_vhdl_check_range_of_index(63, 0, -1, *((int *)t1));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t3 = (t2 + t15);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB27;

LAB29:
LAB28:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t0 + 8005);
    t11 = *((int *)t1);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t1));
    t14 = (4U * t13);
    t15 = (0 + t14);
    t3 = (t2 + t15);
    t4 = (t16 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 3;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t18 = (0 - 3);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t19;
    t7 = (t0 + 8013);
    t17 = (t52 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = 0;
    t20 = (t17 + 4U);
    *((int *)t20) = 3;
    t20 = (t17 + 8U);
    *((int *)t20) = 1;
    t24 = (3 - 0);
    t19 = (t24 * 1);
    t19 = (t19 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t19;
    t5 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t3, t16, t7, t52);
    if (t5 != 0)
        goto LAB30;

LAB32:
LAB31:
LAB21:    t1 = (t0 + 8005);
    t9 = *((int *)t1);
    t2 = (t0 + 8009);
    t10 = *((int *)t2);
    if (t9 == t10)
        goto LAB22;

LAB33:    t11 = (t9 + 1);
    t9 = t11;
    t3 = (t0 + 8005);
    *((int *)t3) = t9;
    goto LAB19;

LAB23:    xsi_set_current_line(118, ng0);
    goto LAB21;

LAB26:    goto LAB24;

LAB27:    xsi_set_current_line(121, ng0);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t4 = (t0 + 8005);
    t18 = *((int *)t4);
    t24 = (t18 - 0);
    t19 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t4));
    t26 = (4U * t19);
    t27 = (0 + t26);
    t8 = (t7 + t27);
    t17 = (t52 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = 3;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t25 = (0 - 3);
    t35 = (t25 * -1);
    t35 = (t35 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t35;
    t20 = (t0 + 2608U);
    t22 = *((char **)t20);
    t20 = (t0 + 7140U);
    t23 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t16, t8, t52, t22, t20);
    t28 = (t0 + 2728U);
    t31 = *((char **)t28);
    t28 = (t0 + 8005);
    t33 = *((int *)t28);
    t34 = (t33 - 0);
    t35 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t28));
    t36 = (4U * t35);
    t37 = (0 + t36);
    t32 = (t31 + t37);
    t38 = (t16 + 12U);
    t45 = *((unsigned int *)t38);
    t46 = (1U * t45);
    memcpy(t32, t23, t46);
    t41 = (t0 + 2672U);
    xsi_variable_act(t41);
    goto LAB28;

LAB30:    xsi_set_current_line(124, ng0);
    t20 = (t0 + 2968U);
    t22 = *((char **)t20);
    t20 = (t0 + 8005);
    t25 = *((int *)t20);
    t33 = (t25 - 63);
    t19 = (t33 * -1);
    xsi_vhdl_check_range_of_index(63, 0, -1, *((int *)t20));
    t26 = (1U * t19);
    t27 = (0 + t26);
    t23 = (t22 + t27);
    *((unsigned char *)t23) = (unsigned char)2;
    t28 = (t0 + 2912U);
    xsi_variable_act(t28);
    goto LAB31;

LAB35:    xsi_set_current_line(129, ng0);
    t3 = (t0 + 3088U);
    t4 = *((char **)t3);
    t3 = (t0 + 8017);
    t11 = *((int *)t3);
    t12 = (t11 - 63);
    t13 = (t12 * -1);
    xsi_vhdl_check_range_of_index(63, 0, -1, *((int *)t3));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t7 = (t4 + t15);
    t5 = *((unsigned char *)t7);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB38;

LAB40:
LAB39:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t0 + 8017);
    t11 = *((int *)t1);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t1));
    t14 = (4U * t13);
    t15 = (0 + t14);
    t3 = (t2 + t15);
    t4 = (t52 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 3;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t18 = (0 - 3);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t19;
    t7 = (t0 + 2608U);
    t8 = *((char **)t7);
    t7 = (t0 + 7140U);
    t17 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t16, t3, t52, t8, t7);
    t20 = (t0 + 2728U);
    t22 = *((char **)t20);
    t20 = (t0 + 8017);
    t24 = *((int *)t20);
    t25 = (t24 - 0);
    t19 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t20));
    t26 = (4U * t19);
    t27 = (0 + t26);
    t23 = (t22 + t27);
    t28 = (t16 + 12U);
    t35 = *((unsigned int *)t28);
    t36 = (1U * t35);
    memcpy(t23, t17, t36);
    t31 = (t0 + 2672U);
    xsi_variable_act(t31);

LAB36:    t1 = (t0 + 8017);
    t9 = *((int *)t1);
    t2 = (t0 + 8021);
    t10 = *((int *)t2);
    if (t9 == t10)
        goto LAB37;

LAB42:    t11 = (t9 + 1);
    t9 = t11;
    t3 = (t0 + 8017);
    *((int *)t3) = t9;
    goto LAB34;

LAB38:    xsi_set_current_line(130, ng0);
    goto LAB36;

LAB41:    goto LAB39;

LAB43:    xsi_set_current_line(138, ng0);
    t8 = (t0 + 8029);
    *((int *)t8) = 0;
    t17 = (t0 + 8033);
    *((int *)t17) = 63;
    t10 = 0;
    t11 = 63;

LAB46:    if (t10 <= t11)
        goto LAB47;

LAB49:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 8037);
    t3 = (t0 + 2848U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 4U);
    t7 = (t0 + 2792U);
    xsi_variable_act(t7);
    goto LAB44;

LAB47:    xsi_set_current_line(139, ng0);
    t20 = (t0 + 2968U);
    t22 = *((char **)t20);
    t20 = (t0 + 8029);
    t12 = *((int *)t20);
    t18 = (t12 - 63);
    t13 = (t18 * -1);
    xsi_vhdl_check_range_of_index(63, 0, -1, *((int *)t20));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t23 = (t22 + t15);
    t6 = *((unsigned char *)t23);
    t21 = (t6 == (unsigned char)3);
    if (t21 != 0)
        goto LAB50;

LAB52:
LAB51:
LAB48:    t1 = (t0 + 8029);
    t10 = *((int *)t1);
    t2 = (t0 + 8033);
    t11 = *((int *)t2);
    if (t10 == t11)
        goto LAB49;

LAB53:    t9 = (t10 + 1);
    t10 = t9;
    t3 = (t0 + 8029);
    *((int *)t3) = t10;
    goto LAB46;

LAB50:    xsi_set_current_line(140, ng0);
    t28 = (t0 + 3088U);
    t31 = *((char **)t28);
    t28 = (t0 + 8029);
    t24 = *((int *)t28);
    t25 = (t24 - 63);
    t19 = (t25 * -1);
    xsi_vhdl_check_range_of_index(63, 0, -1, *((int *)t28));
    t26 = (1U * t19);
    t27 = (0 + t26);
    t32 = (t31 + t27);
    *((unsigned char *)t32) = (unsigned char)3;
    t38 = (t0 + 3032U);
    xsi_variable_act(t38);
    goto LAB51;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/sorter_test_bench5_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
