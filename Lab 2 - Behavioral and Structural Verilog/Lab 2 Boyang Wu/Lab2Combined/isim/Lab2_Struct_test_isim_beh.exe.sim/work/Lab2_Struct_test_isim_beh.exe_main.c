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
    work_m_00000000000563743842_2133763605_init();
    work_m_00000000000365804857_2781138418_init();
    work_m_00000000002752511248_3009977412_init();
    work_m_00000000000679601962_4071145242_init();
    work_m_00000000002814078794_2440596000_init();
    work_m_00000000003728977783_2907337957_init();
    work_m_00000000000830683176_2638830079_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000830683176_2638830079");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
