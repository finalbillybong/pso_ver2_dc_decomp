/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cb6a0
 * function: TObjEneMe1Canadin_EffDischarge_ctor_8c0cb6a0
 * language: c
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 2 of 148 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneMe1Canadin.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Block_p0_60 {
    float f00;
    float f04;
    float f08;
} Block_p0_60;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_p0_48 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_48;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    Block_p0_3c f3c;
    Block_p0_48 f48;
    Vector3 f54;
    Block_p0_60 f60;
};
struct Arg2 {
    Vector3 f00;
};
struct Arg3 {
    Vector3 f00;
};
extern int g_8c3068ec;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float normalize_xz_checked(void *);
Object *TObjEneMe1Canadin_EffDischarge_ctor_8c0cb6a0(Object *o, int a1, Arg2 *a2, Arg3 *a3)
{
    Object **home = &o;
    float v5;
    float t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c266c94;
    o->tag = (int)(g_8c3068ec);
    o->size = 0x6c;
    o->f20 = a1;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f00;
    *(Vector3 *)&o->f48 = *(Vector3 *)&a3->f00;
    *(Vector3 *)&o->f60 = *(Vector3 *)&o->f48;
    vector_sub_in_place_8c37f6f0((void *)(&o->f60), (void *)(&o->f3c));
    o->f60.f04 = 0.0f;
    t1 = normalize_xz_checked((void *)(&o->f60));
    o->f38 = t1;
    if (20.0f < o->f38) {
        o->f30 = 20.0f;
        o->f34 = o->f38 - o->f30;
    } else {
        o->f30 = o->f38;
        o->f34 = 0.0f;
    }
    o->f28 = o->f3c.f04;
    v5 = (float)o->f30;
    o->f24 = (o->f48.f04 - o->f3c.f04) / (v5 * v5);
    o->f2c = 0.0f;
    o->f60.f00 *= 20.0f;
    o->f60.f08 *= 20.0f;
    *(Vector3 *)&o->f54 = *(Vector3 *)&o->f3c;
    return o;
}
