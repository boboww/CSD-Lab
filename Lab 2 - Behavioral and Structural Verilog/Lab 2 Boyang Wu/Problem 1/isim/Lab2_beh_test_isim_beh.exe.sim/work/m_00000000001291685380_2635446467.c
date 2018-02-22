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
static const char *ng0 = "C:/Users/Bo/Dropbox/School/Spring 2018/CDA 4203L Computer System Design Lab/Lab 2 - Behavioral and Structural Verilog/Problem 1/Lab2_beh.v";



static void Always_8_0(char *t0)
{
    char t4[8];
    char t13[8];
    char t22[8];
    char t60[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8, ng0);

LAB5:    xsi_set_current_line(9, ng0);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t14 = (t0 + 1368U);
    t15 = *((char **)t14);
    memset(t13, 0, 8);
    t14 = (t15 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t14) == 0)
        goto LAB10;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;

LAB13:    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t13);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t4 + 4);
    t27 = (t13 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB14;

LAB15:
LAB16:    t54 = (t22 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t22);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t2) == 0)
        goto LAB22;

LAB24:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB25:    t6 = (t0 + 1368U);
    t12 = *((char **)t6);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t12);
    t18 = (t16 & t17);
    *((unsigned int *)t13) = t18;
    t6 = (t4 + 4);
    t14 = (t12 + 4);
    t15 = (t13 + 4);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t14);
    t23 = (t19 | t20);
    *((unsigned int *)t15) = t23;
    t24 = *((unsigned int *)t15);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB26;

LAB27:
LAB28:    t27 = (t13 + 4);
    t49 = *((unsigned int *)t27);
    t50 = (~(t49));
    t51 = *((unsigned int *)t13);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t2) == 0)
        goto LAB32;

LAB34:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;

LAB35:    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t4);
    t18 = (t16 & t17);
    *((unsigned int *)t13) = t18;
    t12 = (t3 + 4);
    t14 = (t4 + 4);
    t15 = (t13 + 4);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    t23 = (t19 | t20);
    *((unsigned int *)t15) = t23;
    t24 = *((unsigned int *)t15);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB36;

LAB37:
LAB38:    t27 = (t13 + 4);
    t49 = *((unsigned int *)t27);
    t50 = (~(t49));
    t51 = *((unsigned int *)t13);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t4) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t16 = (t10 | t11);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t12);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB42;

LAB43:
LAB44:    t21 = (t4 + 4);
    t42 = *((unsigned int *)t21);
    t43 = (~(t42));
    t44 = *((unsigned int *)t4);
    t45 = (t44 & t43);
    t48 = (t45 != 0);
    if (t48 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t4 + 4);
    t37 = (t13 + 4);
    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB16;

LAB17:    xsi_set_current_line(10, ng0);
    t61 = (t0 + 1048U);
    t62 = *((char **)t61);
    memset(t60, 0, 8);
    t61 = (t60 + 4);
    t63 = (t62 + 4);
    t64 = *((unsigned int *)t62);
    t65 = (~(t64));
    *((unsigned int *)t60) = t65;
    *((unsigned int *)t61) = 0;
    if (*((unsigned int *)t63) != 0)
        goto LAB21;

LAB20:    t70 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t70 & 15U);
    t71 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t71 & 15U);
    t72 = (t0 + 1928);
    xsi_vlogvar_assign_value(t72, t60, 0, 0, 4);
    goto LAB19;

LAB21:    t66 = *((unsigned int *)t60);
    t67 = *((unsigned int *)t63);
    *((unsigned int *)t60) = (t66 | t67);
    t68 = *((unsigned int *)t61);
    t69 = *((unsigned int *)t63);
    *((unsigned int *)t61) = (t68 | t69);
    goto LAB20;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t15);
    *((unsigned int *)t13) = (t29 | t30);
    t21 = (t4 + 4);
    t26 = (t12 + 4);
    t31 = *((unsigned int *)t4);
    t32 = (~(t31));
    t33 = *((unsigned int *)t21);
    t34 = (~(t33));
    t35 = *((unsigned int *)t12);
    t38 = (~(t35));
    t39 = *((unsigned int *)t26);
    t40 = (~(t39));
    t46 = (t32 & t34);
    t47 = (t38 & t40);
    t41 = (~(t46));
    t42 = (~(t47));
    t43 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t43 & t41);
    t44 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t44 & t42);
    t45 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t45 & t41);
    t48 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t48 & t42);
    goto LAB28;

LAB29:    xsi_set_current_line(12, ng0);
    t28 = (t0 + 1048U);
    t36 = *((char **)t28);
    t28 = (t0 + 1208U);
    t37 = *((char **)t28);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 4, t36, 4, t37, 4);
    t28 = (t0 + 1928);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 4);
    goto LAB31;

LAB32:    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB36:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t15);
    *((unsigned int *)t13) = (t29 | t30);
    t21 = (t3 + 4);
    t26 = (t4 + 4);
    t31 = *((unsigned int *)t3);
    t32 = (~(t31));
    t33 = *((unsigned int *)t21);
    t34 = (~(t33));
    t35 = *((unsigned int *)t4);
    t38 = (~(t35));
    t39 = *((unsigned int *)t26);
    t40 = (~(t39));
    t46 = (t32 & t34);
    t47 = (t38 & t40);
    t41 = (~(t46));
    t42 = (~(t47));
    t43 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t43 & t41);
    t44 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t44 & t42);
    t45 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t45 & t41);
    t48 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t48 & t42);
    goto LAB38;

LAB39:    xsi_set_current_line(14, ng0);
    t28 = (t0 + 1048U);
    t36 = *((char **)t28);
    t28 = (t0 + 1208U);
    t37 = *((char **)t28);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 4, t36, 4, t37, 4);
    t28 = (t0 + 1928);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 4);
    goto LAB41;

LAB42:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t19 | t20);
    t14 = (t3 + 4);
    t15 = (t5 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t29 = (~(t25));
    t30 = *((unsigned int *)t5);
    t31 = (~(t30));
    t32 = *((unsigned int *)t15);
    t33 = (~(t32));
    t46 = (t24 & t29);
    t47 = (t31 & t33);
    t34 = (~(t46));
    t35 = (~(t47));
    t38 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t38 & t34);
    t39 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t39 & t35);
    t40 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t40 & t34);
    t41 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t41 & t35);
    goto LAB44;

LAB45:    xsi_set_current_line(16, ng0);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    t26 = (t0 + 1048U);
    t28 = *((char **)t26);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t27, 4, t28, 4);
    t26 = (t0 + 1928);
    xsi_vlogvar_assign_value(t26, t13, 0, 0, 4);
    goto LAB47;

}


extern void work_m_00000000001291685380_2635446467_init()
{
	static char *pe[] = {(void *)Always_8_0};
	xsi_register_didat("work_m_00000000001291685380_2635446467", "isim/Lab2_beh_test_isim_beh.exe.sim/work/m_00000000001291685380_2635446467.didat");
	xsi_register_executes(pe);
}
