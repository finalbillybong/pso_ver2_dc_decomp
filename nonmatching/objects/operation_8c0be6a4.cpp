/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0be6a4
 * function: operation_8c0be6a4
 * language: c++
 * reference size: 792 bytes
 * compiled size: 792 bytes (+0.0%)
 * differing lines: 4 of 298 reference instruction lines
 * differing bytes: 8
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c46f3d8 S_g8c46f3d8;
typedef struct Object Object;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
class Arg0_334;
class Arg0_3e4;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0xc];
    int fec;
    char unknownf0[0x8];
    float ff8;
    char unknownfc[0x210];
    short f30c;
    char unknown30e[0x26];
    Arg0_334 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x36];
    Arg0_38c *f38c;
    int f390;
    char unknown394[0x6];
    short f39a;
    int f39c;
    char unknown3a0[0x4];
    short f3a4;
    short f3a6;
    char unknown3a8[0x10];
    int f3b8;
    char unknown3bc[0x28];
    Arg0_3e4 *f3e4;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
};
class Arg0_334 {
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
typedef struct Arg0_334Data {

} Arg0_334Data;
class Arg0_3e4 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(Frame *, void *);
};
typedef struct Arg0_3e4Data {

} Arg0_3e4Data;
extern int g_8c44be04;
extern S_g8c46f3d8 *g_8c46f3d8;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c012a14(unsigned short);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int angle_halfway(int, int);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int call_8c119190(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be2dc(int, int, Frame *, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void classify_ratio_8c0bf654(void *);
extern "C" void operation_8c0521a0(Object *);
extern "C" void operation_8c05228c(Object *);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c027090(int);
extern "C" void operation_8c0be6a4(Object *o)
{
    Frame frame;
    short v26;
    short v23;
    unsigned short v1;
    float v34;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float t7;
    int t8;
    int t9;
    v1 = *(volatile unsigned short *)((char *)o + 0x354) & 0xffff;
    if ((unsigned int)0x1000 > (unsigned int)v1) {
        t1 = lookup_low_id((int)v1);
        if (t1 != 0 && t1->f37c == g_8c44be04) {
            o->f334 = (Arg0_334 *)t1;
            goto L_8c0be702;
        }
        o->f334 = (Arg0_334 *)0;
    } else {
        if ((unsigned int)0x4000 > (unsigned int)v1) {
            t2 = operation_8c012a14(v1);
            o->f334 = (Arg0_334 *)(int)t2;
        } else {
            o->f354 = 0xffff;
            o->f334 = (Arg0_334 *)0;
        }
    }
L_8c0be702:;
    o->fdc->f18 |= 1;
    o->f34 &= -0x6040001;
    operation_8c01c5f0(o);
    {
        int off;
        off = 0x3b8;
        t3 = angle_halfway(*(int *)((char *)o + off), 0);
        *(int *)((char *)o + off) = t3;
    }
    v23 = (short)o->f30c;
    switch (v23) {
    case 0:
        o->f30c = 1;
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        t4 = call_8c24e644(0x30002, (void *)(o->f38c));
        play_se_8c05fbf8(t4, (void *)(((char *)o + 0x3c)), 0, 0);
        break;
    case 1:
        if (((o->f34 & 0x800000)) == 0) {
            operation_8c04a43c((void *)o, 0.0f, (void *)0);
        }
        t5 = check_range_8c01cf68((void *)o, 7.0f);
        if (t5 != 0) {
            if (o->f334 != 0) {
                t6 = o->f334->v22(o, 1.0f);
                if (t6 != 0) {
                    t7 = o->f334->v24(o, 1.0f);
                    o->f334->v27(o, t7);
                    {
                        short *pf1 = (short *)((char *)o + 0x3a4);
                        *pf1 = (int)((float)*pf1 + t7);
                    }
                    o->f39c = 0x10e;
                    v26 = (short)o->f3a6;
                    if ((short)v26 < o->f3a4) {
                        o->f3a4 = v26;
                    }
                    t8 = call_8c24e644(0x30041, (void *)(o->f38c));
                    play_se_8c05fbf8(t8, (void *)(((char *)o + 0x324)), 0, 0);
                }
            }
        }
        v34 = (float)o->ff8;
        if (!(0.0f > v34)) {
            if (!(v34 > 7.0f)) {
                t9 = call_8c119190(g_8c46f3d8, v34);
                if (t9 != 0) {
                    njPushMatrixEx_8c38ae68();
                    njUnitMatrix_8c37b5c4(0);
                    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
                    njRotateY_8c37df90(0, (void *)(o->f64));
                    call_8c3be2dc(0, t9, (Frame *)((&frame)), 2);
                    njPopMatrixEx_8c38ad10();
                    if (o->f3e4 != 0) {
                        o->f3e4->v5((&frame), &(&frame)->f0c);
                    }
                }
            }
        }
        if (o->fec == 4) {
            goto L_8c0be8cc;
        }
        o->f30c = 2;
        o->f39a += 1;
        break;
    case 2:
        classify_ratio_8c0bf654((void *)o);
        if (o->f39a >= 2) {
            o->f39a = 0;
            o->f390 &= -9;
        }
        o->f34 &= -0x200001;
    }
L_8c0be8cc:;
    operation_8c0521a0(o);
    operation_8c05228c(o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    operation_8c027090((int)o);
}
