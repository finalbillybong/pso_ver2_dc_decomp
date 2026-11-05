/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1aba3c
 * function: TItemShoot_ctor_8c1aba3c
 * language: c
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 14 of 133 reference instruction lines
 * differing bytes: 28
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
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Vector3 f20;
    char unknown2c[0x4];
    int f30;
    char unknown34[0x4];
    float f38;
    Block_p0_3c f3c;
    Vector3 f48;
    int f54;
    int f58;
};
struct Arg2 {
    Vector3 f00;
};
struct Arg3 {
    Vector3 f00;
};
struct Arg1 {
    char unknown0[0xe8];
    int fe8;
};
extern int g_8c324f88;
extern S_g8c44be9c *g_8c44be9c;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, Arg2 *);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern float errno_wrap_8c130334(float, float);
extern void call_8c0c5094(void *, void *, void *);
Object *TItemShoot_ctor_8c1aba3c(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3, float f0)
{
    Object **home = &o;
    float v1;
    float t1;
    float t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, g_8c44be9c);
    o->dispatch = (void *)0x8c2748d4;
    o->tag = (int)(g_8c324f88);
    o->size = 0x5c;
    *(Vector3 *)&o->f20 = *(Vector3 *)&a2->f00;
    *(Vector3 *)&o->f48 = *(Vector3 *)&a3->f00;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a3->f00;
    o->f38 = f0;
    vector_sub_in_place_8c37f6f0((void *)(&o->f3c), a2);
    t2 = njScalor_8c37e480((void *)(&o->f3c));
    njUnitVector_8c37b630((void *)(&o->f3c));
    v1 = (float)(t2 / f0);
    o->f3c.f00 *= v1;
    o->f3c.f04 *= v1;
    o->f3c.f08 *= v1;
    t1 = errno_wrap_8c130334(o->f3c.f00, o->f3c.f08);
    o->f30 = (int)(t1 * 65536.0f / 6.28318405f);
    call_8c0c5094((void *)(&o->f3c), (void *)(((char *)o + 0x2c)), (void *)(((char *)o + 0x34)));
    o->f54 = 0;
    o->f58 = (int)(a1->fe8);
    o->f04 |= 0x10;
    return o;
}
