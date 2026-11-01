/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c2cb8
 * function: operation_8c1c2cb8
 * language: c
 * reference size: 1472 bytes
 * compiled size: 1468 bytes (-0.3%)
 * differing lines: 30 of 559 reference instruction lines
 * differing bytes: 581
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_230 Arg0_230;
typedef struct S_vv38 S_vv38;
typedef struct S_vv46 S_vv46;
typedef struct S_vv51 S_vv51;
typedef struct S_vv60 S_vv60;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0xcc];
    Block80 f134;
    Arg0_184 *f184;
    char unknown188[0xa0];
    char f228;
    char unknown229[0x7];
    Arg0_230 *f230;
    int f234;
};
struct S_g8c4db9e0 {
    char unknown0[0x370];
    Block80 f370;
};
struct Arg0_184 {
    char unknown0[0x3e4];
    int f3e4;
};
struct S_vv38 {
    char unknown0[0x4];
    short f04;
};
struct S_vv46 {
    char unknown0[0x4];
    short f04;
};
struct S_vv51 {
    char unknown0[0x4];
    short f04;
};
struct S_vv60 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4db9e0 *g_8c4db9e0;
extern int g_8c4dbaec;
extern char g_8c4e2ce0;
extern int operation_8c1c3470(Object *);
extern int operation_8c19b054(void);
extern int call_8c37284a(int);
extern int call_8c372d38(int, void *);
extern void operation_8c180c48(void);
extern int operation_8c1819e8(void);
extern int game_malloc_8c011ecc(int);
extern void call_8c0354cc(int, Object *, void *, int);
extern void operation_8c1c3aa4(void *);
extern void operation_8c1c35bc(void *);
extern void call_8c1c3738(Object *);
extern int TAdDrawLineCtrl_create_8c227b34(int, int, float);
extern void operation_8c01c5f0(Object *);
extern void operation_8c0355fc(void *, int);
void operation_8c1c2cb8(Object *o)
{
    int v30;
    S_vv38 *v38;
    S_vv46 *v46;
    S_vv51 *v51;
    S_vv60 *v60;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    switch (g_8c4e2ce0) {
    case 0:
        t1 = operation_8c1c3470(o);
        if (t1 != 0) {
            g_8c4e2ce0 = 1;
        }
        t2 = operation_8c19b054();
        if (o->f228 != (char)t2) {
            g_8c4e2ce0 = 0;
        }
        t3 = operation_8c19b054();
        o->f228 = t3;
        return;
    case 1:
        t4 = operation_8c19b054();
        t5 = call_8c37284a((int)((char)t4));
        if (t5 == 0) {
            g_8c4e2ce0 = 2;
        }
        t6 = operation_8c19b054();
        if (o->f228 != (char)t6) {
            g_8c4e2ce0 = 0;
        }
        t7 = operation_8c19b054();
        o->f228 = t7;
        t8 = operation_8c1c3470(o);
        if (t8 != 0) {
            return;
        }
        g_8c4e2ce0 = 0;
        return;
    case 2:
        t9 = operation_8c19b054();
        t10 = call_8c372d38((int)((char)t9), (void *)((void *)0x8c319870));
        if (t10 == 0) {
            if (g_8c4dbaec == 0) {
                operation_8c180c48();
                g_8c4e2ce0 = 3;
            }
        }
        t11 = operation_8c19b054();
        if (o->f228 != (char)t11) {
            g_8c4e2ce0 = 0;
        }
        t12 = operation_8c19b054();
        o->f228 = t12;
        t13 = operation_8c1c3470(o);
        if (t13 != 0) {
            return;
        }
        g_8c4e2ce0 = 0;
        return;
    case 3:
        if (g_8c4dbaec == 0) {
            g_8c4e2ce0 = 4;
        }
        t14 = operation_8c19b054();
        if (o->f228 != (char)t14) {
            g_8c4e2ce0 = 0;
        }
        t15 = operation_8c19b054();
        o->f228 = t15;
        t16 = operation_8c1c3470(o);
        if (t16 != 0) {
            return;
        }
        g_8c4e2ce0 = 0;
        return;
    case 4:
        t17 = operation_8c1819e8();
        if (t17 != 4) {
            g_8c4e2ce0 = 5;
        }
        t18 = operation_8c19b054();
        if (o->f228 != (char)t18) {
            g_8c4e2ce0 = 0;
        }
        t19 = operation_8c19b054();
        o->f228 = t19;
        t20 = operation_8c1c3470(o);
        if (t20 != 0) {
            return;
        }
        g_8c4e2ce0 = 0;
        return;
    case 5:
        t21 = operation_8c1819e8();
        if (t21 != 5) {
            g_8c4e2ce0 = 6;
        }
        t22 = operation_8c19b054();
        if (o->f228 != (char)t22) {
            g_8c4e2ce0 = 0;
        }
        t23 = operation_8c19b054();
        o->f228 = t23;
        t24 = operation_8c1c3470(o);
        if (t24 != 0) {
            return;
        }
        g_8c4e2ce0 = 0;
        return;
    case 6:
        t25 = operation_8c1819e8();
        if (t25 != 1) {
            g_8c4e2ce0 = 7;
        }
        t26 = operation_8c19b054();
        if (o->f228 != (char)t26) {
            g_8c4e2ce0 = 0;
        }
        t27 = operation_8c19b054();
        o->f228 = t27;
        t28 = operation_8c1c3470(o);
        if (t28 != 0) {
            return;
        }
        g_8c4e2ce0 = 0;
        return;
    case 7:
        *(Block80 *)&o->f134 = *(Block80 *)&g_8c4db9e0->f370;
        t29 = game_malloc_8c011ecc(0x3e8);
        if (t29 != 0) {
            call_8c0354cc(t29, o, (void *)(&o->f134), 0);
        }
        o->f184 = (Arg0_184 *)t29;
        operation_8c1c3aa4((void *)o);
        operation_8c1c35bc((void *)o);
        call_8c1c3738(o);
        t30 = TAdDrawLineCtrl_create_8c227b34((int)o, 5, 0.0f);
        o->f230 = (Arg0_230 *)t30;
        g_8c4e2ce0 = 8;
        t31 = (char)operation_8c19b054();
        if (o->f228 != t31) {
            o->f234 = 1;
        }
        t32 = operation_8c1c3470(o);
        if (t32 != 0) {
            return;
        }
        o->f234 = 1;
        return;
    case 8:
        v30 = (int)(o->f184->f3e4 == 0);
        if (v30 != 0) {
            g_8c4e2ce0 = 9;
        }
        t33 = operation_8c19b054();
        if (o->f228 != (char)t33) {
            o->f234 = 1;
        }
        t34 = operation_8c1c3470(o);
        if (t34 != 0) {
            return;
        }
        o->f234 = 1;
        return;
    case 9:
        operation_8c01c5f0(o);
        o->f64 -= 0xc8;
        if (o->f234 != 0) {
            if (o->f184 != 0) {
                operation_8c0355fc((void *)(o->f184), 1);
                o->f184 = (Arg0_184 *)0;
            }
            o->f64 = 0xf3d5;
            g_8c4e2ce0 = 0;
            if (o->f230 != 0) {
                v38 = (S_vv38 *)o->f230;
                v38->f04 |= 1;
                o->f230 = (Arg0_230 *)0;
            }
            o->f234 = 0;
        }
        t35 = operation_8c19b054();
        if (o->f228 != (char)t35) {
            if (o->f184 != 0) {
                operation_8c0355fc((void *)(o->f184), 1);
                o->f184 = (Arg0_184 *)0;
            }
            o->f64 = 0xf3d5;
            g_8c4e2ce0 = 0;
            if (o->f230 != 0) {
                v46 = (S_vv46 *)o->f230;
                v46->f04 |= 1;
                o->f230 = (Arg0_230 *)0;
            }
        }
        t36 = operation_8c19b054();
        o->f228 = t36;
        t37 = operation_8c1c3470(o);
        if (t37 == 0) {
            o->f64 = 0xf3d5;
            g_8c4e2ce0 = 0;
            if (o->f230 != 0) {
                v51 = (S_vv51 *)o->f230;
                v51->f04 |= 1;
                o->f230 = (Arg0_230 *)0;
            }
            if (o->f184 != 0) {
                operation_8c0355fc((void *)(o->f184), 1);
                o->f184 = (Arg0_184 *)0;
            }
        }
        t38 = operation_8c19b054();
        t39 = call_8c372d38((int)((char)t38), (void *)((void *)0x8c319870));
        if (t39 == -0xfb) {
            if (o->f184 != 0) {
                operation_8c0355fc((void *)(o->f184), 1);
                o->f184 = (Arg0_184 *)0;
            }
            o->f64 = 0xf3d5;
            g_8c4e2ce0 = 0;
            if (o->f230 != 0) {
                v60 = (S_vv60 *)o->f230;
                v60->f04 |= 1;
                o->f230 = (Arg0_230 *)0;
            }
        }
        return;
    }
}
