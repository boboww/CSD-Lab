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
static const char *ng0 = "C:/Users/Bo/Dropbox/School/Spring 2018/CDA 4203L Computer System Design Lab/CSD-Lab/Lab 5 - GCD FSM and Datapath/Lab5/Lab5_seq.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {11U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {12U, 0U};



static void Always_52_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 8616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 8936);
    *((int *)t2) = 1;
    t3 = (t0 + 8648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 7696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5136);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4416U);
    t3 = *((char **)t2);
    t2 = (t0 + 5296);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4576U);
    t3 = *((char **)t2);
    t2 = (t0 + 5456);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 7376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5616);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 7056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5776);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 7216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5936);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 6896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6096);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3776U);
    t3 = *((char **)t2);
    t2 = (t0 + 6256);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3936U);
    t3 = *((char **)t2);
    t2 = (t0 + 6416);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4096U);
    t3 = *((char **)t2);
    t2 = (t0 + 6576);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4256U);
    t3 = *((char **)t2);
    t2 = (t0 + 6736);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3296U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 7696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB2;

LAB6:    xsi_set_current_line(65, ng0);

LAB9:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7376);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(76, ng0);

LAB38:    xsi_set_current_line(77, ng0);
    t6 = (t0 + 4976);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t14);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(79, ng0);

LAB43:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB41:    goto LAB37;

LAB13:    xsi_set_current_line(84, ng0);

LAB44:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 2816U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(87, ng0);

LAB49:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB47:    goto LAB37;

LAB15:    xsi_set_current_line(92, ng0);

LAB50:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB37;

LAB17:    xsi_set_current_line(96, ng0);

LAB51:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 7216);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB37;

LAB19:    xsi_set_current_line(102, ng0);

LAB52:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 7376);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB37;

LAB21:    xsi_set_current_line(108, ng0);

LAB53:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 6896);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4416U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(115, ng0);

LAB58:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB56:    goto LAB37;

LAB23:    xsi_set_current_line(120, ng0);

LAB59:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 4576U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(123, ng0);

LAB64:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB62:    goto LAB37;

LAB25:    xsi_set_current_line(128, ng0);

LAB65:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7376);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 7056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB37;

LAB27:    xsi_set_current_line(134, ng0);

LAB66:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7216);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB37;

LAB29:    xsi_set_current_line(140, ng0);

LAB67:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB37;

LAB31:    xsi_set_current_line(144, ng0);

LAB68:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB37;

LAB33:    xsi_set_current_line(148, ng0);

LAB69:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 7536);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB37;

LAB35:    xsi_set_current_line(153, ng0);

LAB70:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 4976);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB37;

LAB39:    xsi_set_current_line(77, ng0);

LAB42:    xsi_set_current_line(78, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 4, 0LL);
    goto LAB41;

LAB45:    xsi_set_current_line(85, ng0);

LAB48:    xsi_set_current_line(86, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB47;

LAB54:    xsi_set_current_line(113, ng0);

LAB57:    xsi_set_current_line(114, ng0);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB56;

LAB60:    xsi_set_current_line(121, ng0);

LAB63:    xsi_set_current_line(122, ng0);
    t6 = ((char*)((ng11)));
    t7 = (t0 + 7696);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    goto LAB62;

}


extern void work_m_00000000004059655589_1455031636_init()
{
	static char *pe[] = {(void *)Always_52_0};
	xsi_register_didat("work_m_00000000004059655589_1455031636", "isim/Lab5_test_isim_beh.exe.sim/work/m_00000000004059655589_1455031636.didat");
	xsi_register_executes(pe);
}
