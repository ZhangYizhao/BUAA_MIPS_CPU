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
static const char *ng0 = "E:/CO_cpu/P6_Z/md_E.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {5, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {10, 0};
static int ng9[] = {2, 0};



static void Cont_40_0(char *t0)
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

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5784);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5672);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_41_1(char *t0)
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

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5688);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_43_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_53_3(char *t0)
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

LAB0:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5704);
    *((int *)t2) = 1;
    t3 = (t0 + 5384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
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

LAB7:    xsi_set_current_line(63, ng0);

LAB10:    xsi_set_current_line(64, ng0);
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
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(77, ng0);
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
        goto LAB74;

LAB71:    if (t18 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t13) = 1;

LAB74:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB75;

LAB76:
LAB77:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(64, ng0);

LAB18:    xsi_set_current_line(65, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1848U);
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
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    memset(t28, 0, 8);
    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t12) != 0)
        goto LAB25;

LAB26:    t27 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = *((unsigned int *)t27);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB27;

LAB28:    memcpy(t59, t28, 8);

LAB29:    t87 = (t59 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t59);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1848U);
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
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t13) = 1;

LAB48:    memset(t28, 0, 8);
    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t12) != 0)
        goto LAB51;

LAB52:    t27 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = *((unsigned int *)t27);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB53;

LAB54:    memcpy(t59, t28, 8);

LAB55:    t87 = (t59 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t59);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB67;

LAB68:
LAB69:    goto LAB17;

LAB21:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t28) = 1;
    goto LAB26;

LAB25:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB26;

LAB27:    t33 = (t0 + 1848U);
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
        goto LAB33;

LAB30:    if (t47 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t35) = 1;

LAB33:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t52) != 0)
        goto LAB36;

LAB37:    t60 = *((unsigned int *)t28);
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
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB32:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t51) = 1;
    goto LAB37;

LAB36:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB37;

LAB38:    t71 = *((unsigned int *)t59);
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
    goto LAB40;

LAB41:    xsi_set_current_line(69, ng0);

LAB44:    xsi_set_current_line(70, ng0);
    t93 = ((char*)((ng5)));
    t94 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 5, 0LL);
    goto LAB43;

LAB47:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t28) = 1;
    goto LAB52;

LAB51:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB52;

LAB53:    t33 = (t0 + 1848U);
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
        goto LAB59;

LAB56:    if (t47 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t35) = 1;

LAB59:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t52) != 0)
        goto LAB62;

LAB63:    t60 = *((unsigned int *)t28);
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
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB58:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t51) = 1;
    goto LAB63;

LAB62:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB63;

LAB64:    t71 = *((unsigned int *)t59);
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
    goto LAB66;

LAB67:    xsi_set_current_line(72, ng0);

LAB70:    xsi_set_current_line(73, ng0);
    t93 = ((char*)((ng8)));
    t94 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 5, 0LL);
    goto LAB69;

LAB73:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(77, ng0);

LAB78:    xsi_set_current_line(78, ng0);
    t26 = (t0 + 2728);
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
        goto LAB82;

LAB79:    if (t43 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t28) = 1;

LAB82:    t52 = (t28 + 4);
    t46 = *((unsigned int *)t52);
    t47 = (~(t46));
    t48 = *((unsigned int *)t28);
    t49 = (t48 & t47);
    t53 = (t49 != 0);
    if (t53 > 0)
        goto LAB83;

LAB84:
LAB85:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2888);
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
        goto LAB90;

LAB87:    if (t18 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t13) = 1;

LAB90:    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB91;

LAB92:
LAB93:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2888);
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
        goto LAB128;

LAB125:    if (t18 != 0)
        goto LAB127;

LAB126:    *((unsigned int *)t13) = 1;

LAB128:    memset(t28, 0, 8);
    t33 = (t13 + 4);
    t21 = *((unsigned int *)t33);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t33) != 0)
        goto LAB131;

LAB132:    t36 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = *((unsigned int *)t36);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB133;

LAB134:    memcpy(t59, t28, 8);

LAB135:    t98 = (t59 + 4);
    t91 = *((unsigned int *)t98);
    t92 = (~(t91));
    t99 = *((unsigned int *)t59);
    t100 = (t99 & t92);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB147;

LAB148:
LAB149:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2888);
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
        goto LAB154;

LAB151:    if (t18 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t13) = 1;

LAB154:    memset(t28, 0, 8);
    t33 = (t13 + 4);
    t21 = *((unsigned int *)t33);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t33) != 0)
        goto LAB157;

LAB158:    t36 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = *((unsigned int *)t36);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB159;

LAB160:    memcpy(t59, t28, 8);

LAB161:    t98 = (t59 + 4);
    t91 = *((unsigned int *)t98);
    t92 = (~(t91));
    t99 = *((unsigned int *)t59);
    t100 = (t99 & t92);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB173;

LAB174:
LAB175:    goto LAB77;

LAB81:    t50 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(78, ng0);

LAB86:    xsi_set_current_line(79, ng0);
    t58 = (t0 + 2888);
    t63 = (t58 + 56U);
    t64 = *((char **)t63);
    t65 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t64, 5, t65, 32);
    t73 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t73, t35, 0, 0, 5, 0LL);
    goto LAB85;

LAB89:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(81, ng0);

LAB94:    xsi_set_current_line(82, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB95:    t5 = ((char*)((ng3)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t78 == 1)
        goto LAB96;

LAB97:    t2 = ((char*)((ng4)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t78 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng6)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t78 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng7)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t78 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB93;

LAB96:    xsi_set_current_line(86, ng0);

LAB105:    xsi_set_current_line(87, ng0);
    t11 = (t0 + 3208);
    t12 = (t11 + 56U);
    t26 = *((char **)t12);
    xsi_vlogtype_sign_extend(t95, 64, t26, 32);
    t27 = (t0 + 3368);
    t33 = (t27 + 56U);
    t34 = *((char **)t33);
    xsi_vlogtype_sign_extend(t96, 64, t34, 32);
    xsi_vlog_signed_multiply(t97, 64, t95, 64, t96, 64);
    t36 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t36, t97, 0, 0, 32, 0LL);
    t37 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t37, t97, 32, 0, 32, 0LL);
    goto LAB104;

LAB98:    xsi_set_current_line(89, ng0);

LAB106:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 3208);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 3368);
    t26 = (t12 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_unsigned_multiply(t95, 64, t11, 32, t27, 32);
    t33 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t33, t95, 0, 0, 32, 0LL);
    t34 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t34, t95, 32, 0, 32, 0LL);
    goto LAB104;

LAB100:    xsi_set_current_line(92, ng0);

LAB107:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 3368);
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
        goto LAB109;

LAB108:    if (t18 != 0)
        goto LAB110;

LAB111:    t34 = (t13 + 4);
    t21 = *((unsigned int *)t34);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB112;

LAB113:
LAB114:    goto LAB104;

LAB102:    xsi_set_current_line(98, ng0);

LAB116:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 3368);
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
        goto LAB118;

LAB117:    if (t18 != 0)
        goto LAB119;

LAB120:    t34 = (t13 + 4);
    t21 = *((unsigned int *)t34);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB121;

LAB122:
LAB123:    goto LAB104;

LAB109:    *((unsigned int *)t13) = 1;
    goto LAB111;

LAB110:    t33 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB111;

LAB112:    xsi_set_current_line(93, ng0);

LAB115:    xsi_set_current_line(94, ng0);
    t36 = (t0 + 3208);
    t37 = (t36 + 56U);
    t50 = *((char **)t37);
    t52 = (t0 + 3368);
    t58 = (t52 + 56U);
    t63 = *((char **)t58);
    memset(t51, 0, 8);
    xsi_vlog_signed_mod(t51, 32, t50, 32, t63, 32);
    t64 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t64, t51, 0, 0, 32, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t26 = *((char **)t12);
    memset(t35, 0, 8);
    xsi_vlog_signed_divide(t35, 32, t5, 32, t26, 32);
    t27 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t27, t35, 0, 0, 32, 0LL);
    goto LAB114;

LAB118:    *((unsigned int *)t13) = 1;
    goto LAB120;

LAB119:    t33 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB120;

LAB121:    xsi_set_current_line(99, ng0);

LAB124:    xsi_set_current_line(100, ng0);
    t36 = (t0 + 3208);
    t37 = (t36 + 56U);
    t50 = *((char **)t37);
    t52 = (t0 + 3368);
    t58 = (t52 + 56U);
    t63 = *((char **)t58);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_mod(t28, 32, t50, 32, t63, 32);
    t64 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t64, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t26 = *((char **)t12);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 32, t26, 32);
    t27 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 32, 0LL);
    goto LAB123;

LAB127:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB128;

LAB129:    *((unsigned int *)t28) = 1;
    goto LAB132;

LAB131:    t34 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB132;

LAB133:    t37 = (t0 + 2008U);
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
        goto LAB139;

LAB136:    if (t46 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t35) = 1;

LAB139:    memset(t51, 0, 8);
    t64 = (t35 + 4);
    t49 = *((unsigned int *)t64);
    t53 = (~(t49));
    t54 = *((unsigned int *)t35);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t64) != 0)
        goto LAB142;

LAB143:    t57 = *((unsigned int *)t28);
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
        goto LAB144;

LAB145:
LAB146:    goto LAB135;

LAB138:    t63 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB139;

LAB140:    *((unsigned int *)t51) = 1;
    goto LAB143;

LAB142:    t65 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB143;

LAB144:    t70 = *((unsigned int *)t59);
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
    goto LAB146;

LAB147:    xsi_set_current_line(106, ng0);

LAB150:    xsi_set_current_line(107, ng0);
    t102 = (t0 + 1528U);
    t103 = *((char **)t102);
    t102 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t102, t103, 0, 0, 32, 0LL);
    goto LAB149;

LAB153:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB154;

LAB155:    *((unsigned int *)t28) = 1;
    goto LAB158;

LAB157:    t34 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB158;

LAB159:    t37 = (t0 + 2008U);
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
        goto LAB165;

LAB162:    if (t46 != 0)
        goto LAB164;

LAB163:    *((unsigned int *)t35) = 1;

LAB165:    memset(t51, 0, 8);
    t64 = (t35 + 4);
    t49 = *((unsigned int *)t64);
    t53 = (~(t49));
    t54 = *((unsigned int *)t35);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t64) != 0)
        goto LAB168;

LAB169:    t57 = *((unsigned int *)t28);
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
        goto LAB170;

LAB171:
LAB172:    goto LAB161;

LAB164:    t63 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB165;

LAB166:    *((unsigned int *)t51) = 1;
    goto LAB169;

LAB168:    t65 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB169;

LAB170:    t70 = *((unsigned int *)t59);
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
    goto LAB172;

LAB173:    xsi_set_current_line(109, ng0);

LAB176:    xsi_set_current_line(110, ng0);
    t102 = (t0 + 1528U);
    t103 = *((char **)t102);
    t102 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t102, t103, 0, 0, 32, 0LL);
    goto LAB175;

}


extern void work_m_00000000003428926433_0845492209_init()
{
	static char *pe[] = {(void *)Cont_40_0,(void *)Cont_41_1,(void *)Initial_43_2,(void *)Always_53_3};
	xsi_register_didat("work_m_00000000003428926433_0845492209", "isim/datapath_isim_beh.exe.sim/work/m_00000000003428926433_0845492209.didat");
	xsi_register_executes(pe);
}
