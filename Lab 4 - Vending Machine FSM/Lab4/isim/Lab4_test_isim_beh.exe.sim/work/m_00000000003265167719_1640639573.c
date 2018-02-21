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



static void Always_31_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 5712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 6032);
    *((int *)t2) = 1;
    t3 = (t0 + 5744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 4792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB27;

LAB28:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB29;

LAB30:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB31;

LAB32:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);

LAB36:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 2952U);
    t10 = *((char **)t7);
    t7 = (t10 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB9:    xsi_set_current_line(43, ng0);

LAB49:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB35;

LAB11:    xsi_set_current_line(53, ng0);

LAB62:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB63;

LAB64:
LAB65:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB67;

LAB68:
LAB69:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB71;

LAB72:
LAB73:    goto LAB35;

LAB13:    xsi_set_current_line(63, ng0);

LAB75:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB76;

LAB77:
LAB78:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB80;

LAB81:
LAB82:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB84;

LAB85:
LAB86:    goto LAB35;

LAB15:    xsi_set_current_line(73, ng0);

LAB88:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB89;

LAB90:
LAB91:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB93;

LAB94:
LAB95:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB97;

LAB98:
LAB99:    goto LAB35;

LAB17:    xsi_set_current_line(83, ng0);

LAB101:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB102;

LAB103:
LAB104:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB110;

LAB111:
LAB112:    goto LAB35;

LAB19:    xsi_set_current_line(93, ng0);

LAB114:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB115;

LAB116:
LAB117:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB119;

LAB120:
LAB121:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB123;

LAB124:
LAB125:    goto LAB35;

LAB21:    xsi_set_current_line(103, ng0);

LAB127:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB128;

LAB129:
LAB130:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB132;

LAB133:
LAB134:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB136;

LAB137:
LAB138:    goto LAB35;

LAB23:    xsi_set_current_line(113, ng0);

LAB140:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB141;

LAB142:
LAB143:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB145;

LAB146:
LAB147:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB149;

LAB150:
LAB151:    goto LAB35;

LAB25:    xsi_set_current_line(123, ng0);

LAB153:    goto LAB35;

LAB27:    xsi_set_current_line(127, ng0);

LAB154:    goto LAB35;

LAB29:    xsi_set_current_line(131, ng0);

LAB155:    goto LAB35;

LAB31:    xsi_set_current_line(135, ng0);

LAB156:    goto LAB35;

LAB33:    xsi_set_current_line(139, ng0);

LAB157:    goto LAB35;

LAB37:    xsi_set_current_line(34, ng0);

LAB40:    xsi_set_current_line(35, ng0);
    t16 = (t0 + 1152);
    t17 = *((char **)t16);
    t16 = (t0 + 4792);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 3);
    goto LAB39;

LAB41:    xsi_set_current_line(36, ng0);

LAB44:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 744);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB43;

LAB45:    xsi_set_current_line(38, ng0);

LAB48:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB47;

LAB50:    xsi_set_current_line(44, ng0);

LAB53:    xsi_set_current_line(45, ng0);
    t5 = (t0 + 1288);
    t7 = *((char **)t5);
    t5 = (t0 + 4792);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB52;

LAB54:    xsi_set_current_line(46, ng0);

LAB57:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 880);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB56;

LAB58:    xsi_set_current_line(48, ng0);

LAB61:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 744);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB60;

LAB63:    xsi_set_current_line(54, ng0);

LAB66:    xsi_set_current_line(55, ng0);
    t5 = (t0 + 1424);
    t7 = *((char **)t5);
    t5 = (t0 + 4792);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB65;

LAB67:    xsi_set_current_line(56, ng0);

LAB70:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1016);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB69;

LAB71:    xsi_set_current_line(58, ng0);

LAB74:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 880);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB73;

LAB76:    xsi_set_current_line(64, ng0);

LAB79:    xsi_set_current_line(65, ng0);
    t5 = (t0 + 1560);
    t7 = *((char **)t5);
    t5 = (t0 + 4792);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB78;

LAB80:    xsi_set_current_line(66, ng0);

LAB83:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1152);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB82;

LAB84:    xsi_set_current_line(68, ng0);

LAB87:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 1016);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB86;

LAB89:    xsi_set_current_line(74, ng0);

LAB92:    xsi_set_current_line(75, ng0);
    t5 = (t0 + 1696);
    t7 = *((char **)t5);
    t5 = (t0 + 4792);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB91;

LAB93:    xsi_set_current_line(76, ng0);

LAB96:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 1288);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB95;

LAB97:    xsi_set_current_line(78, ng0);

LAB100:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 1152);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB99;

LAB102:    xsi_set_current_line(84, ng0);

LAB105:    xsi_set_current_line(85, ng0);
    t5 = (t0 + 1832);
    t7 = *((char **)t5);
    t5 = (t0 + 4792);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB104;

LAB106:    xsi_set_current_line(86, ng0);

LAB109:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 1424);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB108;

LAB110:    xsi_set_current_line(88, ng0);

LAB113:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 1288);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB112;

LAB115:    xsi_set_current_line(94, ng0);

LAB118:    xsi_set_current_line(95, ng0);
    t5 = (t0 + 1968);
    t7 = *((char **)t5);
    t5 = (t0 + 4792);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB117;

LAB119:    xsi_set_current_line(96, ng0);

LAB122:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 1560);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB121;

LAB123:    xsi_set_current_line(98, ng0);

LAB126:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 1424);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB125;

LAB128:    xsi_set_current_line(104, ng0);

LAB131:    xsi_set_current_line(105, ng0);
    t5 = (t0 + 2104);
    t7 = *((char **)t5);
    t5 = (t0 + 4792);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB130;

LAB132:    xsi_set_current_line(106, ng0);

LAB135:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 1696);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB134;

LAB136:    xsi_set_current_line(108, ng0);

LAB139:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 1560);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB138;

LAB141:    xsi_set_current_line(114, ng0);

LAB144:    xsi_set_current_line(115, ng0);
    t5 = (t0 + 2240);
    t7 = *((char **)t5);
    t5 = (t0 + 4792);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB143;

LAB145:    xsi_set_current_line(116, ng0);

LAB148:    xsi_set_current_line(117, ng0);
    t4 = (t0 + 1832);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB147;

LAB149:    xsi_set_current_line(118, ng0);

LAB152:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 1696);
    t5 = *((char **)t4);
    t4 = (t0 + 4792);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    goto LAB151;

}


extern void work_m_00000000003265167719_1640639573_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000003265167719_1640639573", "isim/Lab4_test_isim_beh.exe.sim/work/m_00000000003265167719_1640639573.didat");
	xsi_register_executes(pe);
}
