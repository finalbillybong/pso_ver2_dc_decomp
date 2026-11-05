/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c6ab4
 * function: operation_8c0c6ab4
 * language: c
 * reference size: 484 bytes
 * compiled size: 484 bytes (+0.0%)
 * differing lines: 58 of 188 reference instruction lines
 * differing bytes: 171
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg4 Arg4;
typedef struct Block_p0_f0 {
    float f00;
    float f04;
    float f08;
} Block_p0_f0;
typedef struct Block_p2_0 {
    float f00;
    float f04;
    float f08;
} Block_p2_0;
typedef struct Block_p1_0 {
    float f00;
    float f04;
    float f08;
} Block_p1_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc8];
    Vector3 fe4;
    Block_p0_f0 ff0;
    char unknownfc[0x18];
    float f114;
    int f118;
    int f11c;
    Vector3 f120;
    int f12c;
    int f130;
    short f134;
};
struct Arg1 {
    Block_p1_0 f00;
};
struct Arg2 {
    Block_p2_0 f00;
};
struct Arg4 {
    char unknown0[0x20];
    short f20;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
};
extern S_g8c44be9c *g_8c44be9c;
extern float g_8c46f3f4;
extern void operation_8c051eb8(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, Arg1 *);
extern float njScalor_8c37e480(void *);
extern float errno_wrap_8c130334(float, float);
extern float distance_xz_root(void *, void *);
extern int create_effect_78d0(void *, void *, int, int);
extern void resolve_vector_reference(void *, void *);
extern int create_effect_7708(void *, int, int);
Object *operation_8c0c6ab4(Object *o, Arg1 *a1, Arg2 *a2, int a3, Arg4 *a4)
{
    Frame frame;
    Object **home = &o;
    float v1;
    float t1;
    float t2;
    float t3;
    int t4;
    int t5;
    float t6;
    (void)home;
    operation_8c051eb8((void *)o, g_8c44be9c);
    o->dispatch = (void *)0x8c266860;
    o->f12c = a3;
    *(Vector3 *)&o->fe4 = *(Vector3 *)&a1->f00;
    o->f114 = 0.0f;
    *(Vector3 *)&o->ff0 = *(Vector3 *)&a2->f00;
    vector_sub_in_place_8c37f6f0((void *)(&o->ff0), a1);
    t6 = njScalor_8c37e480((void *)(&o->ff0));
    v1 = (float)(g_8c46f3f4 / t6);
    o->ff0.f00 *= v1;
    o->ff0.f04 *= v1;
    o->ff0.f08 *= v1;
    o->f134 = a4->f20;
    (&frame)->f04 = 0;
    t1 = errno_wrap_8c130334(a2->f00.f00 - a1->f00.f00, a2->f00.f08 - a1->f00.f08);
    (&frame)->f08 = (int)(t1 * 65536.0f / 6.28318405f) + 0x4000;
    t3 = errno_wrap_8c130334(a2->f00.f04 - a1->f00.f04, distance_xz_root((void *)a2, (void *)a1));
    (&frame)->f0c = 0x4000 - (int)(t3 * 65536.0f / 6.28318405f);
    t4 = create_effect_78d0((void *)a1, (void *)(&(&frame)->f04), 0xf5, 2);
    o->f118 = (int)(t4);
    if (o->f12c != 0) {
        *(Vector3 *)&o->f120 = *(Vector3 *)&o->fe4;
        resolve_vector_reference((void *)o, (void *)(&o->f120));
        t5 = create_effect_7708((void *)(&o->f120), 0xf9, 2);
        o->f11c = (int)(t5);
        o->f130 = 0;
    } else {
        o->f11c = 0;
    }
    return o;
}
