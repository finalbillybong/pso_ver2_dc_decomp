/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c057674
 * function: TObjEneBm3FlyNest_CarryFly_ctor_8c057674
 * language: c
 * reference size: 320 bytes
 * compiled size: 316 bytes (-1.2%)
 * differing lines: 34 of 137 reference instruction lines
 * differing bytes: 198
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TObjEneBm3FlyNest.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467910 S_g8c467910;
typedef struct S_g8c467910_430 S_g8c467910_430;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Block_frame_4 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_4;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    float f20;
    float f24;
    float f28;
    int f2c;
    int f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
    int f3c;
    float f40;
    int f44;
    int f48;
    int f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    float f60;
    float f64;
    float f68;
};
struct Frame {
    Block_frame_4 f04;
};
struct Arg0_34 {
    Vector3 f00;
};
struct S_g8c467910 {
    char unknown0[0x430];
    S_g8c467910_430 *f430;
};
struct S_g8c467910_430 {
    char unknown0[0x54];
    int f54;
};
extern int g_8c2f33a8;
extern S_g8c467910 *g_8c467910;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern void normalize_vector_checked(void *);
extern float call_8c130334(float, float);
Object *TObjEneBm3FlyNest_CarryFly_ctor_8c057674(Object *o, int a1, int a2, int a3, int a4, int a5, int a6)
{
    Frame frame;
    Object **home = &o;
    float t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2625dc;
    o->tag = (int)(g_8c2f33a8);
    o->size = 0x6c;
    o->f34 = (Arg0_34 *)a2;
    o->f38 = (Arg0_38 *)a3;
    o->f3c = a5;
    o->f2c = a6;
    {
        Object *self = o;
        *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&self->f34->f00;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f04), (void *)(self->f38));
    }
    normalize_vector_checked((void *)(&(&frame)->f04));
    t1 = call_8c130334((&frame)->f04.f00, (&frame)->f04.f08);
    o->f44 = (int)(t1 * 65536.0f / 6.28318405f);
    o->f20 = (&frame)->f04.f00 * 6.0f;
    o->f24 = 6.0f;
    o->f28 = (&frame)->f04.f08 * 6.0f;
    o->f4c = (int)(g_8c467910->f430->f54);
    o->f50 = (float)(o->f2c << 1);
    o->f40 = 1.0f;
    o->f48 = 0;
    o->f54 = 0.0f;
    o->f58 = 0.0f;
    o->f5c = 0.0f;
    o->f60 = 0.0f;
    o->f68 = 0.0f;
    o->f64 = 0.0f;
    o->f30 = 0;
    return o;
}
