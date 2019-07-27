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
    work_m_00000000000529483028_2891654871_init();
    work_m_00000000001794163214_3311034223_init();
    work_m_00000000002549497661_1240436890_init();
    work_m_00000000002663162701_1781988403_init();
    work_m_00000000003194584965_3875733542_init();
    work_m_00000000003819480832_0382540995_init();
    work_m_00000000003098453918_1455031636_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003098453918_1455031636");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
