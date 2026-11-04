/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c103d6c
 * function: TObjEneDf2Bringer_Eff_Rush_ctor_8c103d6c
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 6 of 97 reference instruction lines
 * differing bytes: 106
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjEneDf2Bringer_Eff_Rush.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg2_64 Arg2_64;
typedef struct Arg3 Arg3;
typedef struct Block_frame_4 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_4;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg3 *f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    int f34;
};
struct Frame {
    Block_frame_4 f04;
};
struct Arg3 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Arg2 {
    char unknown0[0x64];
    Arg2_64 *f64;
};
extern int g_8c30b554;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern int cross_xz_negative(void *, void *);
extern void rotate_scalar_pair(void *, void *, int);
Object *TObjEneDf2Bringer_Eff_Rush_ctor_8c103d6c(Object *o, int a1, Arg2 *a2, Arg3 *a3, float f0)
{
    Frame frame;
    Object **home = &o;
    float t1;
    float t2;
    int t3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26972c;
    o->tag = (int)(g_8c30b554);
    o->size = 0x38;
    o->f20 = a3;
    o->f30 = f0;
    o->f34 = 0;
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&a3->f3c;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f04), (void *)(((char *)a2 + 0x3c)));
    (&frame)->f04.f04 = 0.0f;
    t1 = njSin_8c37eb0c((void *)(a2->f64));
    o->f24 = t1;
    o->f28 = 0.0f;
    t2 = njCos_8c38c154((void *)(a2->f64));
    o->f2c = t2;
    t3 = cross_xz_negative((void *)(&o->f24), (void *)(&(&frame)->f04));
    if (t3 != 0) {
        rotate_scalar_pair((void *)(&o->f24), (void *)(&o->f2c), -0x1800);
    } else {
        rotate_scalar_pair((void *)(&o->f24), (void *)(&o->f2c), 0x1800);
    }
    return o;
}
