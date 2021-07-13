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
static const char *ng0 = "P:/CA/CAProject/Sorter.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t16[16];
    char t32[16];
    char t38[16];
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
    char *t21;
    char *t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 256U);
    t4 = (t0 + 2352U);
    xsi_variable_act(t4);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 6465);
    *((int *)t1) = 0;
    t2 = (t0 + 6469);
    *((int *)t2) = 63;
    t9 = 0;
    t10 = 63;

LAB24:    if (t9 <= t10)
        goto LAB25;

LAB27:
LAB3:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 2408U);
    t2 = *((char **)t1);
    t1 = (t0 + 3912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 256U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3832);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 6445);
    t4 = (t0 + 2288U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 4U);
    t8 = (t0 + 2232U);
    xsi_variable_act(t8);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 6449);
    *((int *)t1) = 0;
    t2 = (t0 + 6453);
    *((int *)t2) = 63;
    t9 = 0;
    t10 = 63;

LAB5:    if (t9 <= t10)
        goto LAB6;

LAB8:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 6457);
    *((int *)t1) = 0;
    t2 = (t0 + 6461);
    *((int *)t2) = 63;
    t9 = 0;
    t10 = 63;

LAB13:    if (t9 <= t10)
        goto LAB14;

LAB16:    goto LAB3;

LAB6:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 6449);
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
    t17 = (t0 + 2288U);
    t20 = *((char **)t17);
    t17 = (t0 + 5816U);
    t5 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t7, t16, t20, t17);
    if (t5 != 0)
        goto LAB9;

LAB11:
LAB10:
LAB7:    t1 = (t0 + 6449);
    t9 = *((int *)t1);
    t2 = (t0 + 6453);
    t10 = *((int *)t2);
    if (t9 == t10)
        goto LAB8;

LAB12:    t11 = (t9 + 1);
    t9 = t11;
    t3 = (t0 + 6449);
    *((int *)t3) = t9;
    goto LAB5;

LAB9:    xsi_set_current_line(103, ng0);
    t21 = (t0 + 1032U);
    t22 = *((char **)t21);
    t21 = (t0 + 6449);
    t23 = *((int *)t21);
    t24 = (t23 - 0);
    t19 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t21));
    t25 = (4U * t19);
    t26 = (0 + t25);
    t27 = (t22 + t26);
    t28 = (t0 + 2288U);
    t29 = *((char **)t28);
    t28 = (t29 + 0);
    memcpy(t28, t27, 4U);
    t30 = (t0 + 2232U);
    xsi_variable_act(t30);
    goto LAB10;

LAB14:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 6457);
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
    t17 = (t0 + 2288U);
    t20 = *((char **)t17);
    t17 = (t0 + 5816U);
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t16, t20, t17);
    if (t5 != 0)
        goto LAB17;

LAB19:
LAB18:
LAB15:    t1 = (t0 + 6457);
    t9 = *((int *)t1);
    t2 = (t0 + 6461);
    t10 = *((int *)t2);
    if (t9 == t10)
        goto LAB16;

LAB23:    t11 = (t9 + 1);
    t9 = t11;
    t3 = (t0 + 6457);
    *((int *)t3) = t9;
    goto LAB13;

LAB17:    xsi_set_current_line(108, ng0);
    t21 = (t0 + 1352U);
    t22 = *((char **)t21);
    t21 = (t0 + 6457);
    t23 = *((int *)t21);
    t24 = (t23 - 63);
    t19 = (t24 * -1);
    xsi_vhdl_check_range_of_index(63, 0, -1, *((int *)t21));
    t25 = (1U * t19);
    t26 = (0 + t25);
    t27 = (t22 + t26);
    t6 = *((unsigned char *)t27);
    t31 = (t6 == (unsigned char)3);
    if (t31 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(109, ng0);
    t28 = (t0 + 1032U);
    t29 = *((char **)t28);
    t28 = (t0 + 6457);
    t33 = *((int *)t28);
    t34 = (t33 - 0);
    t35 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t28));
    t36 = (4U * t35);
    t37 = (0 + t36);
    t30 = (t29 + t37);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 3;
    t40 = (t39 + 4U);
    *((int *)t40) = 0;
    t40 = (t39 + 8U);
    *((int *)t40) = -1;
    t41 = (0 - 3);
    t42 = (t41 * -1);
    t42 = (t42 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t42;
    t40 = (t0 + 2288U);
    t43 = *((char **)t40);
    t40 = (t0 + 5816U);
    t44 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t32, t30, t38, t43, t40);
    t45 = (t0 + 2408U);
    t46 = *((char **)t45);
    t45 = (t0 + 6457);
    t47 = *((int *)t45);
    t48 = (t47 - 0);
    t42 = (t48 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t45));
    t49 = (4U * t42);
    t50 = (0 + t49);
    t51 = (t46 + t50);
    t52 = (t32 + 12U);
    t53 = *((unsigned int *)t52);
    t54 = (1U * t53);
    memcpy(t51, t44, t54);
    t55 = (t0 + 2352U);
    xsi_variable_act(t55);
    goto LAB21;

LAB25:    xsi_set_current_line(115, ng0);
    t3 = (t0 + 2408U);
    t4 = *((char **)t3);
    t3 = (t0 + 6465);
    t11 = *((int *)t3);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t3));
    t14 = (4U * t13);
    t15 = (0 + t14);
    t7 = (t4 + t15);
    t8 = (t32 + 0U);
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
    t17 = (t0 + 2288U);
    t20 = *((char **)t17);
    t17 = (t0 + 5816U);
    t21 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t16, t7, t32, t20, t17);
    t22 = (t0 + 2408U);
    t27 = *((char **)t22);
    t22 = (t0 + 6465);
    t23 = *((int *)t22);
    t24 = (t23 - 0);
    t19 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, *((int *)t22));
    t25 = (4U * t19);
    t26 = (0 + t25);
    t28 = (t27 + t26);
    t29 = (t16 + 12U);
    t35 = *((unsigned int *)t29);
    t36 = (1U * t35);
    memcpy(t28, t21, t36);
    t30 = (t0 + 2352U);
    xsi_variable_act(t30);

LAB26:    t1 = (t0 + 6465);
    t9 = *((int *)t1);
    t2 = (t0 + 6469);
    t10 = *((int *)t2);
    if (t9 == t10)
        goto LAB27;

LAB28:    t11 = (t9 + 1);
    t9 = t11;
    t3 = (t0 + 6465);
    *((int *)t3) = t9;
    goto LAB24;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/Sorter_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
