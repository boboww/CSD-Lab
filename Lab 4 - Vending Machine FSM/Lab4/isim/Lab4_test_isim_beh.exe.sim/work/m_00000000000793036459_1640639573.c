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
static const char *ng0 = "C:/Users/Bo/Dropbox/School/Spring 2018/CDA 4203L Computer System Design Lab/CSD-Lab/Lab 4 - Vending Machine FSM/Lab4/Lab4.v";
static unsigned int ng1[] = {9U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};



static void Always_35_0(char *t0)
{
    char t8[8];
    char t22[8];
    char t39[8];
    char t40[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;

LAB0:    t1 = (t0 + 6192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 7008);
    *((int *)t2) = 1;
    t3 = (t0 + 6224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 4952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4792);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4952);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4632);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t8 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    memcpy(t48, t22, 8);

LAB16:    t76 = (t48 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t48);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB2;

LAB8:    t21 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 5272);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng2)));
    memset(t39, 0, 8);
    xsi_vlog_signed_equal(t39, 32, t37, 32, t38, 32);
    memset(t40, 0, 8);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t39);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t41) != 0)
        goto LAB19;

LAB20:    t49 = *((unsigned int *)t22);
    t50 = *((unsigned int *)t40);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = (t22 + 4);
    t53 = (t40 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t40) = 1;
    goto LAB20;

LAB19:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB20;

LAB21:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    t62 = (t22 + 4);
    t63 = (t40 + 4);
    t64 = *((unsigned int *)t62);
    t65 = (~(t64));
    t66 = *((unsigned int *)t22);
    t67 = (t66 & t65);
    t68 = *((unsigned int *)t63);
    t69 = (~(t68));
    t70 = *((unsigned int *)t40);
    t71 = (t70 & t69);
    t72 = (~(t67));
    t73 = (~(t71));
    t74 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t74 & t72);
    t75 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t75 & t73);
    goto LAB23;

LAB24:    xsi_set_current_line(39, ng0);

LAB27:    xsi_set_current_line(40, ng0);
    t82 = ((char*)((ng3)));
    t83 = (t0 + 5112);
    xsi_vlogvar_assign_value(t83, t82, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB26;

}

static void Always_45_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 6440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 7024);
    *((int *)t2) = 1;
    t3 = (t0 + 6472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4472);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

static void Always_49_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 7040);
    *((int *)t2) = 1;
    t3 = (t0 + 6720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 4952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4152);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(56, ng0);

LAB36:    xsi_set_current_line(57, ng0);
    t6 = (t0 + 2952U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB9:    xsi_set_current_line(66, ng0);

LAB49:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB35;

LAB11:    xsi_set_current_line(76, ng0);

LAB62:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB63;

LAB64:
LAB65:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB67;

LAB68:
LAB69:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB71;

LAB72:
LAB73:    goto LAB35;

LAB13:    xsi_set_current_line(86, ng0);

LAB75:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB76;

LAB77:
LAB78:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB80;

LAB81:
LAB82:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB84;

LAB85:
LAB86:    goto LAB35;

LAB15:    xsi_set_current_line(96, ng0);

LAB88:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB89;

LAB90:
LAB91:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB93;

LAB94:
LAB95:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB97;

LAB98:
LAB99:    goto LAB35;

LAB17:    xsi_set_current_line(106, ng0);

LAB101:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB102;

LAB103:
LAB104:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB110;

LAB111:
LAB112:    goto LAB35;

LAB19:    xsi_set_current_line(116, ng0);

LAB114:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB115;

LAB116:
LAB117:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB119;

LAB120:
LAB121:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB123;

LAB124:
LAB125:    goto LAB35;

LAB21:    xsi_set_current_line(126, ng0);

LAB127:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB128;

LAB129:
LAB130:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB132;

LAB133:
LAB134:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB136;

LAB137:
LAB138:    goto LAB35;

LAB23:    xsi_set_current_line(136, ng0);

LAB140:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB141;

LAB142:
LAB143:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB145;

LAB146:
LAB147:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB149;

LAB150:
LAB151:    goto LAB35;

LAB25:    xsi_set_current_line(146, ng0);

LAB153:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 3432U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB154;

LAB155:
LAB156:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB158;

LAB159:
LAB160:    goto LAB35;

LAB27:    xsi_set_current_line(154, ng0);

LAB162:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4472);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB35;

LAB29:    xsi_set_current_line(159, ng0);

LAB163:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4472);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 5112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB35;

LAB31:    xsi_set_current_line(164, ng0);

LAB164:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4472);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB35;

LAB33:    xsi_set_current_line(169, ng0);

LAB165:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4472);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB35;

LAB37:    xsi_set_current_line(57, ng0);

LAB40:    xsi_set_current_line(58, ng0);
    t14 = ((char*)((ng5)));
    t15 = (t0 + 5112);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    goto LAB39;

LAB41:    xsi_set_current_line(59, ng0);

LAB44:    xsi_set_current_line(60, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB43;

LAB45:    xsi_set_current_line(61, ng0);

LAB48:    xsi_set_current_line(62, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB47;

LAB50:    xsi_set_current_line(67, ng0);

LAB53:    xsi_set_current_line(68, ng0);
    t6 = ((char*)((ng8)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB52;

LAB54:    xsi_set_current_line(69, ng0);

LAB57:    xsi_set_current_line(70, ng0);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB56;

LAB58:    xsi_set_current_line(71, ng0);

LAB61:    xsi_set_current_line(72, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB60;

LAB63:    xsi_set_current_line(77, ng0);

LAB66:    xsi_set_current_line(78, ng0);
    t6 = ((char*)((ng10)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB65;

LAB67:    xsi_set_current_line(79, ng0);

LAB70:    xsi_set_current_line(80, ng0);
    t5 = ((char*)((ng11)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB69;

LAB71:    xsi_set_current_line(81, ng0);

LAB74:    xsi_set_current_line(82, ng0);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB73;

LAB76:    xsi_set_current_line(87, ng0);

LAB79:    xsi_set_current_line(88, ng0);
    t6 = ((char*)((ng12)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB78;

LAB80:    xsi_set_current_line(89, ng0);

LAB83:    xsi_set_current_line(90, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB82;

LAB84:    xsi_set_current_line(91, ng0);

LAB87:    xsi_set_current_line(92, ng0);
    t5 = ((char*)((ng11)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB86;

LAB89:    xsi_set_current_line(97, ng0);

LAB92:    xsi_set_current_line(98, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB91;

LAB93:    xsi_set_current_line(99, ng0);

LAB96:    xsi_set_current_line(100, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB95;

LAB97:    xsi_set_current_line(101, ng0);

LAB100:    xsi_set_current_line(102, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB99;

LAB102:    xsi_set_current_line(107, ng0);

LAB105:    xsi_set_current_line(108, ng0);
    t6 = ((char*)((ng13)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB104;

LAB106:    xsi_set_current_line(109, ng0);

LAB109:    xsi_set_current_line(110, ng0);
    t5 = ((char*)((ng10)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB108;

LAB110:    xsi_set_current_line(111, ng0);

LAB113:    xsi_set_current_line(112, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB112;

LAB115:    xsi_set_current_line(117, ng0);

LAB118:    xsi_set_current_line(118, ng0);
    t6 = ((char*)((ng14)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB117;

LAB119:    xsi_set_current_line(119, ng0);

LAB122:    xsi_set_current_line(120, ng0);
    t5 = ((char*)((ng12)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB121;

LAB123:    xsi_set_current_line(121, ng0);

LAB126:    xsi_set_current_line(122, ng0);
    t5 = ((char*)((ng10)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB125;

LAB128:    xsi_set_current_line(127, ng0);

LAB131:    xsi_set_current_line(128, ng0);
    t6 = ((char*)((ng15)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB130;

LAB132:    xsi_set_current_line(129, ng0);

LAB135:    xsi_set_current_line(130, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB134;

LAB136:    xsi_set_current_line(131, ng0);

LAB139:    xsi_set_current_line(132, ng0);
    t5 = ((char*)((ng12)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB138;

LAB141:    xsi_set_current_line(137, ng0);

LAB144:    xsi_set_current_line(138, ng0);
    t6 = ((char*)((ng16)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB143;

LAB145:    xsi_set_current_line(139, ng0);

LAB148:    xsi_set_current_line(140, ng0);
    t5 = ((char*)((ng13)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB147;

LAB149:    xsi_set_current_line(141, ng0);

LAB152:    xsi_set_current_line(142, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB151;

LAB154:    xsi_set_current_line(147, ng0);

LAB157:    xsi_set_current_line(148, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 4152);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB156;

LAB158:    xsi_set_current_line(149, ng0);

LAB161:    xsi_set_current_line(150, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 4312);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    goto LAB160;

}


extern void work_m_00000000000793036459_1640639573_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_45_1,(void *)Always_49_2};
	xsi_register_didat("work_m_00000000000793036459_1640639573", "isim/Lab4_test_isim_beh.exe.sim/work/m_00000000000793036459_1640639573.didat");
	xsi_register_executes(pe);
}
