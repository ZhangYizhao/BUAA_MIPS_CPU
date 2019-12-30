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
static const char *ng0 = "E:/CO_cpu/P6/alu_E.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {13U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {14U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {12U, 0U};
static int ng17[] = {1, 0};
static unsigned int ng18[] = {15U, 0U};
static unsigned int ng19[] = {16U, 0U};
static int ng20[] = {31, 0};



static void Cont_33_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4240);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4144);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_35_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_40_2(char *t0)
{
    char t10[8];
    char t40[8];
    char t47[8];
    char t48[8];
    char t49[8];
    char t59[8];
    char t96[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4160);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(99, ng0);

LAB128:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t3, 32, t4, 32);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 32);

LAB43:    goto LAB2;

LAB7:    xsi_set_current_line(42, ng0);

LAB44:    xsi_set_current_line(43, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB43;

LAB9:    xsi_set_current_line(45, ng0);

LAB45:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB43;

LAB11:    xsi_set_current_line(48, ng0);

LAB46:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB43;

LAB13:    xsi_set_current_line(51, ng0);

LAB47:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB43;

LAB15:    xsi_set_current_line(54, ng0);

LAB48:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB49;

LAB50:
LAB51:    t35 = (t0 + 2248);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB43;

LAB17:    xsi_set_current_line(57, ng0);

LAB52:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB53;

LAB54:
LAB55:    t35 = (t0 + 2248);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB43;

LAB19:    xsi_set_current_line(60, ng0);

LAB56:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB57;

LAB58:
LAB59:    t21 = (t0 + 2248);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB43;

LAB21:    xsi_set_current_line(63, ng0);

LAB60:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t40) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t40 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB61;

LAB62:
LAB63:    memset(t10, 0, 8);
    t35 = (t10 + 4);
    t41 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (~(t36));
    *((unsigned int *)t10) = t37;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB65;

LAB64:    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t45 & 4294967295U);
    t46 = (t0 + 2248);
    xsi_vlogvar_assign_value(t46, t10, 0, 0, 32);
    goto LAB43;

LAB23:    xsi_set_current_line(66, ng0);

LAB66:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_lshift(t40, 32, t4, 32, t10, 5);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB43;

LAB25:    xsi_set_current_line(69, ng0);

LAB67:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB43;

LAB27:    xsi_set_current_line(72, ng0);

LAB68:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_rshift(t40, 32, t4, 32, t10, 5);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB43;

LAB29:    xsi_set_current_line(75, ng0);

LAB69:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB43;

LAB31:    xsi_set_current_line(78, ng0);

LAB70:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t40, 0, 8);
    t3 = (t40 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t40) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t47, 0, 8);
    xsi_vlog_signed_arith_rshift(t47, 32, t4, 32, t40, 5);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t47, 0, 0, 32);
    goto LAB43;

LAB33:    xsi_set_current_line(81, ng0);

LAB71:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t40, 0, 8);
    xsi_vlog_signed_arith_rshift(t40, 32, t4, 32, t7, 5);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t40, 0, 0, 32);
    goto LAB43;

LAB35:    xsi_set_current_line(84, ng0);

LAB72:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t49, 0, 8);
    xsi_vlog_signed_less(t49, 32, t4, 32, t7, 32);
    memset(t40, 0, 8);
    t3 = (t49 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t49);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t3) != 0)
        goto LAB75;

LAB76:    t9 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t9);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB77;

LAB78:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t9);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t9) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t40) > 0)
        goto LAB83;

LAB84:    memcpy(t10, t22, 8);

LAB85:    t35 = (t0 + 2248);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB43;

LAB37:    xsi_set_current_line(87, ng0);

LAB86:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t47, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB88;

LAB87:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB88;

LAB91:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB89;

LAB90:    memset(t40, 0, 8);
    t21 = (t47 + 4);
    t11 = *((unsigned int *)t21);
    t12 = (~(t11));
    t13 = *((unsigned int *)t47);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t21) != 0)
        goto LAB94;

LAB95:    t35 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t35);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB96;

LAB97:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t35);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t35) > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t40) > 0)
        goto LAB102;

LAB103:    memcpy(t10, t46, 8);

LAB104:    t50 = (t0 + 2248);
    xsi_vlogvar_assign_value(t50, t10, 0, 0, 32);
    goto LAB43;

LAB39:    xsi_set_current_line(90, ng0);

LAB105:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(93, ng0);

LAB106:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t21 = ((char*)((ng20)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t4, t9, 2, t21, 32, 1);
    t22 = ((char*)((ng1)));
    memset(t40, 0, 8);
    t35 = (t10 + 4);
    t41 = (t22 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t22);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t35);
    t15 = *((unsigned int *)t41);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t35);
    t19 = *((unsigned int *)t41);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB110;

LAB107:    if (t20 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t40) = 1;

LAB110:    memset(t47, 0, 8);
    t50 = (t40 + 4);
    t25 = *((unsigned int *)t50);
    t27 = (~(t25));
    t28 = *((unsigned int *)t40);
    t29 = (t28 & t27);
    t31 = (t29 & 1U);
    if (t31 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t50) != 0)
        goto LAB113;

LAB114:    t52 = (t47 + 4);
    t32 = *((unsigned int *)t47);
    t33 = *((unsigned int *)t52);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB115;

LAB116:    memcpy(t59, t47, 8);

LAB117:    t86 = (t59 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t59);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB43;

LAB49:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB51;

LAB53:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    t26 = (t24 & t27);
    t30 = (t29 & t32);
    t33 = (~(t26));
    t34 = (~(t30));
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t33);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t34);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t33);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t34);
    goto LAB55;

LAB57:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB59;

LAB61:    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t40) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB63;

LAB65:    t38 = *((unsigned int *)t10);
    t39 = *((unsigned int *)t41);
    *((unsigned int *)t10) = (t38 | t39);
    t42 = *((unsigned int *)t35);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t42 | t43);
    goto LAB64;

LAB73:    *((unsigned int *)t40) = 1;
    goto LAB76;

LAB75:    t8 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB76;

LAB77:    t21 = ((char*)((ng17)));
    goto LAB78;

LAB79:    t22 = ((char*)((ng1)));
    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t10, 32, t21, 32, t22, 32);
    goto LAB85;

LAB83:    memcpy(t10, t21, 8);
    goto LAB85;

LAB88:    t9 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB90;

LAB89:    *((unsigned int *)t47) = 1;
    goto LAB90;

LAB92:    *((unsigned int *)t40) = 1;
    goto LAB95;

LAB94:    t22 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB95;

LAB96:    t41 = ((char*)((ng17)));
    goto LAB97;

LAB98:    t46 = ((char*)((ng1)));
    goto LAB99;

LAB100:    xsi_vlog_unsigned_bit_combine(t10, 32, t41, 32, t46, 32);
    goto LAB104;

LAB102:    memcpy(t10, t41, 8);
    goto LAB104;

LAB109:    t46 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB110;

LAB111:    *((unsigned int *)t47) = 1;
    goto LAB114;

LAB113:    t51 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB114;

LAB115:    t53 = (t0 + 2088);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng20)));
    memset(t48, 0, 8);
    xsi_vlog_signed_leq(t48, 32, t55, 32, t56, 32);
    memset(t49, 0, 8);
    t57 = (t48 + 4);
    t36 = *((unsigned int *)t57);
    t37 = (~(t36));
    t38 = *((unsigned int *)t48);
    t39 = (t38 & t37);
    t42 = (t39 & 1U);
    if (t42 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t57) != 0)
        goto LAB120;

LAB121:    t43 = *((unsigned int *)t47);
    t44 = *((unsigned int *)t49);
    t45 = (t43 & t44);
    *((unsigned int *)t59) = t45;
    t60 = (t47 + 4);
    t61 = (t49 + 4);
    t62 = (t59 + 4);
    t63 = *((unsigned int *)t60);
    t64 = *((unsigned int *)t61);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB122;

LAB123:
LAB124:    goto LAB117;

LAB118:    *((unsigned int *)t49) = 1;
    goto LAB121;

LAB120:    t58 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB121;

LAB122:    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t59) = (t68 | t69);
    t70 = (t47 + 4);
    t71 = (t49 + 4);
    t72 = *((unsigned int *)t47);
    t73 = (~(t72));
    t74 = *((unsigned int *)t70);
    t75 = (~(t74));
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t71);
    t79 = (~(t78));
    t6 = (t73 & t75);
    t26 = (t77 & t79);
    t80 = (~(t6));
    t81 = (~(t26));
    t82 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t82 & t80);
    t83 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t83 & t81);
    t84 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t84 & t80);
    t85 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t85 & t81);
    goto LAB124;

LAB125:    xsi_set_current_line(93, ng0);

LAB127:    xsi_set_current_line(94, ng0);
    t92 = (t0 + 2088);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    t95 = ((char*)((ng17)));
    memset(t96, 0, 8);
    xsi_vlog_signed_add(t96, 32, t94, 32, t95, 32);
    t97 = (t0 + 2088);
    xsi_vlogvar_assign_value(t97, t96, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t3, 32, t7, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB106;

}


extern void work_m_00000000002267696545_1961740041_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Initial_35_1,(void *)Always_40_2};
	xsi_register_didat("work_m_00000000002267696545_1961740041", "isim/mips_test_isim_beh.exe.sim/work/m_00000000002267696545_1961740041.didat");
	xsi_register_executes(pe);
}
