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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_1242562249;
char *IEEE_P_3499444699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *IEEE_P_2592010699;
char *WORK_P_1475539293;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    work_p_1475539293_init();
    work_a_3501706103_3212880686_init();
    work_a_1208337864_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_0213060440_3212880686_init();
    work_a_2474118058_3212880686_init();
    work_a_3912493251_3212880686_init();
    work_a_3333181409_2372691052_init();


    xsi_register_tops("work_a_3333181409_2372691052");

    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    WORK_P_1475539293 = xsi_get_engine_memory("work_p_1475539293");

    return xsi_run_simulation(argc, argv);

}
