/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c137460
 * function: TTecSlicer_ctor_8c137460
 * language: c
 * reference size: 704 bytes
 * compiled size: 700 bytes (-0.6%)
 * differing lines: 146 of 272 reference instruction lines
 * differing bytes: 617
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_c8c1581d8 S_c8c1581d8;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct Arg0_108 Arg0_108;
typedef struct Arg0_10c Arg0_10c;
typedef struct Arg1 Arg1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_s4 S_vv10_s4;
typedef struct S_vv4 S_vv4;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0x6];
    int f28;
    char unknown2c[0xc];
    int f38;
    Vector3 f3c;
    char unknown48[0x4c];
    float f94;
    float f98;
    float f9c;
    Vector3 fa0;
    Vector3 fac;
    float fb8;
    float fbc;
    int fc0;
    unsigned short fc4;
    char fc6;
    char unknownc7[0x41];
    Arg0_108 *f108;
    Arg0_10c *f10c;
    short f110;
    char unknown112[0x2];
    int f114;
    short f118;
    short f11a;
    float f11c;
    int f120;
    Block16 f124;
};
struct Arg1 {
    short f00;
    char unknown2[0x2];
    int f04;
    int f08;
    int f0c;
    short f10;
    short f12;
    float f14;
    Block16 f18;
};
struct Arg0_10c {
    char unknown0[0x64];
    int f64;
};
struct S_c8c1581d8 {
    float f00;
};
struct S_vv4 {
    int f00;
};
struct S_vv10 {
    char unknown0[0x4];
    short f04;
};
struct S_vv10_s4 {
    char unknown0[0x2];
    short f02;
};
extern int g_8c312f50;
extern S_g8c44be9c *g_8c44be9c;
extern void TObjectShared_ctor_8c01d1ec(Object *, void *);
extern void call_8c137d08(void *);
extern int operation_8c192738(void);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern int find_record_8c0744dc(int);
extern void operation_8c137ae8(void *, int, int);
extern void call_8c137b4c(Object *, Arg0_10c *, void *);
extern S_c8c1581d8 *operation_8c1581d8(void *, int);
extern void operation_8c137d18(void *, short, short);
Object *TTecSlicer_ctor_8c137460(Object *o, Arg1 *a1, int a2, int a3, int a4)
{
    Object **home = &o;
    float v38;
    int v9;
    int v5;
    int v8;
    S_vv10 *v10;
    int v17;
    int v19;
    S_vv4 *v4;
    int v22;
    int t1;
    float t2;
    float t3;
    float t4;
    int t5;
    S_c8c1581d8 *t6;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o, g_8c44be9c);
    o->dispatch = (void *)0x8c26d0a0;
    o->fc0 = 0;
    call_8c137d08((void *)(((char *)o + 0xc8)));
    call_8c137d08((void *)(((char *)o + 0xe8)));
    o->tag = (int)(g_8c312f50);
    o->size = 0x134;
    o->f04 |= 0x10;
    t1 = operation_8c192738();
    o->f20 = t1;
    o->f38 = (int)(a1->f08);
    o->f28 = (int)(a1->f04);
    o->f110 = a1->f00;
    o->f114 = (int)(a1->f0c);
    o->f118 = a1->f10;
    o->f11a = a1->f12;
    o->f11c = a1->f14;
    *(Block16 *)&o->f124 = *(Block16 *)&a1->f18;
    t2 = njSin_8c37eb0c(a4);
    o->f94 = t2;
    o->f98 = 0.0f;
    t3 = njCos_8c38c154(a4);
    o->f9c = t3;
    t4 = njScalor_8c37e480((void *)(&o->f94));
    if (t4 != 0.0f) {
        njUnitVector_8c37b630((void *)(&o->f94));
    }
    o->f10c = (Arg0_10c *)a2;
    t5 = find_record_8c0744dc((int)(o->f114));
    o->f108 = (Arg0_108 *)t5;
    operation_8c137ae8((void *)o, (int)(o->f10c), (int)(o->f10c->f64));
    call_8c137b4c(o, (Arg0_10c *)(o->f10c), (void *)(o->f108));
    t6 = operation_8c1581d8((void *)(o->f108), 0);
    v38 = (float)t6->f00;
    o->fbc = v38 * v38;
    o->fb8 = 6.0f;
    *(Vector3 *)&o->fa0 = *(Vector3 *)&o->f3c;
    *(Vector3 *)&o->fac = *(Vector3 *)&o->f3c;
    {
        Object *base = o;
        v4 = (S_vv4 *)((int)((char *)base->f10c + 0x754) + 0x30);
        v17 = (int)a2;
        if (v4 != 0) {
            v5 = (int)v4->f00;
            if (v5 < 0 || v5 > 0xa) {
                v8 = (int)0;
            } else {
                v8 = (int)v5;
            }
            if (v8 == 0) {
                base->fc0 |= 1;
                v17 = (int)a2;
            } else {
                v17 = (int)0;
                goto L_8c137638;
                v9 = (int)0;
L_8c13761c:;
                v10 = (S_vv10 *)v4;
                v10 = (S_vv10 *)((int)v10 + (v9 << 2));
                operation_8c137d18((void *)(((char *)o + 0xc8)), v10->f04, ((S_vv10_s4 *)((char *)v10 + 0x4))->f02);
                v8 = (int)/* ? clobbered */ 0;
                v17 = (int)(v9 + 1);
L_8c137638:;
                v19 = (int)v4->f00;
                if (v19 < 0 || v19 > 0xa) {
                    v22 = (int)0;
                } else {
                    v22 = (int)v19;
                }
                v9 = (int)v17;
                if (v17 != v22) {
                    goto L_8c13761c;
                }
            }
        }
    }
    o->f120 = 0;
    o->f10c = (Arg0_10c *)0;
    o->f108 = (Arg0_108 *)0;
    o->fc4 = 0xffff;
    o->fc6 = 0;
    return o;
}
