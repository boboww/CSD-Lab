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
static const char *ng0 = "C:/Users/Warren/Desktop/Lab4/debounce.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;

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
    memset(t7, 0, 8);
    t10 = (t7 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 1U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 1U);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t6, 1);
    t18 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t5);
    t15 = (t14 & t13);
    t16 = (t15 & 3U);
    if (t16 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t6) == 0)
        goto LAB6;

LAB8:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;

LAB9:    t9 = (t4 + 4);
    t17 = *((unsigned int *)t9);
    t19 = (~(t17));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 | t13);
    if (t14 != 3U)
        goto LAB14;

LAB13:    if (*((unsigned int *)t6) == 0)
        goto LAB15;

LAB16:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;

LAB14:    t9 = (t4 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t19 = (t17 & t16);
    t20 = (t19 != 0);
    if (t20 > 0)
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
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB17:    xsi_set_current_line(19, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 1, 0LL);
    goto LAB19;

}


extern void work_m_00000000001411085563_1832158028_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000001411085563_1832158028", "isim/Lab4_test_isim_beh.exe.sim/work/m_00000000001411085563_1832158028.didat");
	xsi_register_executes(pe);
}
