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
static const char *ng0 = "E:/CO_cpu/P7/md_E.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {5, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {10, 0};
static int ng9[] = {2, 0};



static void Cont_41_0(char *t0)
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

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5944);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5832);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_42_1(char *t0)
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

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6008);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5848);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_44_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(44, ng0);

LAB2:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_54_3(char *t0)
{
    char t13[8];
    char t28[8];
    char t35[8];
    char t51[8];
    char t59[8];
    char t95[16];
    char t96[16];
    char t97[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
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
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
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
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
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
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5864);
    *((int *)t2) = 1;
    t3 = (t0 + 5544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(73, ng0);

LAB14:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB18:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB78;

LAB75:    if (t18 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t13) = 1;

LAB78:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB79;

LAB80:
LAB81:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(64, ng0);

LAB13:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB12;

LAB17:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(74, ng0);

LAB22:    xsi_set_current_line(75, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB26;

LAB23:    if (t18 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t13) = 1;

LAB26:    memset(t28, 0, 8);
    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t12) != 0)
        goto LAB29;

LAB30:    t27 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = *((unsigned int *)t27);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB31;

LAB32:    memcpy(t59, t28, 8);

LAB33:    t87 = (t59 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t59);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t13) = 1;

LAB52:    memset(t28, 0, 8);
    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t12) != 0)
        goto LAB55;

LAB56:    t27 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = *((unsigned int *)t27);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB57;

LAB58:    memcpy(t59, t28, 8);

LAB59:    t87 = (t59 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t59);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB71;

LAB72:
LAB73:    goto LAB21;

LAB25:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t28) = 1;
    goto LAB30;

LAB29:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB30;

LAB31:    t33 = (t0 + 2008U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng4)));
    memset(t35, 0, 8);
    t36 = (t34 + 4);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t33);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB37;

LAB34:    if (t47 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t35) = 1;

LAB37:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t52) != 0)
        goto LAB40;

LAB41:    t60 = *((unsigned int *)t28);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t28 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB36:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t51) = 1;
    goto LAB41;

LAB40:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB41;

LAB42:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t28 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t28);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t51);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB44;

LAB45:    xsi_set_current_line(79, ng0);

LAB48:    xsi_set_current_line(80, ng0);
    t93 = ((char*)((ng5)));
    t94 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 5, 0LL);
    goto LAB47;

LAB51:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t28) = 1;
    goto LAB56;

LAB55:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB56;

LAB57:    t33 = (t0 + 2008U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng7)));
    memset(t35, 0, 8);
    t36 = (t34 + 4);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t33);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB63;

LAB60:    if (t47 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t35) = 1;

LAB63:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t52) != 0)
        goto LAB66;

LAB67:    t60 = *((unsigned int *)t28);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t28 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB59;

LAB62:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB63;

LAB64:    *((unsigned int *)t51) = 1;
    goto LAB67;

LAB66:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB67;

LAB68:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t28 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t28);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t51);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB70;

LAB71:    xsi_set_current_line(82, ng0);

LAB74:    xsi_set_current_line(83, ng0);
    t93 = ((char*)((ng8)));
    t94 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 5, 0LL);
    goto LAB73;

LAB77:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(87, ng0);

LAB82:    xsi_set_current_line(88, ng0);
    t26 = (t0 + 2888);
    t27 = (t26 + 56U);
    t33 = *((char **)t27);
    t34 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t36 = (t33 + 4);
    t37 = (t34 + 4);
    t29 = *((unsigned int *)t33);
    t30 = *((unsigned int *)t34);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t36);
    t38 = *((unsigned int *)t37);
    t39 = (t32 ^ t38);
    t40 = (t31 | t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB86;

LAB83:    if (t43 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t28) = 1;

LAB86:    t52 = (t28 + 4);
    t46 = *((unsigned int *)t52);
    t47 = (~(t46));
    t48 = *((unsigned int *)t28);
    t49 = (t48 & t47);
    t53 = (t49 != 0);
    if (t53 > 0)
        goto LAB87;

LAB88:
LAB89:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB94;

LAB91:    if (t18 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t13) = 1;

LAB94:    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB95;

LAB96:
LAB97:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t26 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t26);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t26);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB132;

LAB129:    if (t18 != 0)
        goto LAB131;

LAB130:    *((unsigned int *)t13) = 1;

LAB132:    memset(t28, 0, 8);
    t33 = (t13 + 4);
    t21 = *((unsigned int *)t33);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t33) != 0)
        goto LAB135;

LAB136:    t36 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = *((unsigned int *)t36);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB137;

LAB138:    memcpy(t59, t28, 8);

LAB139:    t98 = (t59 + 4);
    t91 = *((unsigned int *)t98);
    t92 = (~(t91));
    t99 = *((unsigned int *)t59);
    t100 = (t99 & t92);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB151;

LAB152:
LAB153:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t26 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t26);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t26);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB158;

LAB155:    if (t18 != 0)
        goto LAB157;

LAB156:    *((unsigned int *)t13) = 1;

LAB158:    memset(t28, 0, 8);
    t33 = (t13 + 4);
    t21 = *((unsigned int *)t33);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t33) != 0)
        goto LAB161;

LAB162:    t36 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = *((unsigned int *)t36);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB163;

LAB164:    memcpy(t59, t28, 8);

LAB165:    t98 = (t59 + 4);
    t91 = *((unsigned int *)t98);
    t92 = (~(t91));
    t99 = *((unsigned int *)t59);
    t100 = (t99 & t92);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB177;

LAB178:
LAB179:    goto LAB81;

LAB85:    t50 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(88, ng0);

LAB90:    xsi_set_current_line(89, ng0);
    t58 = (t0 + 3048);
    t63 = (t58 + 56U);
    t64 = *((char **)t63);
    t65 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t64, 5, t65, 32);
    t73 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t73, t35, 0, 0, 5, 0LL);
    goto LAB89;

LAB93:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB94;

LAB95:    xsi_set_current_line(91, ng0);

LAB98:    xsi_set_current_line(92, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB99:    t5 = ((char*)((ng3)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t78 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng4)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t78 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng6)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t78 == 1)
        goto LAB104;

LAB105:    t2 = ((char*)((ng7)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t78 == 1)
        goto LAB106;

LAB107:
LAB108:    goto LAB97;

LAB100:    xsi_set_current_line(96, ng0);

LAB109:    xsi_set_current_line(97, ng0);
    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t26 = *((char **)t12);
    xsi_vlogtype_sign_extend(t95, 64, t26, 32);
    t27 = (t0 + 3528);
    t33 = (t27 + 56U);
    t34 = *((char **)t33);
    xsi_vlogtype_sign_extend(t96, 64, t34, 32);
    xsi_vlog_signed_multiply(t97, 64, t95, 64, t96, 64);
    t36 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t36, t97, 0, 0, 32, 0LL);
    t37 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t37, t97, 32, 0, 32, 0LL);
    goto LAB108;

LAB102:    xsi_set_current_line(99, ng0);

LAB110:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 3368);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 3528);
    t26 = (t12 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_unsigned_multiply(t95, 64, t11, 32, t27, 32);
    t33 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t33, t95, 0, 0, 32, 0LL);
    t34 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t34, t95, 32, 0, 32, 0LL);
    goto LAB108;

LAB104:    xsi_set_current_line(102, ng0);

LAB111:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 3528);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t26 = (t11 + 4);
    t27 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t26);
    t10 = *((unsigned int *)t27);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t26);
    t17 = *((unsigned int *)t27);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB113;

LAB112:    if (t18 != 0)
        goto LAB114;

LAB115:    t34 = (t13 + 4);
    t21 = *((unsigned int *)t34);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB116;

LAB117:
LAB118:    goto LAB108;

LAB106:    xsi_set_current_line(108, ng0);

LAB120:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 3528);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t26 = (t11 + 4);
    t27 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t26);
    t10 = *((unsigned int *)t27);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t26);
    t17 = *((unsigned int *)t27);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB122;

LAB121:    if (t18 != 0)
        goto LAB123;

LAB124:    t34 = (t13 + 4);
    t21 = *((unsigned int *)t34);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB125;

LAB126:
LAB127:    goto LAB108;

LAB113:    *((unsigned int *)t13) = 1;
    goto LAB115;

LAB114:    t33 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB115;

LAB116:    xsi_set_current_line(103, ng0);

LAB119:    xsi_set_current_line(104, ng0);
    t36 = (t0 + 3368);
    t37 = (t36 + 56U);
    t50 = *((char **)t37);
    t52 = (t0 + 3528);
    t58 = (t52 + 56U);
    t63 = *((char **)t58);
    memset(t51, 0, 8);
    xsi_vlog_signed_mod(t51, 32, t50, 32, t63, 32);
    t64 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t64, t51, 0, 0, 32, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3528);
    t12 = (t11 + 56U);
    t26 = *((char **)t12);
    memset(t35, 0, 8);
    xsi_vlog_signed_divide(t35, 32, t5, 32, t26, 32);
    t27 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t27, t35, 0, 0, 32, 0LL);
    goto LAB118;

LAB122:    *((unsigned int *)t13) = 1;
    goto LAB124;

LAB123:    t33 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB124;

LAB125:    xsi_set_current_line(109, ng0);

LAB128:    xsi_set_current_line(110, ng0);
    t36 = (t0 + 3368);
    t37 = (t36 + 56U);
    t50 = *((char **)t37);
    t52 = (t0 + 3528);
    t58 = (t52 + 56U);
    t63 = *((char **)t58);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_mod(t28, 32, t50, 32, t63, 32);
    t64 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t64, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3528);
    t12 = (t11 + 56U);
    t26 = *((char **)t12);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 32, t26, 32);
    t27 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 32, 0LL);
    goto LAB127;

LAB131:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB132;

LAB133:    *((unsigned int *)t28) = 1;
    goto LAB136;

LAB135:    t34 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB136;

LAB137:    t37 = (t0 + 2168U);
    t50 = *((char **)t37);
    t37 = ((char*)((ng2)));
    memset(t35, 0, 8);
    t52 = (t50 + 4);
    t58 = (t37 + 4);
    t32 = *((unsigned int *)t50);
    t38 = *((unsigned int *)t37);
    t39 = (t32 ^ t38);
    t40 = *((unsigned int *)t52);
    t41 = *((unsigned int *)t58);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t52);
    t45 = *((unsigned int *)t58);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB143;

LAB140:    if (t46 != 0)
        goto LAB142;

LAB141:    *((unsigned int *)t35) = 1;

LAB143:    memset(t51, 0, 8);
    t64 = (t35 + 4);
    t49 = *((unsigned int *)t64);
    t53 = (~(t49));
    t54 = *((unsigned int *)t35);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t64) != 0)
        goto LAB146;

LAB147:    t57 = *((unsigned int *)t28);
    t60 = *((unsigned int *)t51);
    t61 = (t57 & t60);
    *((unsigned int *)t59) = t61;
    t73 = (t28 + 4);
    t74 = (t51 + 4);
    t87 = (t59 + 4);
    t62 = *((unsigned int *)t73);
    t66 = *((unsigned int *)t74);
    t67 = (t62 | t66);
    *((unsigned int *)t87) = t67;
    t68 = *((unsigned int *)t87);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB148;

LAB149:
LAB150:    goto LAB139;

LAB142:    t63 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB143;

LAB144:    *((unsigned int *)t51) = 1;
    goto LAB147;

LAB146:    t65 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB147;

LAB148:    t70 = *((unsigned int *)t59);
    t71 = *((unsigned int *)t87);
    *((unsigned int *)t59) = (t70 | t71);
    t93 = (t28 + 4);
    t94 = (t51 + 4);
    t72 = *((unsigned int *)t28);
    t75 = (~(t72));
    t76 = *((unsigned int *)t93);
    t77 = (~(t76));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t94);
    t83 = (~(t81));
    t78 = (t75 & t77);
    t82 = (t80 & t83);
    t84 = (~(t78));
    t85 = (~(t82));
    t86 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t86 & t84);
    t88 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t88 & t85);
    t89 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t89 & t84);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t85);
    goto LAB150;

LAB151:    xsi_set_current_line(116, ng0);

LAB154:    xsi_set_current_line(117, ng0);
    t102 = (t0 + 1688U);
    t103 = *((char **)t102);
    t102 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t102, t103, 0, 0, 32, 0LL);
    goto LAB153;

LAB157:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB158;

LAB159:    *((unsigned int *)t28) = 1;
    goto LAB162;

LAB161:    t34 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB162;

LAB163:    t37 = (t0 + 2168U);
    t50 = *((char **)t37);
    t37 = ((char*)((ng9)));
    memset(t35, 0, 8);
    t52 = (t50 + 4);
    t58 = (t37 + 4);
    t32 = *((unsigned int *)t50);
    t38 = *((unsigned int *)t37);
    t39 = (t32 ^ t38);
    t40 = *((unsigned int *)t52);
    t41 = *((unsigned int *)t58);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t52);
    t45 = *((unsigned int *)t58);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB169;

LAB166:    if (t46 != 0)
        goto LAB168;

LAB167:    *((unsigned int *)t35) = 1;

LAB169:    memset(t51, 0, 8);
    t64 = (t35 + 4);
    t49 = *((unsigned int *)t64);
    t53 = (~(t49));
    t54 = *((unsigned int *)t35);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t64) != 0)
        goto LAB172;

LAB173:    t57 = *((unsigned int *)t28);
    t60 = *((unsigned int *)t51);
    t61 = (t57 & t60);
    *((unsigned int *)t59) = t61;
    t73 = (t28 + 4);
    t74 = (t51 + 4);
    t87 = (t59 + 4);
    t62 = *((unsigned int *)t73);
    t66 = *((unsigned int *)t74);
    t67 = (t62 | t66);
    *((unsigned int *)t87) = t67;
    t68 = *((unsigned int *)t87);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB174;

LAB175:
LAB176:    goto LAB165;

LAB168:    t63 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB169;

LAB170:    *((unsigned int *)t51) = 1;
    goto LAB173;

LAB172:    t65 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB173;

LAB174:    t70 = *((unsigned int *)t59);
    t71 = *((unsigned int *)t87);
    *((unsigned int *)t59) = (t70 | t71);
    t93 = (t28 + 4);
    t94 = (t51 + 4);
    t72 = *((unsigned int *)t28);
    t75 = (~(t72));
    t76 = *((unsigned int *)t93);
    t77 = (~(t76));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t94);
    t83 = (~(t81));
    t78 = (t75 & t77);
    t82 = (t80 & t83);
    t84 = (~(t78));
    t85 = (~(t82));
    t86 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t86 & t84);
    t88 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t88 & t85);
    t89 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t89 & t84);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t85);
    goto LAB176;

LAB177:    xsi_set_current_line(119, ng0);

LAB180:    xsi_set_current_line(120, ng0);
    t102 = (t0 + 1688U);
    t103 = *((char **)t102);
    t102 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t102, t103, 0, 0, 32, 0LL);
    goto LAB179;

}


extern void work_m_00000000001634212221_0845492209_init()
{
	static char *pe[] = {(void *)Cont_41_0,(void *)Cont_42_1,(void *)Initial_44_2,(void *)Always_54_3};
	xsi_register_didat("work_m_00000000001634212221_0845492209", "isim/mips_test_isim_beh.exe.sim/work/m_00000000001634212221_0845492209.didat");
	xsi_register_executes(pe);
}
