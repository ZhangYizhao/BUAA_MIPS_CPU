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
static const char *ng0 = "E:/CO_cpu/P6/npc_D.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {14, 0};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t35[8];
    char t45[8];
    char t61[8];
    char t62[8];
    char t72[8];
    char t76[8];
    char t84[8];
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
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
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

LAB13:    t55 = *((unsigned int *)t4);
    t56 = (~(t55));
    t57 = *((unsigned int *)t29);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t84, 8);

LAB20:    t85 = (t0 + 3088);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memcpy(t89, t3, 8);
    xsi_driver_vfirst_trans(t85, 0, 31);
    t90 = (t0 + 3008);
    *((int *)t90) = 1;

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

LAB12:    t34 = ((char*)((ng2)));
    t36 = (t0 + 1368U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (t39 >> 0);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t36) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 67108863U);
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 67108863U);
    t46 = (t0 + 1208U);
    t47 = *((char **)t46);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t48 = (t47 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (t49 >> 28);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 28);
    *((unsigned int *)t46) = t52;
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 15U);
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & 15U);
    xsi_vlogtype_concat(t33, 32, 32, 3U, t45, 4, t35, 26, t34, 2);
    goto LAB13;

LAB14:    t59 = (t0 + 1208U);
    t60 = *((char **)t59);
    t59 = ((char*)((ng2)));
    t63 = (t0 + 1368U);
    t64 = *((char **)t63);
    memset(t62, 0, 8);
    t63 = (t62 + 4);
    t65 = (t64 + 4);
    t66 = *((unsigned int *)t64);
    t67 = (t66 >> 0);
    *((unsigned int *)t62) = t67;
    t68 = *((unsigned int *)t65);
    t69 = (t68 >> 0);
    *((unsigned int *)t63) = t69;
    t70 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t70 & 65535U);
    t71 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t71 & 65535U);
    t73 = ((char*)((ng3)));
    t74 = (t0 + 1368U);
    t75 = *((char **)t74);
    memset(t76, 0, 8);
    t74 = (t76 + 4);
    t77 = (t75 + 4);
    t78 = *((unsigned int *)t75);
    t79 = (t78 >> 15);
    t80 = (t79 & 1);
    *((unsigned int *)t76) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 >> 15);
    t83 = (t82 & 1);
    *((unsigned int *)t74) = t83;
    xsi_vlog_mul_concat(t72, 14, 1, t73, 1U, t76, 1);
    xsi_vlogtype_concat(t61, 32, 32, 3U, t72, 14, t62, 16, t59, 2);
    memset(t84, 0, 8);
    xsi_vlog_unsigned_add(t84, 32, t60, 32, t61, 32);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t84, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}


extern void work_m_00000000004142774672_2212386731_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("work_m_00000000004142774672_2212386731", "isim/mips_test_isim_beh.exe.sim/work/m_00000000004142774672_2212386731.didat");
	xsi_register_executes(pe);
}
