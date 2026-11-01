/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c039be4
 * function: operation_8c039be4
 * language: c++
 * reference size: 808 bytes
 * compiled size: 808 bytes (+0.0%)
 * differing lines: 2 of 317 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, instruction or operand
 *   order, constant loading; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c462a0c S_g8c462a0c;
typedef struct S_g8c462a0c_0 S_g8c462a0c_0;
typedef struct S_g8c462a14 S_g8c462a14;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
class Arg0_3b4;
class S_vv14;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    int fec;
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0xc];
    float f108;
    char unknown10c[0x200];
    short f30c;
    char unknown30e[0x4a];
    short f358;
    char unknown35a[0x2a];
    int f384;
    char unknown388[0x4];
    Arg0_38c *f38c;
    char unknown390[0x10];
    int f3a0;
    int f3a4;
    char unknown3a8[0xc];
    Arg0_3b4 *f3b4;
};
struct S_g8c462a0c_0 {
    float f00;
    float f04;
};
class S_vv14 {
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
    virtual void v21();
    virtual int v22(Object *, float);
    virtual void v23();
    virtual float v24(Object *, float);
    virtual void v25();
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct S_vv14Data {
    char unknown0[0x34];
    int f34;
} S_vv14Data;
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
};
class Arg0_3b4 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(Frame *, void *);
};
typedef struct Arg0_3b4Data {

} Arg0_3b4Data;
extern S_g8c462a0c *g_8c462a0c;
extern S_g8c462a14 *g_8c462a14;
extern int g_8c467874;
extern int g_8c467878;
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" float object_random_fraction(void *);
extern "C" int call_8c119190(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be2dc(int, int, Frame *, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c039be4(Object *o)
{
    Frame frame;
    int i;
    S_vv14 *p;
    int mask;
    int off;
    int n;
    float v36;
    int t1;
    int t2;
    int t3;
    int t4;
    float t5;
    float t6;
    int t7;
    int t8;
    int t9;
    switch (o->f30c) {
    case 0:
        o->f108 = (*(S_g8c462a0c_0 **)((char *)((char *)g_8c462a0c + 0x0) + (o->f384 << 2)))->f00;
        o->fe8 |= 0x100;
        o->f30c = 1;
    case 1:
        operation_8c01c5f0(o);
        t1 = check_range_8c01cf68((void *)o, 9.0f);
        if (t1 != 0) {
            t2 = call_8c24e644(0x30004, (void *)(o->f38c));
            play_se_8c05fbf8(t2, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x300);
        }
        t3 = check_range_8c01cf68((void *)o, 12.0f);
        if (t3 != 0) {
            if (((o->f34 & 0x10)) != 0) {
                n = g_8c467874 + g_8c467878;
            } else {
                n = g_8c467874;
            }
            mask = 0x2000800;
            off = 0x3a4;
            for (i = 0; n > i; i++) {
                p = (S_vv14 *)*(S_g8c467240 **)((char *)0x8c467240 + (i << 2));
                if (p == 0) {
                    break;
                }
                if (((((S_vv14Data *)p)->f34 & mask)) == 0) {
                    t4 = p->v22(o, 1.0f);
                    if (t4 != 0) {
                        t5 = p->v24(o, 1.0f);
                        p->v27(o, t5);
                        t6 = object_random_fraction((void *)o);
                        if (t6 > 0.5f) {
                            *(int *)((char *)((char *)o + 0x0) + (off)) = 1;
                        }
                    }
                }
            }
        }
        v36 = (float)o->ff8;
        if (!(9.0f > v36) && !(v36 > 16.0f)) {
            t7 = call_8c119190(g_8c462a14, v36);
            if (t7 != 0) {
                njPushMatrixEx_8c38ae68();
                njUnitMatrix_8c37b5c4(0);
                translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
                njRotateY_8c37df90(0, (void *)(o->f64));
                call_8c3be2dc(0, t7, (Frame *)((&frame)), 2);
                njPopMatrixEx_8c38ad10();
                if (o->f3b4 != 0) {
                    o->f3b4->v5((&frame), &(&frame)->f0c);
                }
            }
        }
        if (o->fec != 4) {
            o->f3a0 += 1;
            o->f30c = 2;
            switch (o->f3a4) {
            case 1:
                o->ff0 = 1;
                o->f358 = 0;
                break;
            default:
                o->ff0 = 0;
                o->f358 = (int)(*(S_g8c462a0c_0 **)((char *)((char *)g_8c462a0c + 0x0) + (o->f384 << 2)))->f04;
                break;
            }
        }
        break;
    case 2:
        operation_8c01c5f0(o);
        t8 = check_range_8c01cf68((void *)o, 0.0f);
        if (t8 != 0 && o->f3a4 == 1) {
            t9 = call_8c24e644(0x3000a, (void *)(o->f38c));
            play_se_8c05fbf8(t9, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x200);
        }
        if (o->fec != 0x20 && 0.0f > (float)(short)--*(short *)((char *)o + 0x358)) {
            o->f358 = 0;
            o->f30c = 1;
            o->f3a4 = 0;
            if (o->f3a0 >= 3) {
                o->f3a0 = -1;
            }
            o->f34 &= -0x200001;
        }
        break;
    }
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    refresh_follow_effect_8c052180((void *)o);
}
