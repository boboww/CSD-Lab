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
static const char *ng0 = "C:/Users/Warren/Desktop/Lab4 COMPLETELY WORKING/Lab4/Lab4.v";
static int ng1[] = {1, 0};
static int ng2[] = {10000000, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {9U, 0U};
static unsigned int ng15[] = {10U, 0U};
static unsigned int ng16[] = {11U, 0U};
static unsigned int ng17[] = {12U, 0U};
static unsigned int ng18[] = {13U, 0U};



static void Always_24_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
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
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 7608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 8672);
    *((int *)t2) = 1;
    t3 = (t0 + 7640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 6528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 25, t7, 32);
    t9 = (t0 + 6528);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 25, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 6528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB9;

LAB6:    if (t19 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);

LAB13:    xsi_set_current_line(30, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 6528);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 25, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 5888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t5) == 0)
        goto LAB14;

LAB16:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB17:    t7 = (t0 + 5888);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t8) = 1;
    goto LAB17;

}

static void Always_67_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 8688);
    *((int *)t2) = 1;
    t3 = (t0 + 7888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 6048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_75_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 8104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 8704);
    *((int *)t2) = 1;
    t3 = (t0 + 8136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    goto LAB2;

}

static void Always_81_3(char *t0)
{
    char t8[8];
    char t23[8];
    char t30[8];
    char t58[8];
    char t73[8];
    char t80[8];
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
    char *t14;
    int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;

LAB0:    t1 = (t0 + 8352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 8720);
    *((int *)t2) = 1;
    t3 = (t0 + 8384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 6208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 6688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB2;

LAB6:    xsi_set_current_line(91, ng0);

LAB9:    xsi_set_current_line(92, ng0);
    t7 = ((char*)((ng3)));
    t14 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB11:    xsi_set_current_line(102, ng0);

LAB42:    xsi_set_current_line(103, ng0);
    t6 = (t0 + 4208U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t6) != 0)
        goto LAB45;

LAB46:    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (!(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB47;

LAB48:    memcpy(t30, t8, 8);

LAB49:    memset(t58, 0, 8);
    t59 = (t30 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t30);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t59) != 0)
        goto LAB59;

LAB60:    t66 = (t58 + 4);
    t67 = *((unsigned int *)t58);
    t68 = (!(t67));
    t69 = *((unsigned int *)t66);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB61;

LAB62:    memcpy(t80, t58, 8);

LAB63:    t108 = (t80 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t80);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(108, ng0);

LAB75:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 6368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);

LAB73:    goto LAB41;

LAB13:    xsi_set_current_line(113, ng0);

LAB76:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB87:
LAB83:
LAB79:    goto LAB41;

LAB15:    xsi_set_current_line(131, ng0);

LAB89:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 4048U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB100:
LAB96:
LAB92:    goto LAB41;

LAB17:    xsi_set_current_line(147, ng0);

LAB102:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 4048U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB103;

LAB104:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB113:
LAB109:
LAB105:    goto LAB41;

LAB19:    xsi_set_current_line(162, ng0);

LAB115:    xsi_set_current_line(163, ng0);
    t3 = (t0 + 4048U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB116;

LAB117:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB126:
LAB122:
LAB118:    goto LAB41;

LAB21:    xsi_set_current_line(177, ng0);

LAB128:    xsi_set_current_line(178, ng0);
    t3 = (t0 + 4048U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB137;

LAB138:    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB139:
LAB135:
LAB131:    goto LAB41;

LAB23:    xsi_set_current_line(192, ng0);

LAB141:    xsi_set_current_line(193, ng0);
    t3 = (t0 + 4048U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB146;

LAB147:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB150;

LAB151:    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB152:
LAB148:
LAB144:    goto LAB41;

LAB25:    xsi_set_current_line(207, ng0);

LAB154:    xsi_set_current_line(208, ng0);
    t3 = (t0 + 4048U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB155;

LAB156:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB159;

LAB160:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB163;

LAB164:    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB165:
LAB161:
LAB157:    goto LAB41;

LAB27:    xsi_set_current_line(222, ng0);

LAB167:    xsi_set_current_line(223, ng0);
    t3 = (t0 + 4048U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB168;

LAB169:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB172;

LAB173:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB176;

LAB177:    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB178:
LAB174:
LAB170:    goto LAB41;

LAB29:    xsi_set_current_line(237, ng0);

LAB180:    xsi_set_current_line(238, ng0);
    t3 = (t0 + 4048U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB181;

LAB182:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB185;

LAB186:    xsi_set_current_line(244, ng0);
    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB189;

LAB190:    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB191:
LAB187:
LAB183:    goto LAB41;

LAB31:    xsi_set_current_line(252, ng0);

LAB193:    xsi_set_current_line(253, ng0);
    t3 = (t0 + 4528U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB194;

LAB195:    xsi_set_current_line(257, ng0);
    t2 = (t0 + 4688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB198;

LAB199:    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB200:
LAB196:    goto LAB41;

LAB33:    xsi_set_current_line(265, ng0);

LAB202:    xsi_set_current_line(266, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 5408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB41;

LAB35:    xsi_set_current_line(270, ng0);

LAB203:    xsi_set_current_line(271, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 5408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB41;

LAB37:    xsi_set_current_line(275, ng0);

LAB204:    xsi_set_current_line(276, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 5408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(277, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB41;

LAB39:    xsi_set_current_line(280, ng0);

LAB205:    xsi_set_current_line(281, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 5408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(282, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB41;

LAB43:    *((unsigned int *)t8) = 1;
    goto LAB46;

LAB45:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB46;

LAB47:    t21 = (t0 + 4368U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t22 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t21) != 0)
        goto LAB52;

LAB53:    t31 = *((unsigned int *)t8);
    t32 = *((unsigned int *)t23);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = (t8 + 4);
    t35 = (t23 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB49;

LAB50:    *((unsigned int *)t23) = 1;
    goto LAB53;

LAB52:    t29 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB53;

LAB54:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t8 + 4);
    t45 = (t23 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t48 = *((unsigned int *)t8);
    t49 = (t48 & t47);
    t50 = *((unsigned int *)t45);
    t51 = (~(t50));
    t52 = *((unsigned int *)t23);
    t53 = (t52 & t51);
    t54 = (~(t49));
    t55 = (~(t53));
    t56 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t56 & t54);
    t57 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t57 & t55);
    goto LAB56;

LAB57:    *((unsigned int *)t58) = 1;
    goto LAB60;

LAB59:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB60;

LAB61:    t71 = (t0 + 4048U);
    t72 = *((char **)t71);
    memset(t73, 0, 8);
    t71 = (t72 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t71) != 0)
        goto LAB66;

LAB67:    t81 = *((unsigned int *)t58);
    t82 = *((unsigned int *)t73);
    t83 = (t81 | t82);
    *((unsigned int *)t80) = t83;
    t84 = (t58 + 4);
    t85 = (t73 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB63;

LAB64:    *((unsigned int *)t73) = 1;
    goto LAB67;

LAB66:    t79 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB67;

LAB68:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t58 + 4);
    t95 = (t73 + 4);
    t96 = *((unsigned int *)t94);
    t97 = (~(t96));
    t98 = *((unsigned int *)t58);
    t99 = (t98 & t97);
    t100 = *((unsigned int *)t95);
    t101 = (~(t100));
    t102 = *((unsigned int *)t73);
    t103 = (t102 & t101);
    t104 = (~(t99));
    t105 = (~(t103));
    t106 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t106 & t104);
    t107 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t107 & t105);
    goto LAB70;

LAB71:    xsi_set_current_line(104, ng0);

LAB74:    xsi_set_current_line(105, ng0);
    t114 = (t0 + 6208);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    t117 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t117, t116, 0, 0, 4, 0LL);
    goto LAB73;

LAB77:    xsi_set_current_line(116, ng0);

LAB80:    xsi_set_current_line(117, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB79;

LAB81:    xsi_set_current_line(119, ng0);

LAB84:    xsi_set_current_line(120, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB83;

LAB85:    xsi_set_current_line(122, ng0);

LAB88:    xsi_set_current_line(123, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB87;

LAB90:    xsi_set_current_line(132, ng0);

LAB93:    xsi_set_current_line(133, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB92;

LAB94:    xsi_set_current_line(135, ng0);

LAB97:    xsi_set_current_line(136, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB96;

LAB98:    xsi_set_current_line(138, ng0);

LAB101:    xsi_set_current_line(139, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB100;

LAB103:    xsi_set_current_line(148, ng0);

LAB106:    xsi_set_current_line(149, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB105;

LAB107:    xsi_set_current_line(151, ng0);

LAB110:    xsi_set_current_line(152, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB109;

LAB111:    xsi_set_current_line(154, ng0);

LAB114:    xsi_set_current_line(155, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB113;

LAB116:    xsi_set_current_line(163, ng0);

LAB119:    xsi_set_current_line(164, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB118;

LAB120:    xsi_set_current_line(166, ng0);

LAB123:    xsi_set_current_line(167, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB122;

LAB124:    xsi_set_current_line(169, ng0);

LAB127:    xsi_set_current_line(170, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB126;

LAB129:    xsi_set_current_line(178, ng0);

LAB132:    xsi_set_current_line(179, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB131;

LAB133:    xsi_set_current_line(181, ng0);

LAB136:    xsi_set_current_line(182, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB135;

LAB137:    xsi_set_current_line(184, ng0);

LAB140:    xsi_set_current_line(185, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB139;

LAB142:    xsi_set_current_line(193, ng0);

LAB145:    xsi_set_current_line(194, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB144;

LAB146:    xsi_set_current_line(196, ng0);

LAB149:    xsi_set_current_line(197, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB148;

LAB150:    xsi_set_current_line(199, ng0);

LAB153:    xsi_set_current_line(200, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB152;

LAB155:    xsi_set_current_line(208, ng0);

LAB158:    xsi_set_current_line(209, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB157;

LAB159:    xsi_set_current_line(211, ng0);

LAB162:    xsi_set_current_line(212, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB161;

LAB163:    xsi_set_current_line(214, ng0);

LAB166:    xsi_set_current_line(215, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB165;

LAB168:    xsi_set_current_line(223, ng0);

LAB171:    xsi_set_current_line(224, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB170;

LAB172:    xsi_set_current_line(226, ng0);

LAB175:    xsi_set_current_line(227, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB174;

LAB176:    xsi_set_current_line(229, ng0);

LAB179:    xsi_set_current_line(230, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB178;

LAB181:    xsi_set_current_line(238, ng0);

LAB184:    xsi_set_current_line(239, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB183;

LAB185:    xsi_set_current_line(241, ng0);

LAB188:    xsi_set_current_line(242, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB187;

LAB189:    xsi_set_current_line(244, ng0);

LAB192:    xsi_set_current_line(245, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB191;

LAB194:    xsi_set_current_line(253, ng0);

LAB197:    xsi_set_current_line(254, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 5088);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB196;

LAB198:    xsi_set_current_line(257, ng0);

LAB201:    xsi_set_current_line(258, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 5248);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(259, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB200;

}


extern void work_m_00000000003228851947_1640639573_init()
{
	static char *pe[] = {(void *)Always_24_0,(void *)Always_67_1,(void *)Always_75_2,(void *)Always_81_3};
	xsi_register_didat("work_m_00000000003228851947_1640639573", "isim/Lab4_isim_beh.exe.sim/work/m_00000000003228851947_1640639573.didat");
	xsi_register_executes(pe);
}
