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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001944928637_0206628748_init();
    work_m_00000000002095298665_0736088723_init();
    work_m_00000000004240007141_1222934841_init();
    work_m_00000000000705407234_1591823675_init();
    work_m_00000000000178503473_3344761201_init();
    work_m_00000000004142774672_2212386731_init();
    work_m_00000000002226879511_1318882496_init();
    work_m_00000000004092268993_3190187988_init();
    work_m_00000000000935324551_0684981152_init();
    work_m_00000000003518325517_0086777906_init();
    work_m_00000000004135374803_3374405442_init();
    work_m_00000000002267696545_1961740041_init();
    work_m_00000000003428926433_0845492209_init();
    work_m_00000000000390436183_3463508887_init();
    work_m_00000000001649614238_1315427270_init();
    work_m_00000000002792380400_0572748282_init();
    work_m_00000000000907668929_2154713095_init();
    work_m_00000000000976389054_3027548060_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000976389054_3027548060");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
