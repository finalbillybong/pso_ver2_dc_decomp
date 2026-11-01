/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c65f4
 * function: operation_8c1c65f4
 * language: c
 * reference size: 408 bytes
 * compiled size: 408 bytes (+0.0%)
 * differing lines: 44 of 179 reference instruction lines
 * differing bytes: 72
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
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg4 Arg4;
typedef struct Block_p0_40 {
    float f00;
    float f04;
    float f08;
} Block_p0_40;
typedef struct Block_frame_4 {
    float f00;
    float f04;
    float f08;
} Block_frame_4;
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
    int f34;
    int f38;
    int f3c;
    Block_p0_40 f40;
    int f4c;
    int f50;
};
struct Arg0_30 {
    char unknown0[0x64];
    int f64;
};
struct Arg4 {
    Vector3 f00;
};
struct Frame {
    Block_frame_4 f04;
};
extern int g_8c328ce0;
extern int g_8c328ce8;
extern int rand(void);
Object *operation_8c1c65f4(Object *o, int a1, int a2, int a3, register Arg4 *a4)
{
    Frame frame;
    Object **home = &o;
    char *v1;
    int t1;
    int t2;
    int t3;
    float t4;
    float t5;
    float t6;
    (void)home;
    {
        Object *base = o;
        ((void (*)(Object *, int))0x8c0330e4)(base, a1);
        base->dispatch = (void *)0x8c27671c;
        base->tag = (int)(g_8c328ce0);
        base->size = 0x54;
        base->f30 = (Arg0_30 *)a2;
        v1 = (char *)base->f30->f64;
        base->f38 = (int)(v1);
        base->f3c = 0;
        base->f34 = 0;
        base->f4c = 0;
        base->f50 = 0;
        base->f2c = 0.0f;
        base->f28 = 0.0f;
        base->f24 = 0.0f;
        base->f20 = 0.0f;
        base->f04 |= 0x10;
    }
    o->dispatch = (void *)0x8c2766dc;
    o->tag = (int)(g_8c328ce8);
    o->size = 0x54;
    *(Vector3 *)&o->f40 = *(Vector3 *)&a4->f00;
    t1 = rand();
    o->f40.f00 += (float)t1 / 32768.0f;
    t2 = rand();
    o->f40.f04 += (float)t2 / 32768.0f;
    t3 = rand();
    o->f40.f08 += (float)t3 / 32768.0f;
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&a4->f00;
    ((void (*)(void *, int))0x8c37f6f0)(&(&frame)->f04, a3);
    t4 = ((float (*)(float, float))0x8c130334)((&frame)->f04.f00, (&frame)->f04.f08);
    o->f38 = (int)(t4 * 65536.0f / 6.28318405f);
    if ((&frame)->f04.f04 != 0.0f) {
        t5 = ((float (*)(float))0x8c37f6c0)((&frame)->f04.f00 * (&frame)->f04.f00 + (&frame)->f04.f08 * (&frame)->f04.f08);
        t6 = ((float (*)(float, float))0x8c130334)((&frame)->f04.f04, t5);
        o->f34 = (int)(t6 * 65536.0f / 6.28318405f);
        o->f3c = 0;
    } else {
        o->f3c = 0;
        o->f34 = 0;
    }
    return o;
}
