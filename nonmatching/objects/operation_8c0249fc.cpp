/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0249fc
 * function: operation_8c0249fc
 * language: c++
 * reference size: 644 bytes
 * compiled size: 644 bytes (+0.0%)
 * differing lines: 148 of 287 reference instruction lines
 * differing bytes: 223
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_33c Arg0_33c;
typedef struct Arg0_340 Arg0_340;
class S_c8c03b55c;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x162];
    Arg0_184 *f184;
    char unknown188[0x1b4];
    Arg0_33c *f33c;
    Arg0_340 *f340;
};
struct Arg0_184 {
    char unknown0[0x18];
    int f18;
    int f1c;
};
struct Frame {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    short f10;
    short f12;
    short f14;
    short f16;
    short f18;
    short f1a;
    short f1c;
    short f1e;
    short f20;
    short f22;
    short f24;
    short f26;
    short f28;
    short f2a;
    short f2c;
    short f2e;
    short f30;
    short f32;
    short f34;
    short f36;
    short f38;
    short f3a;
    short f3c;
    short f3e;
    short f40;
    short f42;
    short f44;
    short f46;
    short f48;
    short f4a;
    short f4c;
    char unknown4e[0x2];
};
class S_c8c03b55c {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21(int);
    virtual void v22(int);
};
typedef struct S_c8c03b55cData {
    char unknown0[0xec];
    int fec;
} S_c8c03b55cData;
extern int g_8c418248;
extern "C" int current_mode_active(void);
extern "C" int operation_8c02c320(void *);
extern "C" int operation_8c1a7260(int, int);
extern "C" S_c8c03b55c *operation_8c03b55c(int, int);
extern "C" int hierarchy_is_active(void *);
extern "C" void call_8c03bbd8(void *, Object *, Arg0_184 *, void *, void *);
extern "C" void call_8c024c88(Object *);
extern "C" void subtract_actor_stats(void *, void *, void *);
extern "C" void TWindowSetLevelUp_create_8c0ddb98(int);
extern "C" void operation_8c024d9c(void *);
extern "C" void operation_8c0249fc(Object *o)
{
    Frame frame;
    int v1;
    int v6;
    int v18;
    int v5;
    int v17;
    int v9;
    int v13;
    int v2;
    int v3;
    int v21;
    int v25;
    int t2;
    int t3;
    S_c8c03b55c *t4;
    int t5;
    S_c8c03b55c *t6;
    int t7;
    v1 = (int)(o->f20 == g_8c418248);
    if (v1 == 0 || current_mode_active() == 0) {
        return;
    }
    v3 = (int)o->f184->f18;
    if (!(v3 >= 0)) {
        v3 = 0;
    } else if (v3 > 0xc7) {
        v3 = 0xc7;
    }
    v3 = v3 + 1;
    if (v3 > 0xc7) {
        return;
    }
    t2 = operation_8c02c320((void *)o);
    t3 = operation_8c1a7260(t2, v3);
    if (t3 > o->f184->f1c) {
        return;
    }
    (&frame)->f3e = 0;
    (&frame)->f24 = 0;
    (&frame)->f0a = 0;
    (&frame)->f3c = 0;
    (&frame)->f22 = 0;
    (&frame)->f08 = 0;
    (&frame)->f3a = 0;
    (&frame)->f20 = 0;
    (&frame)->f06 = 0;
    (&frame)->f38 = 0;
    (&frame)->f1e = 0;
    (&frame)->f04 = 0;
    (&frame)->f36 = 0;
    (&frame)->f1c = 0;
    (&frame)->f02 = 0;
    (&frame)->f34 = 0;
    (&frame)->f1a = 0;
    (&frame)->f00 = 0;
    (&frame)->f48 = 0;
    (&frame)->f2e = 0;
    (&frame)->f14 = 0;
    (&frame)->f46 = 0;
    (&frame)->f2c = 0;
    (&frame)->f12 = 0;
    (&frame)->f44 = 0;
    (&frame)->f2a = 0;
    (&frame)->f10 = 0;
    (&frame)->f42 = 0;
    (&frame)->f28 = 0;
    (&frame)->f0e = 0;
    (&frame)->f40 = 0;
    (&frame)->f26 = 0;
    (&frame)->f0c = 0;
    (&frame)->f4c = 0;
    (&frame)->f32 = 0;
    (&frame)->f18 = 0;
    (&frame)->f4a = 0;
    (&frame)->f30 = 0;
    (&frame)->f16 = 0;
    v6 = (int)0;
    v5 = (int)0xbcc;
    while (0xd > v6) {
        t4 = operation_8c03b55c((int)((int)o + v5), v6);
        if (t4 != 0) {
            t5 = hierarchy_is_active((void *)t4);
            if (t5 != 0) {
                v9 = (int)1;
                goto L_8c024b44;
            }
        }
        v9 = (int)0;
L_8c024b44:;
        if (v9 != 0) {
            v13 = (int)0;
            if (((((S_c8c03b55cData *)t4)->fec & 4)) != 0 && ((((S_c8c03b55cData *)t4)->fec & 8)) != 0) {
                v13 = (int)1;
            }
            if (v13 != 0) {
                t4->v22(1);
            }
        }
        v6 = (int)(v6 + 1);
    }
    call_8c03bbd8((void *)(&(&frame)->f34), o, (Arg0_184 *)(o->f184), (void *)(o->f33c), (void *)(o->f340));
    call_8c024c88(o);
    call_8c03bbd8((void *)(&(&frame)->f1a), o, (Arg0_184 *)(o->f184), (void *)(o->f33c), (void *)(o->f340));
    v18 = (int)0;
    v17 = (int)0xbcc;
    while (0xd > v18) {
        t6 = operation_8c03b55c((int)((int)o + v17), v18);
        if (t6 != 0) {
            t7 = hierarchy_is_active((void *)t6);
            if (t7 != 0) {
                v21 = (int)1;
                goto L_8c024bdc;
            }
        }
        v21 = (int)0;
L_8c024bdc:;
        if (v21 != 0) {
            v25 = (int)0;
            if (((((S_c8c03b55cData *)t6)->fec & 4)) != 0 && ((((S_c8c03b55cData *)t6)->fec & 8)) != 0) {
                v25 = (int)1;
            }
            if (v25 != 0) {
                t6->v21(1);
            }
        }
        v18 = (int)(v18 + 1);
    }
    subtract_actor_stats((void *)(&(&frame)->f34), (void *)(&(&frame)->f1a), (void *)(&frame));
    TWindowSetLevelUp_create_8c0ddb98((int)(&frame));
    operation_8c024d9c((void *)o);
}
