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
static const char *ng0 = "E:/CO_cpu/P7/F_unit.v";
static unsigned int ng1[] = {12288U, 0U};
static int ng2[] = {5, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {20479U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {31U, 0U};
static unsigned int ng10[] = {2348816163U, 0U};



static void NetDecl_42_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 7536);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 7376);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_45_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 5816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t39 = (t0 + 7600);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t43, 0, 8);
    t44 = 1U;
    t45 = t44;
    t46 = (t3 + 4);
    t47 = *((unsigned int *)t3);
    t44 = (t44 & t47);
    t48 = *((unsigned int *)t46);
    t45 = (t45 & t48);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 | t44);
    t51 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t51 | t45);
    xsi_driver_vfirst_trans(t39, 0, 0);
    t52 = (t0 + 7392);
    *((int *)t52) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng3)));
    goto LAB13;

LAB14:    t38 = ((char*)((ng4)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void Cont_46_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 7664);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 7408);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_48_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t31[8];
    char t47[8];
    char t51[8];
    char t59[8];
    char t87[8];
    char t103[8];
    char t107[8];
    char t115[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
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
    char *t101;
    char *t102;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;

LAB0:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3128U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng6)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB5;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB7:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB12;

LAB13:    memcpy(t59, t31, 8);

LAB14:    memset(t87, 0, 8);
    t88 = (t59 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t59);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t88) != 0)
        goto LAB29;

LAB30:    t95 = (t87 + 4);
    t96 = *((unsigned int *)t87);
    t97 = (!(t96));
    t98 = *((unsigned int *)t95);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB31;

LAB32:    memcpy(t115, t87, 8);

LAB33:    memset(t4, 0, 8);
    t143 = (t115 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t115);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t143) != 0)
        goto LAB48;

LAB49:    t150 = (t4 + 4);
    t151 = *((unsigned int *)t4);
    t152 = *((unsigned int *)t150);
    t153 = (t151 || t152);
    if (t153 > 0)
        goto LAB50;

LAB51:    t155 = *((unsigned int *)t4);
    t156 = (~(t155));
    t157 = *((unsigned int *)t150);
    t158 = (t156 || t157);
    if (t158 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t150) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t4) > 0)
        goto LAB56;

LAB57:    memcpy(t3, t159, 8);

LAB58:    t160 = (t0 + 7728);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    t163 = (t162 + 56U);
    t164 = *((char **)t163);
    memset(t164, 0, 8);
    t165 = 31U;
    t166 = t165;
    t167 = (t3 + 4);
    t168 = *((unsigned int *)t3);
    t165 = (t165 & t168);
    t169 = *((unsigned int *)t167);
    t166 = (t166 & t169);
    t170 = (t164 + 4);
    t171 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t171 | t165);
    t172 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t172 | t166);
    xsi_driver_vfirst_trans(t160, 0, 4);
    t173 = (t0 + 7424);
    *((int *)t173) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB10:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t45 = (t0 + 3128U);
    t46 = *((char **)t45);
    t45 = ((char*)((ng7)));
    memset(t47, 0, 8);
    t48 = (t46 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB16;

LAB15:    t49 = (t45 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t46) > *((unsigned int *)t45))
        goto LAB17;

LAB18:    memset(t51, 0, 8);
    t52 = (t47 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t47);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t52) != 0)
        goto LAB22;

LAB23:    t60 = *((unsigned int *)t31);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t31 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB14;

LAB16:    t50 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t47) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t51) = 1;
    goto LAB23;

LAB22:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB23;

LAB24:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t31 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t31);
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
    goto LAB26;

LAB27:    *((unsigned int *)t87) = 1;
    goto LAB30;

LAB29:    t94 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB30;

LAB31:    t101 = (t0 + 3128U);
    t102 = *((char **)t101);
    t101 = ((char*)((ng1)));
    memset(t103, 0, 8);
    t104 = (t102 + 4);
    if (*((unsigned int *)t104) != 0)
        goto LAB35;

LAB34:    t105 = (t101 + 4);
    if (*((unsigned int *)t105) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t102) < *((unsigned int *)t101))
        goto LAB36;

LAB37:    memset(t107, 0, 8);
    t108 = (t103 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t103);
    t112 = (t111 & t110);
    t113 = (t112 & 1U);
    if (t113 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t108) != 0)
        goto LAB41;

LAB42:    t116 = *((unsigned int *)t87);
    t117 = *((unsigned int *)t107);
    t118 = (t116 | t117);
    *((unsigned int *)t115) = t118;
    t119 = (t87 + 4);
    t120 = (t107 + 4);
    t121 = (t115 + 4);
    t122 = *((unsigned int *)t119);
    t123 = *((unsigned int *)t120);
    t124 = (t122 | t123);
    *((unsigned int *)t121) = t124;
    t125 = *((unsigned int *)t121);
    t126 = (t125 != 0);
    if (t126 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB33;

LAB35:    t106 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t103) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t107) = 1;
    goto LAB42;

LAB41:    t114 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t114) = 1;
    goto LAB42;

LAB43:    t127 = *((unsigned int *)t115);
    t128 = *((unsigned int *)t121);
    *((unsigned int *)t115) = (t127 | t128);
    t129 = (t87 + 4);
    t130 = (t107 + 4);
    t131 = *((unsigned int *)t129);
    t132 = (~(t131));
    t133 = *((unsigned int *)t87);
    t134 = (t133 & t132);
    t135 = *((unsigned int *)t130);
    t136 = (~(t135));
    t137 = *((unsigned int *)t107);
    t138 = (t137 & t136);
    t139 = (~(t134));
    t140 = (~(t138));
    t141 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t141 & t139);
    t142 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t142 & t140);
    goto LAB45;

LAB46:    *((unsigned int *)t4) = 1;
    goto LAB49;

LAB48:    t149 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB49;

LAB50:    t154 = ((char*)((ng8)));
    goto LAB51;

LAB52:    t159 = ((char*)((ng9)));
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t3, 5, t154, 5, t159, 5);
    goto LAB58;

LAB56:    memcpy(t3, t154, 8);
    goto LAB58;

}

static void Initial_53_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(53, ng0);

LAB2:    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 4168);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_79_5(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 6808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 7440);
    *((int *)t2) = 1;
    t3 = (t0 + 6840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t6, 8);

LAB12:    t55 = (t27 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t27);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(86, ng0);

LAB24:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t2) == 0)
        goto LAB25;

LAB27:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB28:    t5 = (t6 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB30;

LAB29:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    memset(t20, 0, 8);
    t13 = (t6 + 4);
    t25 = *((unsigned int *)t13);
    t28 = (~(t25));
    t29 = *((unsigned int *)t6);
    t30 = (t29 & t28);
    t34 = (t30 & 1U);
    if (t34 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t13) != 0)
        goto LAB33;

LAB34:    t19 = (t20 + 4);
    t35 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t19);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB35;

LAB36:    memcpy(t63, t20, 8);

LAB37:    t62 = (t63 + 4);
    t75 = *((unsigned int *)t62);
    t76 = (~(t75));
    t77 = *((unsigned int *)t63);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t2) == 0)
        goto LAB49;

LAB51:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB52:    t5 = (t6 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB54;

LAB53:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t13 = (t6 + 4);
    t25 = *((unsigned int *)t13);
    t28 = (~(t25));
    t29 = *((unsigned int *)t6);
    t30 = (t29 & t28);
    t34 = (t30 != 0);
    if (t34 > 0)
        goto LAB55;

LAB56:
LAB57:
LAB47:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 2328U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t18) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB19;

LAB20:    xsi_set_current_line(80, ng0);

LAB23:    xsi_set_current_line(81, ng0);
    t61 = ((char*)((ng6)));
    t62 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t62, t61, 0, 0, 32, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB25:    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB30:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t16 | t17);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t5) = (t21 | t22);
    goto LAB29;

LAB31:    *((unsigned int *)t20) = 1;
    goto LAB34;

LAB33:    t18 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB34;

LAB35:    t26 = (t0 + 3608U);
    t31 = *((char **)t26);
    memset(t27, 0, 8);
    t26 = (t31 + 4);
    t38 = *((unsigned int *)t26);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t43 = (t40 & t39);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t26) != 0)
        goto LAB40;

LAB41:    t45 = *((unsigned int *)t20);
    t47 = *((unsigned int *)t27);
    t48 = (t45 & t47);
    *((unsigned int *)t63) = t48;
    t33 = (t20 + 4);
    t41 = (t27 + 4);
    t42 = (t63 + 4);
    t49 = *((unsigned int *)t33);
    t51 = *((unsigned int *)t41);
    t52 = (t49 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB37;

LAB38:    *((unsigned int *)t27) = 1;
    goto LAB41;

LAB40:    t32 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB41;

LAB42:    t56 = *((unsigned int *)t63);
    t57 = *((unsigned int *)t42);
    *((unsigned int *)t63) = (t56 | t57);
    t55 = (t20 + 4);
    t61 = (t27 + 4);
    t58 = *((unsigned int *)t20);
    t59 = (~(t58));
    t60 = *((unsigned int *)t55);
    t64 = (~(t60));
    t65 = *((unsigned int *)t27);
    t66 = (~(t65));
    t67 = *((unsigned int *)t61);
    t68 = (~(t67));
    t46 = (t59 & t64);
    t50 = (t66 & t68);
    t69 = (~(t46));
    t70 = (~(t50));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t73 & t69);
    t74 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t74 & t70);
    goto LAB44;

LAB45:    xsi_set_current_line(87, ng0);

LAB48:    xsi_set_current_line(88, ng0);
    t80 = ((char*)((ng6)));
    t81 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t81, t80, 0, 0, 32, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB49:    *((unsigned int *)t6) = 1;
    goto LAB52;

LAB54:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t16 | t17);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t5) = (t21 | t22);
    goto LAB53;

LAB55:    xsi_set_current_line(93, ng0);

LAB58:    xsi_set_current_line(94, ng0);
    t18 = (t0 + 2808U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng8)));
    memset(t63, 0, 8);
    t26 = (t19 + 4);
    t31 = (t18 + 4);
    t35 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t18);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t31);
    t40 = (t38 ^ t39);
    t43 = (t37 | t40);
    t44 = *((unsigned int *)t26);
    t45 = *((unsigned int *)t31);
    t47 = (t44 | t45);
    t48 = (~(t47));
    t49 = (t43 & t48);
    if (t49 != 0)
        goto LAB62;

LAB59:    if (t47 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t63) = 1;

LAB62:    memset(t27, 0, 8);
    t33 = (t63 + 4);
    t51 = *((unsigned int *)t33);
    t52 = (~(t51));
    t53 = *((unsigned int *)t63);
    t54 = (t53 & t52);
    t56 = (t54 & 1U);
    if (t56 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t33) != 0)
        goto LAB65;

LAB66:    t42 = (t27 + 4);
    t57 = *((unsigned int *)t27);
    t58 = *((unsigned int *)t42);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB67;

LAB68:    t60 = *((unsigned int *)t27);
    t64 = (~(t60));
    t65 = *((unsigned int *)t42);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t42) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t27) > 0)
        goto LAB73;

LAB74:    memcpy(t20, t62, 8);

LAB75:    t61 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t61, t20, 0, 0, 32, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB57;

LAB61:    t32 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t27) = 1;
    goto LAB66;

LAB65:    t41 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB66;

LAB67:    t55 = ((char*)((ng10)));
    goto LAB68;

LAB69:    t61 = (t0 + 3288U);
    t62 = *((char **)t61);
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t20, 32, t55, 32, t62, 32);
    goto LAB75;

LAB73:    memcpy(t20, t55, 8);
    goto LAB75;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char t21[8];
    char t36[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;

LAB0:    t1 = (t0 + 7056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    memset(t21, 0, 8);
    t22 = (t3 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t3);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t22) != 0)
        goto LAB12;

LAB13:    t29 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = (!(t30));
    t32 = *((unsigned int *)t29);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t43, t21, 8);

LAB16:    t71 = (t0 + 7792);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    memset(t75, 0, 8);
    t76 = 1U;
    t77 = t76;
    t78 = (t43 + 4);
    t79 = *((unsigned int *)t43);
    t76 = (t76 & t79);
    t80 = *((unsigned int *)t78);
    t77 = (t77 & t80);
    t81 = (t75 + 4);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t82 | t76);
    t83 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t83 | t77);
    xsi_driver_vfirst_trans(t71, 0, 0);
    t84 = (t0 + 7456);
    *((int *)t84) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

LAB10:    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB12:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 2328U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t35 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t34) != 0)
        goto LAB19;

LAB20:    t44 = *((unsigned int *)t21);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = (t21 + 4);
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB21:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t21 + 4);
    t58 = (t36 + 4);
    t59 = *((unsigned int *)t57);
    t60 = (~(t59));
    t61 = *((unsigned int *)t21);
    t62 = (t61 & t60);
    t63 = *((unsigned int *)t58);
    t64 = (~(t63));
    t65 = *((unsigned int *)t36);
    t66 = (t65 & t64);
    t67 = (~(t62));
    t68 = (~(t66));
    t69 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t69 & t67);
    t70 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t70 & t68);
    goto LAB23;

}


extern void work_m_00000000000545902962_1222934841_init()
{
	static char *pe[] = {(void *)NetDecl_42_0,(void *)Cont_45_1,(void *)Cont_46_2,(void *)Cont_48_3,(void *)Initial_53_4,(void *)Always_79_5,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000545902962_1222934841", "isim/mips_test_isim_beh.exe.sim/work/m_00000000000545902962_1222934841.didat");
	xsi_register_executes(pe);
}
