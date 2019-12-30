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
static const char *ng0 = "E:/CO_cpu/P7/alu_E.v";
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



static void Cont_36_0(char *t0)
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

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4984);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4872);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_37_1(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5048);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4888);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_38_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_43_3(char *t0)
{
    char t7[16];
    char t11[8];
    char t19[16];
    char t23[8];
    char t31[16];
    char t33[8];
    char t55[8];
    char t56[8];
    char t62[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
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
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t100;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4904);
    *((int *)t2) = 1;
    t3 = (t0 + 4584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
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
LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);

LAB42:    xsi_set_current_line(46, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = (t0 + 1048U);
    t10 = *((char **)t8);
    memset(t11, 0, 8);
    t8 = (t11 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    xsi_vlogtype_concat(t7, 33, 33, 2U, t11, 1, t9, 32);
    t20 = (t0 + 1208U);
    t21 = *((char **)t20);
    t20 = (t0 + 1208U);
    t22 = *((char **)t20);
    memset(t23, 0, 8);
    t20 = (t23 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 31);
    t30 = (t29 & 1);
    *((unsigned int *)t20) = t30;
    xsi_vlogtype_concat(t19, 33, 33, 2U, t23, 1, t21, 32);
    xsi_vlog_unsigned_add(t31, 33, t7, 33, t19, 33);
    t32 = (t0 + 2888);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 33);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t8 = (t11 + 4);
    t9 = (t4 + 8);
    t10 = (t4 + 12);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t10);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t12 = (t0 + 2888);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    memset(t23, 0, 8);
    t22 = (t23 + 4);
    t24 = (t21 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 31);
    t30 = (t29 & 1);
    *((unsigned int *)t22) = t30;
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t23);
    t36 = (t34 ^ t35);
    *((unsigned int *)t33) = t36;
    t32 = (t11 + 4);
    t37 = (t23 + 4);
    t38 = (t33 + 4);
    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB43;

LAB44:
LAB45:    t46 = (t0 + 2728);
    xsi_vlogvar_assign_value(t46, t33, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t8 = (t11 + 4);
    t9 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 0);
    *((unsigned int *)t8) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 4294967295U);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 32);
    goto LAB41;

LAB9:    xsi_set_current_line(50, ng0);

LAB46:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 32, t8, 32);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    goto LAB41;

LAB11:    xsi_set_current_line(53, ng0);

LAB47:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t9 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    xsi_vlogtype_concat(t7, 33, 33, 2U, t11, 1, t4, 32);
    t10 = (t0 + 1208U);
    t12 = *((char **)t10);
    t10 = (t0 + 1208U);
    t20 = *((char **)t10);
    memset(t23, 0, 8);
    t10 = (t23 + 4);
    t21 = (t20 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t21);
    t29 = (t28 >> 31);
    t30 = (t29 & 1);
    *((unsigned int *)t10) = t30;
    xsi_vlogtype_concat(t19, 33, 33, 2U, t23, 1, t12, 32);
    xsi_vlog_unsigned_minus(t31, 33, t7, 33, t19, 33);
    t22 = (t0 + 2888);
    xsi_vlogvar_assign_value(t22, t31, 0, 0, 33);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t8 = (t11 + 4);
    t9 = (t4 + 8);
    t10 = (t4 + 12);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t10);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t12 = (t0 + 2888);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    memset(t23, 0, 8);
    t22 = (t23 + 4);
    t24 = (t21 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 31);
    t30 = (t29 & 1);
    *((unsigned int *)t22) = t30;
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t23);
    t36 = (t34 ^ t35);
    *((unsigned int *)t33) = t36;
    t32 = (t11 + 4);
    t37 = (t23 + 4);
    t38 = (t33 + 4);
    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB48;

LAB49:
LAB50:    t46 = (t0 + 2728);
    xsi_vlogvar_assign_value(t46, t33, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t8 = (t11 + 4);
    t9 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 0);
    *((unsigned int *)t8) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 4294967295U);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 32);
    goto LAB41;

LAB13:    xsi_set_current_line(58, ng0);

LAB51:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t4, 32, t8, 32);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    goto LAB41;

LAB15:    xsi_set_current_line(61, ng0);

LAB52:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t11) = t15;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t10 = (t11 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t9);
    t18 = (t16 | t17);
    *((unsigned int *)t10) = t18;
    t25 = *((unsigned int *)t10);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB53;

LAB54:
LAB55:    t21 = (t0 + 2408);
    xsi_vlogvar_assign_value(t21, t11, 0, 0, 32);
    goto LAB41;

LAB17:    xsi_set_current_line(64, ng0);

LAB56:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t8);
    t15 = (t13 & t14);
    *((unsigned int *)t11) = t15;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t10 = (t11 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t9);
    t18 = (t16 | t17);
    *((unsigned int *)t10) = t18;
    t25 = *((unsigned int *)t10);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB57;

LAB58:
LAB59:    t21 = (t0 + 2408);
    xsi_vlogvar_assign_value(t21, t11, 0, 0, 32);
    goto LAB41;

LAB19:    xsi_set_current_line(67, ng0);

LAB60:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    *((unsigned int *)t11) = t15;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t10 = (t11 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t9);
    t18 = (t16 | t17);
    *((unsigned int *)t10) = t18;
    t25 = *((unsigned int *)t10);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB61;

LAB62:
LAB63:    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB41;

LAB21:    xsi_set_current_line(70, ng0);

LAB64:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t23) = t15;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t10 = (t23 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t9);
    t18 = (t16 | t17);
    *((unsigned int *)t10) = t18;
    t25 = *((unsigned int *)t10);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB65;

LAB66:
LAB67:    memset(t11, 0, 8);
    t21 = (t11 + 4);
    t22 = (t23 + 4);
    t44 = *((unsigned int *)t23);
    t45 = (~(t44));
    *((unsigned int *)t11) = t45;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB69;

LAB68:    t53 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t53 & 4294967295U);
    t54 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t54 & 4294967295U);
    t24 = (t0 + 2408);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 32);
    goto LAB41;

LAB23:    xsi_set_current_line(73, ng0);

LAB70:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t9 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_lshift(t23, 32, t4, 32, t11, 5);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t23, 0, 0, 32);
    goto LAB41;

LAB25:    xsi_set_current_line(76, ng0);

LAB71:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_lshift(t11, 32, t4, 32, t8, 5);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    goto LAB41;

LAB27:    xsi_set_current_line(79, ng0);

LAB72:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t9 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_rshift(t23, 32, t4, 32, t11, 5);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t23, 0, 0, 32);
    goto LAB41;

LAB29:    xsi_set_current_line(82, ng0);

LAB73:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t8 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_rshift(t11, 32, t4, 32, t8, 5);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    goto LAB41;

LAB31:    xsi_set_current_line(85, ng0);

LAB74:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t8 = *((char **)t3);
    memset(t23, 0, 8);
    t3 = (t23 + 4);
    t9 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t23) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t33, 0, 8);
    xsi_vlog_signed_arith_rshift(t33, 32, t4, 32, t23, 5);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t33, 0, 0, 32);
    goto LAB41;

LAB33:    xsi_set_current_line(88, ng0);

LAB75:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t8 = *((char **)t3);
    memset(t23, 0, 8);
    xsi_vlog_signed_arith_rshift(t23, 32, t4, 32, t8, 5);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t23, 0, 0, 32);
    goto LAB41;

LAB35:    xsi_set_current_line(91, ng0);

LAB76:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t56, 0, 8);
    xsi_vlog_signed_less(t56, 32, t4, 32, t8, 32);
    memset(t23, 0, 8);
    t3 = (t56 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t56);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t3) != 0)
        goto LAB79;

LAB80:    t10 = (t23 + 4);
    t18 = *((unsigned int *)t23);
    t25 = *((unsigned int *)t10);
    t26 = (t18 || t25);
    if (t26 > 0)
        goto LAB81;

LAB82:    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t10) > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t23) > 0)
        goto LAB87;

LAB88:    memcpy(t11, t20, 8);

LAB89:    t21 = (t0 + 2408);
    xsi_vlogvar_assign_value(t21, t11, 0, 0, 32);
    goto LAB41;

LAB37:    xsi_set_current_line(94, ng0);

LAB90:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t33, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB92;

LAB91:    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB92;

LAB95:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB93;

LAB94:    memset(t23, 0, 8);
    t12 = (t33 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t33);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t12) != 0)
        goto LAB98;

LAB99:    t21 = (t23 + 4);
    t18 = *((unsigned int *)t23);
    t25 = *((unsigned int *)t21);
    t26 = (t18 || t25);
    if (t26 > 0)
        goto LAB100;

LAB101:    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t21);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t21) > 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t23) > 0)
        goto LAB106;

LAB107:    memcpy(t11, t24, 8);

LAB108:    t32 = (t0 + 2408);
    xsi_vlogvar_assign_value(t32, t11, 0, 0, 32);
    goto LAB41;

LAB39:    xsi_set_current_line(97, ng0);

LAB109:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(100, ng0);

LAB110:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t0 + 2568);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t12 = ((char*)((ng20)));
    xsi_vlog_generic_get_index_select_value(t11, 32, t4, t10, 2, t12, 32, 1);
    t20 = ((char*)((ng1)));
    memset(t23, 0, 8);
    t21 = (t11 + 4);
    t22 = (t20 + 4);
    t13 = *((unsigned int *)t11);
    t14 = *((unsigned int *)t20);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 ^ t17);
    t25 = (t15 | t18);
    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t22);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB114;

LAB111:    if (t28 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t23) = 1;

LAB114:    memset(t33, 0, 8);
    t32 = (t23 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (~(t34));
    t36 = *((unsigned int *)t23);
    t39 = (t36 & t35);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t32) != 0)
        goto LAB117;

LAB118:    t38 = (t33 + 4);
    t41 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t38);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB119;

LAB120:    memcpy(t62, t33, 8);

LAB121:    t89 = (t62 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t62);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    goto LAB41;

LAB43:    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t33) = (t44 | t45);
    goto LAB45;

LAB48:    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t33) = (t44 | t45);
    goto LAB50;

LAB53:    t27 = *((unsigned int *)t11);
    t28 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t27 | t28);
    t12 = (t4 + 4);
    t20 = (t8 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t34 = *((unsigned int *)t4);
    t47 = (t34 & t30);
    t35 = *((unsigned int *)t20);
    t36 = (~(t35));
    t39 = *((unsigned int *)t8);
    t48 = (t39 & t36);
    t40 = (~(t47));
    t41 = (~(t48));
    t42 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t42 & t40);
    t43 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t43 & t41);
    goto LAB55;

LAB57:    t27 = *((unsigned int *)t11);
    t28 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t27 | t28);
    t12 = (t4 + 4);
    t20 = (t8 + 4);
    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t34 = *((unsigned int *)t12);
    t35 = (~(t34));
    t36 = *((unsigned int *)t8);
    t39 = (~(t36));
    t40 = *((unsigned int *)t20);
    t41 = (~(t40));
    t47 = (t30 & t35);
    t48 = (t39 & t41);
    t42 = (~(t47));
    t43 = (~(t48));
    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & t42);
    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & t43);
    t49 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t49 & t42);
    t50 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t50 & t43);
    goto LAB59;

LAB61:    t27 = *((unsigned int *)t11);
    t28 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t27 | t28);
    goto LAB63;

LAB65:    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t10);
    *((unsigned int *)t23) = (t27 | t28);
    t12 = (t4 + 4);
    t20 = (t8 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t34 = *((unsigned int *)t4);
    t47 = (t34 & t30);
    t35 = *((unsigned int *)t20);
    t36 = (~(t35));
    t39 = *((unsigned int *)t8);
    t48 = (t39 & t36);
    t40 = (~(t47));
    t41 = (~(t48));
    t42 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t42 & t40);
    t43 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t43 & t41);
    goto LAB67;

LAB69:    t49 = *((unsigned int *)t11);
    t50 = *((unsigned int *)t22);
    *((unsigned int *)t11) = (t49 | t50);
    t51 = *((unsigned int *)t21);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t21) = (t51 | t52);
    goto LAB68;

LAB77:    *((unsigned int *)t23) = 1;
    goto LAB80;

LAB79:    t9 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB80;

LAB81:    t12 = ((char*)((ng17)));
    goto LAB82;

LAB83:    t20 = ((char*)((ng1)));
    goto LAB84;

LAB85:    xsi_vlog_unsigned_bit_combine(t11, 32, t12, 32, t20, 32);
    goto LAB89;

LAB87:    memcpy(t11, t12, 8);
    goto LAB89;

LAB92:    t10 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB94;

LAB93:    *((unsigned int *)t33) = 1;
    goto LAB94;

LAB96:    *((unsigned int *)t23) = 1;
    goto LAB99;

LAB98:    t20 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB99;

LAB100:    t22 = ((char*)((ng17)));
    goto LAB101;

LAB102:    t24 = ((char*)((ng1)));
    goto LAB103;

LAB104:    xsi_vlog_unsigned_bit_combine(t11, 32, t22, 32, t24, 32);
    goto LAB108;

LAB106:    memcpy(t11, t22, 8);
    goto LAB108;

LAB113:    t24 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t33) = 1;
    goto LAB118;

LAB117:    t37 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB118;

LAB119:    t46 = (t0 + 2248);
    t57 = (t46 + 56U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng20)));
    memset(t55, 0, 8);
    xsi_vlog_signed_leq(t55, 32, t58, 32, t59, 32);
    memset(t56, 0, 8);
    t60 = (t55 + 4);
    t44 = *((unsigned int *)t60);
    t45 = (~(t44));
    t49 = *((unsigned int *)t55);
    t50 = (t49 & t45);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t60) != 0)
        goto LAB124;

LAB125:    t52 = *((unsigned int *)t33);
    t53 = *((unsigned int *)t56);
    t54 = (t52 & t53);
    *((unsigned int *)t62) = t54;
    t63 = (t33 + 4);
    t64 = (t56 + 4);
    t65 = (t62 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB121;

LAB122:    *((unsigned int *)t56) = 1;
    goto LAB125;

LAB124:    t61 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB125;

LAB126:    t71 = *((unsigned int *)t62);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t62) = (t71 | t72);
    t73 = (t33 + 4);
    t74 = (t56 + 4);
    t75 = *((unsigned int *)t33);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t56);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (~(t81));
    t6 = (t76 & t78);
    t47 = (t80 & t82);
    t83 = (~(t6));
    t84 = (~(t47));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    t87 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t87 & t83);
    t88 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t88 & t84);
    goto LAB128;

LAB129:    xsi_set_current_line(100, ng0);

LAB131:    xsi_set_current_line(101, ng0);
    t95 = (t0 + 2248);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    t98 = ((char*)((ng17)));
    memset(t99, 0, 8);
    xsi_vlog_signed_add(t99, 32, t97, 32, t98, 32);
    t100 = (t0 + 2248);
    xsi_vlogvar_assign_value(t100, t99, 0, 0, 32);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_lshift(t11, 32, t3, 32, t8, 32);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 32);
    goto LAB110;

}


extern void work_m_00000000000322978643_1961740041_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Cont_37_1,(void *)Initial_38_2,(void *)Always_43_3};
	xsi_register_didat("work_m_00000000000322978643_1961740041", "isim/mips_test_isim_beh.exe.sim/work/m_00000000000322978643_1961740041.didat");
	xsi_register_executes(pe);
}
