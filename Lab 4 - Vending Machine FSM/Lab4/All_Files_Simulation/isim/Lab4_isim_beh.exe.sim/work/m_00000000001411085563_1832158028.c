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
static const char *ng0 = "C:/Users/Warren/Desktop/Lab4 COMPLETELY WORKING/Lab4/debounce.v";
static int ng1[] = {-1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};



static void Always_11_0(char *t0)
{
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3144);
    *((int *)t2) = 1;
    t3 = (t0 + 2856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t5 = (t0 + 1344U);
    t6 = *((char **)t5);
    t5 = (t0 + 1904);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1904);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    t14 = ((char*)((ng2)));
    xsi_vlog_generic_get_part_select_value(t7, 2, t9, t12, 2, t13, 32U, 1, t14, 32U, 1);
    xsi_vlogtype_concat(t4, 3, 3, 2U, t7, 2, t6, 1);
    t15 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t15, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    t18 = *((unsigned int *)t5);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t6) == 0)
        goto LAB6;

LAB8:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;

LAB9:    t9 = (t4 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    if (t18 != 1U)
        goto LAB14;

LAB13:    if (*((unsigned int *)t6) == 0)
        goto LAB15;

LAB16:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;

LAB14:    t9 = (t4 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    t21 = *((unsigned int *)t4);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB19:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(16, ng0);
    t10 = ((char*)((ng3)));
    t11 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB17:    xsi_set_current_line(19, ng0);
    t10 = ((char*)((ng4)));
    t11 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 1, 0LL);
    goto LAB19;

}


extern void work_m_00000000001411085563_1832158028_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000001411085563_1832158028", "isim/Lab4_isim_beh.exe.sim/work/m_00000000001411085563_1832158028.didat");
	xsi_register_executes(pe);
}
