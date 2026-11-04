/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14f4c4
 * function: TPhotonLaser_ctor_8c14f4c4
 * language: c
 * reference size: 300 bytes
 * compiled size: 304 bytes (+1.3%)
 * differing lines: 84 of 117 reference instruction lines
 * differing bytes: 204
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TPhotonLaser.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_s350 Arg0_s350;
typedef struct Arg1 Arg1;
typedef struct Block_p1_0 {
    int f00;
    int f04;
    int f08;
} Block_p1_0;
typedef struct Block_p0_368 {
    float f00;
    float f04;
    float f08;
} Block_p0_368;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x330];
    int f350;
    char unknown354[0x8];
    Vector3 f35c;
    Block_p0_368 f368;
    float f374;
    float f378;
    char unknown37c[0x4];
    int f380;
    char unknown384[0x4];
    int f388;
    short f38c;
};
struct Arg1 {
    Block_p1_0 f00;
    char unknownc[0xc];
    Vector3 f18;
    float f24;
    float f28;
    float f2c;
};
struct Arg0_s350 {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern int g_8c315804;
extern void call_8c043418(Object *, int);
extern int create_effect_769c(void *, int);
Object *TPhotonLaser_ctor_8c14f4c4(Object *o, Arg1 *a1, int a2, int a3)
{
    Object **home = &o;
    char *v1;
    int t1;
    (void)home;
    call_8c043418(o, a2);
    o->dispatch = (void *)0x8c26e528;
    o->tag = (int)(g_8c315804);
    o->size = 0x39c;
    *(Vector3 *)&o->f35c = *(Vector3 *)&a1->f00;
    o->f350 = (int)(a1->f00.f00);
    v1 = (char *)a1->f00.f04;
    ((Arg0_s350 *)((char *)o + 0x350))->f04 = (int)(v1);
    ((Arg0_s350 *)((char *)o + 0x350))->f08 = (int)(a1->f00.f08);
    o->f38c = a3;
    *(Vector3 *)&o->f368 = *(Vector3 *)&a1->f18;
    o->f368.f00 *= a1->f28;
    o->f368.f04 *= a1->f28;
    o->f368.f08 *= a1->f28;
    o->f374 = a1->f24;
    o->f378 = a1->f2c;
    t1 = create_effect_769c((void *)(&o->f35c), 0x134);
    o->f380 = (int)(t1);
    o->f388 = 0;
    return o;
}
