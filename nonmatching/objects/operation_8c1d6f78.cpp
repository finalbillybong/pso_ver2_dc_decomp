/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d6f78
 * function: operation_8c1d6f78
 * language: c++
 * reference size: 524 bytes
 * compiled size: 532 bytes (+1.5%)
 * differing lines: 76 of 222 reference instruction lines
 * differing bytes: 334
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, constant loading; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_10 Arg0_30_10;
typedef struct Arg0_30_14 Arg0_30_14;
typedef struct Arg0_30_18 Arg0_30_18;
typedef struct Arg0_30_1c Arg0_30_1c;
typedef struct Arg0_30_20 Arg0_30_20;
typedef struct Arg0_30_24 Arg0_30_24;
typedef struct Arg0_30_28 Arg0_30_28;
typedef struct Arg0_30_2c Arg0_30_2c;
typedef struct Arg0_30_30 Arg0_30_30;
typedef struct Arg0_30_34 Arg0_30_34;
typedef struct Arg0_30_38 Arg0_30_38;
typedef struct Arg0_30_3c Arg0_30_3c;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg0_30_c Arg0_30_c;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv12 S_vv12;
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv7 S_vv7;
typedef struct S_vv9 S_vv9;
class S_vv10;
class S_vv11;
class S_vv6;
class S_vv8;
struct Frame {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x4];
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x3c];
    Arg0_70 *f70;
    char unknown74[0x38];
    Vector3 fac;
};
struct Arg0_30 {
    int f00;
    Arg0_30_4 *f04;
    int f08;
    Arg0_30_c *f0c;
    Arg0_30_10 *f10;
    Arg0_30_14 *f14;
    Arg0_30_18 *f18;
    Arg0_30_1c *f1c;
    Arg0_30_20 *f20;
    Arg0_30_24 *f24;
    Arg0_30_28 *f28;
    Arg0_30_2c *f2c;
    Arg0_30_30 *f30;
    Arg0_30_34 *f34;
    Arg0_30_38 *f38;
    Arg0_30_3c *f3c;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x3fc];
    int f3fc;
    int f400;
    int f404;
};
struct S_vv4 {
    int f00;
};
struct S_vv2 {
    int f00;
    char unknown4[0x4];
    float f08;
    char unknownc[0x4];
    float f10;
};
struct S_vv5 {
    char unknown0[0x20];
    int f20;
};
class S_vv6 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv6Data {
    char unknown0[0x24];
    float f24;
} S_vv6Data;
struct S_vv7 {
    char unknown0[0x20];
    int f20;
};
class S_vv8 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv8Data {
    char unknown0[0x24];
    float f24;
} S_vv8Data;
struct S_vv9 {
    char unknown0[0x20];
    int f20;
};
class S_vv10 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv10Data {
    char unknown0[0x24];
    float f24;
} S_vv10Data;
struct S_vv12 {
    char unknown0[0x20];
    int f20;
};
class S_vv11 {
public:
    char unknown0[0x4];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct S_vv11Data {
    char unknown0[0x24];
    float f24;
} S_vv11Data;
extern Vector3 g_8c32a1e0;
extern S_g8c467180 *g_8c467180;
extern "C" void initialize_fields_8c207358(void *);
extern "C" void call_8c0e196c(void *, void *);
extern "C" void call_8c1c8ce4(void *, Frame *);
extern "C" void operation_8c1e5ecc(void *, int);
extern "C" int operation_8c207304(void *);
extern "C" void operation_8c1e5f20(void *, int);
extern "C" void operation_8c0e2328(S_vv2 *, float);
extern "C" void initialize_fields_8c0e24e8(void *);
extern "C" int call_8c18e768(int, int);
extern "C" int call_8c18e8a0(int, int);
extern "C" void operation_8c1d6f78(Object *o)
{
    Frame frame;
    char *v1;
    S_vv4 *v4;
    char *v3;
    S_vv2 *v2;
    S_vv5 *v5;
    S_vv6 *v6;
    S_vv7 *v7;
    S_vv8 *v8;
    S_vv9 *v9;
    S_vv10 *v10;
    S_vv12 *v12;
    S_vv11 *v11;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    float h;
    initialize_fields_8c207358((void *)(&frame));
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c329c18));
    *(Vector3 *)&o->fac = *(Vector3 *)&g_8c32a1e0;
    call_8c1c8ce4((void *)(o->f70), (Frame *)((&frame)));
    v1 = (char *)o->f30->f00;
    v4 = (S_vv4 *)o->f30->f04;
    v3 = (char *)o->f30->f08;
    v2 = (S_vv2 *)o->f30->f3c;
    operation_8c1e5ecc((void *)v1, (int)(g_8c467180->f2c->f3fc));
    operation_8c1e5ecc((void *)v4, (int)(g_8c467180->f2c->f400));
    operation_8c1e5ecc((void *)v3, (int)(g_8c467180->f2c->f404));
    v4->f00 |= 0x20;
    t1 = operation_8c207304((void *)(&frame));
    operation_8c1e5f20((void *)v1, (int)((short)t1));
    operation_8c1e5f20((void *)v4, (int)((&frame)->f02));
    operation_8c1e5f20((void *)v3, (int)((&frame)->f00));
    operation_8c0e2328(v2, 1000000.0f);
    h = v2->f10 * 0.5f;
    v2->f08 = 110.0f - h;
    v2->f00 |= 2;
    v5 = (S_vv5 *)o->f30->f10;
    v6 = (S_vv6 *)o->f30->f14;
    initialize_fields_8c0e24e8((void *)(o->f30->f0c));
    t2 = call_8c18e768((int)((&frame)->f04), 0x64);
    v5->f20 = (short)t2;
    t3 = call_8c18e8a0((int)((&frame)->f04), 0x64);
    ((S_vv6Data *)v6)->f24 = (float)(short)t3;
    v6->v3();
    v7 = (S_vv7 *)o->f30->f1c;
    v8 = (S_vv8 *)o->f30->f20;
    initialize_fields_8c0e24e8((void *)(o->f30->f18));
    t4 = call_8c18e768((int)((&frame)->f06), 0x64);
    v7->f20 = (short)t4;
    t5 = call_8c18e8a0((int)((&frame)->f06), 0x64);
    ((S_vv8Data *)v8)->f24 = (float)(short)t5;
    v8->v3();
    v9 = (S_vv9 *)o->f30->f28;
    v10 = (S_vv10 *)o->f30->f2c;
    initialize_fields_8c0e24e8((void *)(o->f30->f24));
    t6 = call_8c18e768((int)((&frame)->f08), 0x64);
    v9->f20 = (short)t6;
    t7 = call_8c18e8a0((int)((&frame)->f08), 0x64);
    ((S_vv10Data *)v10)->f24 = (float)(short)t7;
    v10->v3();
    v12 = (S_vv12 *)o->f30->f34;
    v11 = (S_vv11 *)o->f30->f38;
    initialize_fields_8c0e24e8((void *)(o->f30->f30));
    t8 = call_8c18e768((int)((&frame)->f0a), 0x64);
    v12->f20 = (short)t8;
    t9 = call_8c18e8a0((int)((&frame)->f0a), 0x64);
    ((S_vv11Data *)v11)->f24 = (float)(short)t9;
    v11->v3();
}
