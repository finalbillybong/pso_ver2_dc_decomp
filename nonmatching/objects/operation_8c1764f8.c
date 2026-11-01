/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1764f8
 * function: operation_8c1764f8
 * language: c
 * reference size: 392 bytes
 * compiled size: 392 bytes (+0.0%)
 * differing lines: 78 of 156 reference instruction lines
 * differing bytes: 143
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db684 S_g8c4db684;
typedef struct Object Object;
typedef struct Arg0_4f4 Arg0_4f4;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    char unknown24[0x4d0];
    Arg0_4f4 *f4f4;
    float f4f8;
    float f4fc;
    float f500;
};
struct S_g8c4db684 {
    char unknown0[0x4];
    int f04;
};
struct S_vv1 {
    char unknown0[0x10];
    float f10;
    float f14;
    int f18;
    int f1c;
    int f20;
    float f24;
    int f28;
};
extern S_g8c4db684 *g_8c4db684;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void njUnitMatrix_8c37b5c4(int);
extern void call_8c38a714(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void call_8c3be38c(int, int, void *);
extern int rand(void);
extern void njPopMatrixEx_8c38ad10(void);
Object *operation_8c1764f8(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v3;
    S_vv1 *v1;
    int v2;
    int t1;
    int t2;
    int t3;
    (void)home;
    {
        Object *base = o;
        TObject_ctor_8c0330e4((void *)base, (void *)a1);
        base->dispatch = (void *)0x8c2708e0;
        base->f20 = 0;
    }
    o->dispatch = (void *)0x8c2708a8;
    o->f4f4 = (Arg0_4f4 *)a2;
    v1 = (S_vv1 *)((char *)o + 0x24);
    njPushMatrixEx_8c38ae68();
    njUnitMatrix_8c37b5c4(0);
    call_8c38a714(0, (void *)(o->f4f4));
    o->f4f8 = 0.0f;
    o->f4fc = 0.0f;
    o->f500 = 0.0f;
    call_8c3be280(0, (void *)(&o->f4f8), (void *)(&o->f4f8));
    v2 = (int)0;
    while (0x1c > v2) {
        v3 = (int)(v2 * 0x1c);
        call_8c3be280(0, (void *)(g_8c4db684->f04 + v3 + 4), (void *)v1);
        call_8c3be38c(0, (int)(g_8c4db684->f04 + v3 + 0x10), (void *)((int)v1 + 0xc));
        t1 = rand();
        v1->f10 = (float)t1 / 32768.0f * 4.0f + 2.0f;
        t2 = rand();
        v1->f14 -= (float)t2 / 32768.0f * 4.0f + 1.0f;
        v1->f18 = 0;
        t3 = rand();
        v1->f1c = (int)(((float)t3 / 32768.0f - 0.5f) * 2.0f * 3400.0f);
        v1->f20 = 0;
        v1->f28 = 0;
        v1->f24 = 1.0f;
        v2 = (int)(v2 + 1);
        v1 = (S_vv1 *)((char *)v1 + 44);
    }
    njPopMatrixEx_8c38ad10();
    return o;
}
