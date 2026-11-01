/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17606c
 * function: operation_8c17606c
 * language: c
 * reference size: 352 bytes
 * compiled size: 356 bytes (+1.1%)
 * differing lines: 92 of 151 reference instruction lines
 * differing bytes: 148
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
typedef struct S_g8c4db680 S_g8c4db680;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv5 S_vv5;
typedef struct S_x77424 S_x77424;
typedef struct Block_vv5_0 {
    char unknown0[0x4];
    float f04;
    float f08;
} Block_vv5_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
};
struct S_vv3 {
    Vector3 f00;
    char unknownc[0xc];
    int f18;
    int f1c;
    int f20;
    float f24;
    int f28;
};
struct Arg2 {
    Vector3 f00;
};
struct S_g8c4db680 {
    char unknown0[0x4];
    int f04;
};
struct S_vv5 {
    Block_vv5_0 f00;
};
struct S_x77424 {
    Vector3 f00;
};
extern S_g8c4db680 *g_8c4db680;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c3bdf60(S_vv3 *, int);
extern int rand(void);
Object *operation_8c17606c(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    S_vv5 *v5;
    int v4;
    int v1;
    S_vv3 *v3;
    int v9;
    int v2;
    int v8;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home;
    {
        Object *base = o;
        TObject_ctor_8c0330e4((void *)base, (void *)a1);
        base->dispatch = (void *)0x8c2708e0;
        base->f20 = 0;
        o->dispatch = (void *)0x8c2708c4;
        v1 = (int)((char *)o + 0x24);
        v8 = (int)0;
        v9 = (int)v1;
    }
    goto L_8c176182;
    v2 = (int)0;
    v3 = (S_vv3 *)v1;
L_8c17609a:;
    v4 = (int)(v2 * 0x1c);
    *(Vector3 *)&v3->f00 = *(Vector3 *)&a2->f00;
    call_8c3bdf60(v3, (int)(g_8c4db680->f04 + v4 + 4));
    v5 = (S_vv5 *)((int)v3 + 0xc);
    *(Vector3 *)&v5->f00 = *(Vector3 *)&((S_x77424 *)(g_8c4db680->f04 + 0x10 + v4))->f00;
    t1 = rand();
    v5->f00.f04 = (float)t1 / 32768.0f * 4.0f + 2.0f;
    t2 = rand();
    v5->f00.f08 -= (float)t2 / 32768.0f * 4.0f + 1.0f;
    t3 = rand();
    v3->f18 = (int)((float)t3 / 32768.0f * 65536.0f);
    t4 = rand();
    v3->f1c = (int)(((float)t4 / 32768.0f - 0.5f) * 2.0f * 3400.0f);
    t5 = rand();
    v3->f20 = (int)((float)t5 / 32768.0f * 65536.0f);
    v3->f28 = 0;
    v3->f24 = 1.0f;
    v8 = (int)(v2 + 1);
    v9 = (int)((int)v3 + 0x2c);
L_8c176182:;
    if (0x13 > v8) {
        v2 = (int)v8;
        v3 = (S_vv3 *)v9;
        goto L_8c17609a;
    }
    return o;
}
