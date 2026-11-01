/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c63d0
 * function: operation_8c1c63d0
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 38 of 117 reference instruction lines
 * differing bytes: 35
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
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv2 S_vv2;
typedef struct Block_p0_5c {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
} Block_p0_5c;
typedef struct Block_p0_34 {
    int f00;
    int f04;
    int f08;
} Block_p0_34;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    float f20;
    float f24;
    float f28;
    float f2c;
    Arg0_30 *f30;
    Block_p0_34 f34;
    Vector3 f40;
    int f4c;
    int f50;
    short f54;
    char unknown56[0x2];
    int f58;
    Block_p0_5c f5c;
};
struct Arg0_30 {
    char unknown0[0x64];
    int f64;
};
struct S_c8c053d84 {
    char unknown0[0x64];
    int f64;
    char unknown68[0x74];
    int fdc;
};
struct S_vv2 {
    Vector3 f00;
};
extern int g_8c328ce0;
extern int g_8c328ce4;
extern void TObject_ctor_8c0330e4(void *, void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
Object *operation_8c1c63d0(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
    char *v1;
    S_vv2 *v2;
    S_c8c053d84 *t1;
    (void)home;
    {
        Object *base = o;
        TObject_ctor_8c0330e4((void *)base, (void *)a1);
        base->dispatch = (void *)0x8c27671c;
        base->tag = (int)(g_8c328ce0);
        base->size = 0x54;
        base->f30 = (Arg0_30 *)a2;
        v1 = (char *)base->f30->f64;
        base->f34.f04 = (int)(v1);
        base->f34.f08 = 0;
        base->f34.f00 = 0;
        base->f4c = 0;
        base->f50 = 0;
        base->f2c = 0.0f;
        base->f28 = 0.0f;
        base->f24 = 0.0f;
        base->f20 = 0.0f;
        base->f04 |= 0x10;
    }
    o->dispatch = (void *)0x8c2766fc;
    o->tag = (int)(g_8c328ce4);
    o->size = 0x68;
    o->f54 = a3;
    o->f58 = a4;
    t1 = lookup_object_by_id((unsigned short)(o->f54));
    if (t1 != 0) {
        v2 = (S_vv2 *)((char *)(t1->fdc + o->f58 * 0x2c) + 0x1c);
        *(Vector3 *)&o->f40 = *(Vector3 *)&v2->f00;
        *(Vector3 *)&o->f5c = *(Vector3 *)&o->f34;
        o->f5c.f04 -= t1->f64;
    }
    return o;
}
