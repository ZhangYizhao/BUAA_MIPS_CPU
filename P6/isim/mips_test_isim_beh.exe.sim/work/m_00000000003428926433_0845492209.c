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
static const char *ng0 = "E:/CO_cpu/P6/md_E.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {5, 0};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {10, 0};
static int ng10[] = {2, 0};



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

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
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

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
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

static void Initial_44_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(44, ng0);

LAB2:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
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
    char t87[8];
    char t102[8];
    char t118[8];
    char t126[8];
    char t162[16];
    char t163[16];
    char t164[16];
    char t166[16];
    char t167[16];
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
    char *t88;
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
    unsigned int t99;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;

LAB0:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5704);
    *((int *)t2) = 1;
    t3 = (t0 + 5384);
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

LAB10:    xsi_set_current_line(65, ng0);
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
LAB17:    xsi_set_current_line(78, ng0);
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
        goto LAB92;

LAB89:    if (t18 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t13) = 1;

LAB92:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB93;

LAB94:
LAB95:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(65, ng0);

LAB18:    xsi_set_current_line(66, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(70, ng0);
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

LAB29:    memset(t87, 0, 8);
    t88 = (t59 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t59);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t88) != 0)
        goto LAB43;

LAB44:    t95 = (t87 + 4);
    t96 = *((unsigned int *)t87);
    t97 = (!(t96));
    t98 = *((unsigned int *)t95);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB45;

LAB46:    memcpy(t126, t87, 8);

LAB47:    t154 = (t126 + 4);
    t155 = *((unsigned int *)t154);
    t156 = (~(t155));
    t157 = *((unsigned int *)t126);
    t158 = (t157 & t156);
    t159 = (t158 != 0);
    if (t159 > 0)
        goto LAB59;

LAB60:
LAB61:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
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
        goto LAB66;

LAB63:    if (t18 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t13) = 1;

LAB66:    memset(t28, 0, 8);
    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t12) != 0)
        goto LAB69;

LAB70:    t27 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = *((unsigned int *)t27);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB71;

LAB72:    memcpy(t59, t28, 8);

LAB73:    t88 = (t59 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t59);
    t92 = (t91 & t90);
    t93 = (t92 != 0);
    if (t93 > 0)
        goto LAB85;

LAB86:
LAB87:    goto LAB17;

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

LAB41:    *((unsigned int *)t87) = 1;
    goto LAB44;

LAB43:    t94 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB44;

LAB45:    t100 = (t0 + 1848U);
    t101 = *((char **)t100);
    t100 = ((char*)((ng5)));
    memset(t102, 0, 8);
    t103 = (t101 + 4);
    t104 = (t100 + 4);
    t105 = *((unsigned int *)t101);
    t106 = *((unsigned int *)t100);
    t107 = (t105 ^ t106);
    t108 = *((unsigned int *)t103);
    t109 = *((unsigned int *)t104);
    t110 = (t108 ^ t109);
    t111 = (t107 | t110);
    t112 = *((unsigned int *)t103);
    t113 = *((unsigned int *)t104);
    t114 = (t112 | t113);
    t115 = (~(t114));
    t116 = (t111 & t115);
    if (t116 != 0)
        goto LAB51;

LAB48:    if (t114 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t102) = 1;

LAB51:    memset(t118, 0, 8);
    t119 = (t102 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t102);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t119) != 0)
        goto LAB54;

LAB55:    t127 = *((unsigned int *)t87);
    t128 = *((unsigned int *)t118);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = (t87 + 4);
    t131 = (t118 + 4);
    t132 = (t126 + 4);
    t133 = *((unsigned int *)t130);
    t134 = *((unsigned int *)t131);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = *((unsigned int *)t132);
    t137 = (t136 != 0);
    if (t137 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB47;

LAB50:    t117 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t118) = 1;
    goto LAB55;

LAB54:    t125 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB55;

LAB56:    t138 = *((unsigned int *)t126);
    t139 = *((unsigned int *)t132);
    *((unsigned int *)t126) = (t138 | t139);
    t140 = (t87 + 4);
    t141 = (t118 + 4);
    t142 = *((unsigned int *)t140);
    t143 = (~(t142));
    t144 = *((unsigned int *)t87);
    t145 = (t144 & t143);
    t146 = *((unsigned int *)t141);
    t147 = (~(t146));
    t148 = *((unsigned int *)t118);
    t149 = (t148 & t147);
    t150 = (~(t145));
    t151 = (~(t149));
    t152 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t152 & t150);
    t153 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t153 & t151);
    goto LAB58;

LAB59:    xsi_set_current_line(70, ng0);

LAB62:    xsi_set_current_line(71, ng0);
    t160 = ((char*)((ng6)));
    t161 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t161, t160, 0, 0, 5, 0LL);
    goto LAB61;

LAB65:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB66;

LAB67:    *((unsigned int *)t28) = 1;
    goto LAB70;

LAB69:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB70;

LAB71:    t33 = (t0 + 1848U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng8)));
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
        goto LAB77;

LAB74:    if (t47 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t35) = 1;

LAB77:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t52) != 0)
        goto LAB80;

LAB81:    t60 = *((unsigned int *)t28);
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
        goto LAB82;

LAB83:
LAB84:    goto LAB73;

LAB76:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB77;

LAB78:    *((unsigned int *)t51) = 1;
    goto LAB81;

LAB80:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB81;

LAB82:    t71 = *((unsigned int *)t59);
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
    goto LAB84;

LAB85:    xsi_set_current_line(73, ng0);

LAB88:    xsi_set_current_line(74, ng0);
    t94 = ((char*)((ng9)));
    t95 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t95, t94, 0, 0, 5, 0LL);
    goto LAB87;

LAB91:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(78, ng0);

LAB96:    xsi_set_current_line(79, ng0);
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
        goto LAB100;

LAB97:    if (t43 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t28) = 1;

LAB100:    t52 = (t28 + 4);
    t46 = *((unsigned int *)t52);
    t47 = (~(t46));
    t48 = *((unsigned int *)t28);
    t49 = (t48 & t47);
    t53 = (t49 != 0);
    if (t53 > 0)
        goto LAB101;

LAB102:
LAB103:    xsi_set_current_line(82, ng0);
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
        goto LAB108;

LAB105:    if (t18 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t13) = 1;

LAB108:    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB109;

LAB110:
LAB111:    xsi_set_current_line(110, ng0);
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
        goto LAB149;

LAB146:    if (t18 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t13) = 1;

LAB149:    memset(t28, 0, 8);
    t33 = (t13 + 4);
    t21 = *((unsigned int *)t33);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t33) != 0)
        goto LAB152;

LAB153:    t36 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = *((unsigned int *)t36);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB154;

LAB155:    memcpy(t59, t28, 8);

LAB156:    t100 = (t59 + 4);
    t92 = *((unsigned int *)t100);
    t93 = (~(t92));
    t96 = *((unsigned int *)t59);
    t97 = (t96 & t93);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB168;

LAB169:
LAB170:    xsi_set_current_line(113, ng0);
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
        goto LAB175;

LAB172:    if (t18 != 0)
        goto LAB174;

LAB173:    *((unsigned int *)t13) = 1;

LAB175:    memset(t28, 0, 8);
    t33 = (t13 + 4);
    t21 = *((unsigned int *)t33);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB176;

LAB177:    if (*((unsigned int *)t33) != 0)
        goto LAB178;

LAB179:    t36 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = *((unsigned int *)t36);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB180;

LAB181:    memcpy(t59, t28, 8);

LAB182:    t100 = (t59 + 4);
    t92 = *((unsigned int *)t100);
    t93 = (~(t92));
    t96 = *((unsigned int *)t59);
    t97 = (t96 & t93);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB194;

LAB195:
LAB196:    goto LAB95;

LAB99:    t50 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(79, ng0);

LAB104:    xsi_set_current_line(80, ng0);
    t58 = (t0 + 2888);
    t63 = (t58 + 56U);
    t64 = *((char **)t63);
    t65 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t64, 5, t65, 32);
    t73 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t73, t35, 0, 0, 5, 0LL);
    goto LAB103;

LAB107:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(82, ng0);

LAB112:    xsi_set_current_line(83, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB113:    t5 = ((char*)((ng3)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t78 == 1)
        goto LAB114;

LAB115:    t2 = ((char*)((ng4)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t78 == 1)
        goto LAB116;

LAB117:    t2 = ((char*)((ng7)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t78 == 1)
        goto LAB118;

LAB119:    t2 = ((char*)((ng8)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t78 == 1)
        goto LAB120;

LAB121:    t2 = ((char*)((ng5)));
    t78 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t78 == 1)
        goto LAB122;

LAB123:
LAB124:    goto LAB111;

LAB114:    xsi_set_current_line(87, ng0);

LAB125:    xsi_set_current_line(88, ng0);
    t11 = (t0 + 3208);
    t12 = (t11 + 56U);
    t26 = *((char **)t12);
    xsi_vlogtype_sign_extend(t162, 64, t26, 32);
    t27 = (t0 + 3368);
    t33 = (t27 + 56U);
    t34 = *((char **)t33);
    xsi_vlogtype_sign_extend(t163, 64, t34, 32);
    xsi_vlog_signed_multiply(t164, 64, t162, 64, t163, 64);
    t36 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t36, t164, 0, 0, 32, 0LL);
    t37 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t37, t164, 32, 0, 32, 0LL);
    goto LAB124;

LAB116:    xsi_set_current_line(90, ng0);

LAB126:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 3208);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 3368);
    t26 = (t12 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_unsigned_multiply(t162, 64, t11, 32, t27, 32);
    t33 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t33, t162, 0, 0, 32, 0LL);
    t34 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t34, t162, 32, 0, 32, 0LL);
    goto LAB124;

LAB118:    xsi_set_current_line(93, ng0);

LAB127:    xsi_set_current_line(94, ng0);
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
        goto LAB129;

LAB128:    if (t18 != 0)
        goto LAB130;

LAB131:    t34 = (t13 + 4);
    t21 = *((unsigned int *)t34);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB132;

LAB133:
LAB134:    goto LAB124;

LAB120:    xsi_set_current_line(99, ng0);

LAB136:    xsi_set_current_line(100, ng0);
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
        goto LAB138;

LAB137:    if (t18 != 0)
        goto LAB139;

LAB140:    t34 = (t13 + 4);
    t21 = *((unsigned int *)t34);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB141;

LAB142:
LAB143:    goto LAB124;

LAB122:    xsi_set_current_line(105, ng0);

LAB145:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 3208);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    xsi_vlogtype_sign_extend(t162, 64, t11, 32);
    t12 = (t0 + 3368);
    t26 = (t12 + 56U);
    t27 = *((char **)t26);
    xsi_vlogtype_sign_extend(t163, 64, t27, 32);
    xsi_vlog_signed_multiply(t164, 64, t162, 64, t163, 64);
    t33 = (t0 + 2328U);
    t34 = *((char **)t33);
    t33 = (t0 + 2168U);
    t36 = *((char **)t33);
    xsi_vlogtype_concat(t166, 64, 64, 2U, t36, 32, t34, 32);
    xsi_vlog_signed_add(t167, 64, t164, 64, t166, 64);
    t33 = (t0 + 3688);
    xsi_vlogvar_assign_value(t33, t167, 0, 0, 32);
    t37 = (t0 + 3528);
    xsi_vlogvar_assign_value(t37, t167, 32, 0, 32);
    goto LAB124;

LAB129:    *((unsigned int *)t13) = 1;
    goto LAB131;

LAB130:    t33 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB131;

LAB132:    xsi_set_current_line(94, ng0);

LAB135:    xsi_set_current_line(95, ng0);
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
    xsi_set_current_line(96, ng0);
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
    goto LAB134;

LAB138:    *((unsigned int *)t13) = 1;
    goto LAB140;

LAB139:    t33 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB140;

LAB141:    xsi_set_current_line(100, ng0);

LAB144:    xsi_set_current_line(101, ng0);
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
    xsi_set_current_line(102, ng0);
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
    goto LAB143;

LAB148:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB149;

LAB150:    *((unsigned int *)t28) = 1;
    goto LAB153;

LAB152:    t34 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB153;

LAB154:    t37 = (t0 + 2008U);
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
        goto LAB160;

LAB157:    if (t46 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t35) = 1;

LAB160:    memset(t51, 0, 8);
    t64 = (t35 + 4);
    t49 = *((unsigned int *)t64);
    t53 = (~(t49));
    t54 = *((unsigned int *)t35);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t64) != 0)
        goto LAB163;

LAB164:    t57 = *((unsigned int *)t28);
    t60 = *((unsigned int *)t51);
    t61 = (t57 & t60);
    *((unsigned int *)t59) = t61;
    t73 = (t28 + 4);
    t74 = (t51 + 4);
    t88 = (t59 + 4);
    t62 = *((unsigned int *)t73);
    t66 = *((unsigned int *)t74);
    t67 = (t62 | t66);
    *((unsigned int *)t88) = t67;
    t68 = *((unsigned int *)t88);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB165;

LAB166:
LAB167:    goto LAB156;

LAB159:    t63 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB160;

LAB161:    *((unsigned int *)t51) = 1;
    goto LAB164;

LAB163:    t65 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB164;

LAB165:    t70 = *((unsigned int *)t59);
    t71 = *((unsigned int *)t88);
    *((unsigned int *)t59) = (t70 | t71);
    t94 = (t28 + 4);
    t95 = (t51 + 4);
    t72 = *((unsigned int *)t28);
    t75 = (~(t72));
    t76 = *((unsigned int *)t94);
    t77 = (~(t76));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t95);
    t83 = (~(t81));
    t78 = (t75 & t77);
    t82 = (t80 & t83);
    t84 = (~(t78));
    t85 = (~(t82));
    t86 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t86 & t84);
    t89 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t89 & t85);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t84);
    t91 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t91 & t85);
    goto LAB167;

LAB168:    xsi_set_current_line(110, ng0);

LAB171:    xsi_set_current_line(111, ng0);
    t101 = (t0 + 1528U);
    t103 = *((char **)t101);
    t101 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t101, t103, 0, 0, 32, 0LL);
    goto LAB170;

LAB174:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB175;

LAB176:    *((unsigned int *)t28) = 1;
    goto LAB179;

LAB178:    t34 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB179;

LAB180:    t37 = (t0 + 2008U);
    t50 = *((char **)t37);
    t37 = ((char*)((ng10)));
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
        goto LAB186;

LAB183:    if (t46 != 0)
        goto LAB185;

LAB184:    *((unsigned int *)t35) = 1;

LAB186:    memset(t51, 0, 8);
    t64 = (t35 + 4);
    t49 = *((unsigned int *)t64);
    t53 = (~(t49));
    t54 = *((unsigned int *)t35);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB187;

LAB188:    if (*((unsigned int *)t64) != 0)
        goto LAB189;

LAB190:    t57 = *((unsigned int *)t28);
    t60 = *((unsigned int *)t51);
    t61 = (t57 & t60);
    *((unsigned int *)t59) = t61;
    t73 = (t28 + 4);
    t74 = (t51 + 4);
    t88 = (t59 + 4);
    t62 = *((unsigned int *)t73);
    t66 = *((unsigned int *)t74);
    t67 = (t62 | t66);
    *((unsigned int *)t88) = t67;
    t68 = *((unsigned int *)t88);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB191;

LAB192:
LAB193:    goto LAB182;

LAB185:    t63 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB186;

LAB187:    *((unsigned int *)t51) = 1;
    goto LAB190;

LAB189:    t65 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB190;

LAB191:    t70 = *((unsigned int *)t59);
    t71 = *((unsigned int *)t88);
    *((unsigned int *)t59) = (t70 | t71);
    t94 = (t28 + 4);
    t95 = (t51 + 4);
    t72 = *((unsigned int *)t28);
    t75 = (~(t72));
    t76 = *((unsigned int *)t94);
    t77 = (~(t76));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t95);
    t83 = (~(t81));
    t78 = (t75 & t77);
    t82 = (t80 & t83);
    t84 = (~(t78));
    t85 = (~(t82));
    t86 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t86 & t84);
    t89 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t89 & t85);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t84);
    t91 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t91 & t85);
    goto LAB193;

LAB194:    xsi_set_current_line(113, ng0);

LAB197:    xsi_set_current_line(114, ng0);
    t101 = (t0 + 1528U);
    t103 = *((char **)t101);
    t101 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t101, t103, 0, 0, 32, 0LL);
    goto LAB196;

}


extern void work_m_00000000003428926433_0845492209_init()
{
	static char *pe[] = {(void *)Cont_41_0,(void *)Cont_42_1,(void *)Initial_44_2,(void *)Always_54_3};
	xsi_register_didat("work_m_00000000003428926433_0845492209", "isim/mips_test_isim_beh.exe.sim/work/m_00000000003428926433_0845492209.didat");
	xsi_register_executes(pe);
}
