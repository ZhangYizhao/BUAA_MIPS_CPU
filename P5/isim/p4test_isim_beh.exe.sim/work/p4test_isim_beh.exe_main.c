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
    work_m_00000000001842349719_0206628748_init();
    work_m_00000000000395907735_0736088723_init();
    work_m_00000000003284349975_1222934841_init();
    work_m_00000000002301949130_1591823675_init();
    work_m_00000000003756928005_3344761201_init();
    work_m_00000000004142774672_2212386731_init();
    work_m_00000000002226879511_1318882496_init();
    work_m_00000000004092268993_3190187988_init();
    work_m_00000000000935324551_0684981152_init();
    work_m_00000000003145461871_0086777906_init();
    work_m_00000000004135374803_3374405442_init();
    work_m_00000000000956272971_1961740041_init();
    work_m_00000000002189904035_3463508887_init();
    work_m_00000000001649614238_1315427270_init();
    work_m_00000000001991156516_0572748282_init();
    work_m_00000000003952433316_2154713095_init();
    work_m_00000000002507527684_3027548060_init();
    work_m_00000000003816977114_3345919226_init();
    work_m_00000000002413572763_2809003733_init();
    work_m_00000000003492266734_3877310806_init();
    work_m_00000000002047498008_1893814666_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_1893814666");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
