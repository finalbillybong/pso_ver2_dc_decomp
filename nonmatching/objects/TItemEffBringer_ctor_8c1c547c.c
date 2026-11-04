/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c547c
 * function: TItemEffBringer_ctor_8c1c547c
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 4 of 140 reference instruction lines
 * differing bytes: 7
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemEffBringer.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct Block_frame_1c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_1c;
typedef struct Block_p0_88 {
    float f00;
    float f04;
    float f08;
} Block_p0_88;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    int f30;
    char unknown34[0x8];
    Vector3 f3c;
    char unknown48[0x3c];
    int f84;
    Block_p0_88 f88;
};
struct Frame {
    float f04;
    float f08;
    float f0c;
    int f10;
    char unknown14[0x8];
    Block_frame_1c f1c;
};
struct Arg2 {
    Vector3 f00;
};
extern int g_8c328c38;
extern void TItemShoot_ctor_8c1aba3c(Object *, int, Arg2 *, int);
extern void njPushMatrixEx_8c38ae68(void);
extern void call_8c384610(int);
extern void call_8c3be280(int, void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern float call_8c130334(float, float);
extern float njSin_8c37eb0c(int);
Object *TItemEffBringer_ctor_8c1c547c(Object *o, int a1, Arg2 *a2, int a3)
{
    Frame frame;
    Object **home = &o;
    float v2;
    int v5;
    int v4;
    int v7;
    float t1;
    float t2;
    Object *p;
    (void)home;
    TItemShoot_ctor_8c1aba3c(o, a1, a2, a3);
    o->dispatch = (void *)0x8c27662c;
    o->tag = (int)(g_8c328c38);
    o->size = 0x94;
    njPushMatrixEx_8c38ae68();
    (&frame)->f0c = 0.0f;
    (&frame)->f08 = 0.0f;
    (&frame)->f04 = 0.0f;
    call_8c384610(0);
    call_8c3be280(0, (void *)(&(&frame)->f04), (void *)(&(&frame)->f10));
    *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&a2->f00;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f1c), (void *)(&(&frame)->f10));
    njPopMatrixEx_8c38ad10();
    t1 = call_8c130334((&frame)->f1c.f00, (&frame)->f1c.f08);
    t2 = njSin_8c37eb0c((int)((int)o->f30 - (int)(t1 * 65536.0f / 6.28318405f)));
    if (0.0f > t2) {
        t2 = t2 * -1.0f;
    }
    v2 = t2 * 4.0f + 1.0f;
    *(Vector3 *)&o->f88 = *(Vector3 *)&o->f3c;
    o->f88.f00 = o->f88.f00 / v2;
    o->f88.f04 = o->f88.f04 / v2;
    o->f88.f08 = o->f88.f08 / v2;
    o->f84 = (int)v2 + 1;
    for (v7 = 0; p = o, v7 != p->f84; v7++) {
        *(int *)((char *)(int *)((char *)p + 0x5c) + (v7 << 2)) = 0;
    }
    p->f04 |= 0x10;
    return o;
}
