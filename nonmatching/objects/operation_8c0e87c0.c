/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e87c0
 * function: operation_8c0e87c0
 * language: c
 * reference size: 616 bytes
 * compiled size: 620 bytes (+0.6%)
 * differing lines: 126 of 230 reference instruction lines
 * differing bytes: 549
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0113bc S_c8c0113bc;
typedef struct S_c8c0113bc_4 S_c8c0113bc_4;
typedef struct Frame Frame;
typedef struct S_g8c285938 S_g8c285938;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c46fac0 S_g8c46fac0;
typedef struct S_g8c46fac0_42c S_g8c46fac0_42c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_108 Arg0_108;
typedef struct Arg2 Arg2;
typedef struct Arg2_64 Arg2_64;
typedef struct Arg4 Arg4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc8];
    short fe4;
    short fe6;
    char unknowne8[0x4];
    float fec;
    char unknownf0[0x10];
    int f100;
    int f104;
    Arg0_108 *f108;
    short f10c;
    char unknown10e[0x2];
    int f110;
    Vector3 f114;
    float f120;
    float f124;
    Vector3 f128;
};
struct Arg2 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1e];
    float f40;
    char unknown44[0x20];
    Arg2_64 *f64;
};
struct S_g8c46fac0 {
    char unknown0[0x42c];
    S_g8c46fac0_42c *f42c;
};
struct S_g8c46fac0_42c {
    char unknown0[0x18];
    int f18;
};
struct Arg4 {
    Vector3 f00;
};
struct Frame {
    int f04;
    char unknown8[0x8];
    float f10;
    float f14;
    float f18;
};
struct S_c8c0113bc {
    char unknown0[0x4];
    S_c8c0113bc_4 *f04;
};
struct Arg0_108 {
    char unknown0[0x344];
    int f344;
};
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c46fac0 *g_8c46fac0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c051eb8(void *, void *);
extern int call_8c03ef88(int, void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void call_8c3bdf60(void *, void *);
extern S_c8c0113bc *operation_8c0113bc(int, int);
extern float distance_xz_root(void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TeneFakeTecThunderEff_ctor_8c08a590(void *, int, int, int, int);
Object *operation_8c0e87c0(Object *o, int a1, Arg2 *a2, int a3, Arg4 *a4)
{
    Frame frame;
    Object **home = &o;
    float v4;
    int t1;
    S_c8c0113bc *t2;
    float t3;
    int t4;
    float t5;
    (void)home;
    operation_8c051eb8((void *)o, g_8c44be9c);
    o->dispatch = (void *)0x8c267efc;
    o->fe4 = a1;
    o->f10c = a2->f20;
    o->fe6 = 0;
    o->f110 = a3;
    t1 = call_8c03ef88((int)(g_8c46fac0->f42c->f18), (void *)(*(S_g8c285938 **)((char *)0x8c285938 + (a1 << 2))));
    o->f100 = (int)(t1);
    o->f104 = (int)a2 + a1 * 0xc + 0x3f0;
    *(Vector3 *)&o->f114 = *(Vector3 *)&a4->f00;
    *(Vector3 *)&o->f128 = *(Vector3 *)&a4->f00;
    o->f120 = a2->f40 + 3.0f;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    (&frame)->f14 = 0.0f;
    (&frame)->f10 = 0.0f;
    (&frame)->f18 = -2.0f;
    njRotateY_8c37df90(0, (void *)(&*(int *)((char *)((char *)a2->f64 + 0x0) + (a1 + -1 << 13))));
    call_8c3be38c(0, (void *)(&(&frame)->f10), (void *)(((char *)o + 0xe8)));
    o->f124 = 30.0f;
    (&frame)->f18 = 30.0f;
    call_8c3be38c(0, (void *)(&(&frame)->f10), (void *)(&(&frame)->f04));
    call_8c3bdf60((void *)(&(&frame)->f04), (void *)(&o->f128));
    t2 = operation_8c0113bc((int)(&o->f128), (int)(&(&frame)->f04));
    if (t2 != 0) {
        t3 = distance_xz_root((void *)(&o->f128), (void *)(t2->f04));
        if (10.0f > (t3 - 5.0f)) {
            v4 = (float)10.0f;
        } else {
            t5 = distance_xz_root((void *)(&o->f128), (void *)(t2->f04));
            v4 = (float)(t5 - 5.0f);
        }
        o->f124 = v4;
    }
    njPopMatrixEx_8c38ad10();
    o->fec = 0.0f;
    t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x34c);
    if (t4 != 0) {
        TeneFakeTecThunderEff_ctor_8c08a590((void *)t4, (int)o, (int)(o->f104), (int)(&o->f128), 0x10);
    }
    o->f108 = (Arg0_108 *)t4;
    if (o->f108 != 0) {
        o->f108->f344 = 0;
    }
    return o;
}
