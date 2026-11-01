/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1670d8
 * function: TBoss2PhotonPad_ctor_8c1670d8
 * language: c
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 4 of 66 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
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
typedef struct S_L8c286528 S_L8c286528;
typedef struct S_g8c286530 S_g8c286530;
typedef struct Object Object;
typedef struct Arg3 Arg3;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Vector3 f24;
    int f30;
    int f34;
    int f38;
};
struct Arg3 {
    Vector3 f00;
};
struct S_L8c286528 {
    char unknown0[0x8];
    S_g8c286530 *f08;
};
extern int g_8c317538;
extern S_L8c286528 g_8c286528;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c18e768(void *, int);
extern void rotate_scalar_pair(void *, void *, int);
Object *TBoss2PhotonPad_ctor_8c1670d8(Object *o, int a1, int a2, Arg3 *a3, int a4)
{
    Object **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26ff3c;
    o->tag = (int)(g_8c317538);
    o->size = 0x3c;
    o->f20 = a2;
    o->f30 = a4;
    *(Vector3 *)&o->f24 = *(Vector3 *)&a3->f00;
    {
        Object *base = o;
        t1 = call_8c18e768((void *)(*(S_g8c286530 **)((char *)&g_8c286528.f08 + (base->f30 << 4))), 2);
        rotate_scalar_pair((void *)(&base->f24), (void *)(((char *)base + 0x2c)), (int)(-t1));
    }
    o->f34 = (int)(*(int *)((char *)&g_8c286528 + (o->f30 << 4)));
    o->f38 = 0;
    return o;
}
