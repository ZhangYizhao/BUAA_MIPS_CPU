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
static const char *ng0 = "E:/CO_cpu/P7/rf_D.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {31, 0};
static int ng4[] = {1, 0};
static const char *ng5 = "%d@%h: $%d <= %h";



static void Cont_36_0(char *t0)
{
    char t5[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 0);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 4294967295U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 4294967295U);
    t22 = (t0 + 5144);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 5032);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_37_1(char *t0)
{
    char t5[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 0);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 4294967295U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 4294967295U);
    t22 = (t0 + 5208);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 5048);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Initial_39_2(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char t25[8];
    char t26[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    int t35;
    char *t36;
    unsigned int t37;
    int t38;
    int t39;
    char *t40;
    unsigned int t41;
    int t42;
    int t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    char *t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;

LAB0:    xsi_set_current_line(39, ng0);

LAB2:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB6:    xsi_set_current_line(41, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 3048);
    t16 = (t0 + 3048);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3048);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2888);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t28 = (t0 + 3048);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    t32 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t25, t26, t27, ((int*)(t30)), 2, t31, 32, 1, t32, 32, 1);
    t33 = (t14 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t15 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t35 && t38);
    t40 = (t25 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t39 && t42);
    t44 = (t26 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    t48 = (t27 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t52 = *((unsigned int *)t27);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t15);
    t55 = *((unsigned int *)t26);
    t56 = (t54 + t55);
    t57 = *((unsigned int *)t25);
    t58 = *((unsigned int *)t26);
    t59 = (t57 - t58);
    t60 = (t59 + 1);
    xsi_vlogvar_assign_value(t13, t12, t53, t56, t60);
    goto LAB8;

}

static void Always_45_3(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t26[8];
    char t27[8];
    char t28[8];
    char t85[16];
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
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    int t36;
    char *t37;
    unsigned int t38;
    int t39;
    int t40;
    char *t41;
    unsigned int t42;
    int t43;
    int t44;
    char *t45;
    unsigned int t46;
    int t47;
    int t48;
    char *t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
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
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5064);
    *((int *)t2) = 1;
    t3 = (t0 + 4744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t35 = (t9 ^ t10);
    t38 = (t8 | t35);
    t42 = *((unsigned int *)t4);
    t46 = *((unsigned int *)t5);
    t50 = (t42 | t46);
    t53 = (~(t50));
    t55 = (t38 & t53);
    if (t55 != 0)
        goto LAB19;

LAB16:    if (t50 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t13) = 1;

LAB19:    t12 = (t13 + 4);
    t56 = *((unsigned int *)t12);
    t58 = (~(t56));
    t59 = *((unsigned int *)t13);
    t62 = (t59 & t58);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(47, ng0);
    xsi_set_current_line(47, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(47, ng0);

LAB13:    xsi_set_current_line(48, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 3048);
    t17 = (t0 + 3048);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2888);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t29 = (t0 + 3048);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng3)));
    t33 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t26, t27, t28, ((int*)(t31)), 2, t32, 32, 1, t33, 32, 1);
    t34 = (t15 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t16 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    t40 = (t36 && t39);
    t41 = (t26 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t40 && t43);
    t45 = (t27 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t44 && t47);
    t49 = (t28 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t53 = *((unsigned int *)t28);
    t54 = (t53 + 0);
    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t27);
    t57 = (t55 + t56);
    t58 = *((unsigned int *)t26);
    t59 = *((unsigned int *)t27);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, t54, t57, t61, 0LL);
    goto LAB15;

LAB18:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(52, ng0);

LAB23:    xsi_set_current_line(53, ng0);
    t14 = (t0 + 1368U);
    t17 = *((char **)t14);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t18 = (t17 + 4);
    t19 = (t14 + 4);
    t64 = *((unsigned int *)t17);
    t65 = *((unsigned int *)t14);
    t66 = (t64 ^ t65);
    t67 = *((unsigned int *)t18);
    t68 = *((unsigned int *)t19);
    t69 = (t67 ^ t68);
    t70 = (t66 | t69);
    t71 = *((unsigned int *)t18);
    t72 = *((unsigned int *)t19);
    t73 = (t71 | t72);
    t74 = (~(t73));
    t75 = (t70 & t74);
    if (t75 != 0)
        goto LAB27;

LAB24:    if (t73 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t15) = 1;

LAB27:    t21 = (t15 + 4);
    t76 = *((unsigned int *)t21);
    t77 = (~(t76));
    t78 = *((unsigned int *)t15);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(56, ng0);

LAB34:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t0 + 3048);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3048);
    t14 = (t12 + 64U);
    t17 = *((char **)t14);
    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t19, 5, 2);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t36 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t39 = (!(t7));
    t40 = (t36 && t39);
    if (t40 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(58, ng0);
    t2 = xsi_vlog_time(t85, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = (t0 + 1528U);
    t11 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t85, 64, (char)118, t4, 32, (char)118, t5, 5, (char)118, t11, 32);

LAB30:    goto LAB22;

LAB26:    t20 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(53, ng0);

LAB31:    xsi_set_current_line(54, ng0);
    t22 = ((char*)((ng1)));
    t23 = (t0 + 3048);
    t24 = (t0 + 3048);
    t25 = (t24 + 72U);
    t29 = *((char **)t25);
    t30 = (t0 + 3048);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = (t0 + 1368U);
    t34 = *((char **)t33);
    xsi_vlog_generic_convert_array_indices(t16, t26, t29, t32, 2, 1, t34, 5, 2);
    t33 = (t16 + 4);
    t81 = *((unsigned int *)t33);
    t36 = (!(t81));
    t37 = (t26 + 4);
    t82 = *((unsigned int *)t37);
    t39 = (!(t82));
    t40 = (t36 && t39);
    if (t40 == 1)
        goto LAB32;

LAB33:    goto LAB30;

LAB32:    t83 = *((unsigned int *)t16);
    t84 = *((unsigned int *)t26);
    t43 = (t83 - t84);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, *((unsigned int *)t26), t44, 0LL);
    goto LAB33;

LAB35:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t43 = (t8 - t9);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t15), t44, 0LL);
    goto LAB36;

}


extern void work_m_00000000002226879511_1318882496_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Cont_37_1,(void *)Initial_39_2,(void *)Always_45_3};
	xsi_register_didat("work_m_00000000002226879511_1318882496", "isim/mips_test_isim_beh.exe.sim/work/m_00000000002226879511_1318882496.didat");
	xsi_register_executes(pe);
}
