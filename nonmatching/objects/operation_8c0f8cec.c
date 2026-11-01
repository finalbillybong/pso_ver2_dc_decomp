/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f8cec
 * function: operation_8c0f8cec
 * language: c
 * reference size: 292 bytes
 * compiled size: 292 bytes (+0.0%)
 * differing lines: 4 of 106 reference instruction lines
 * differing bytes: 22
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
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_3a8 Arg0_3a8;
typedef struct S_vv5 S_vv5;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    char unknown48[0x35c];
    Arg0_3a4 *f3a4;
    Arg0_3a8 *f3a8;
    int f3ac;
    char unknown3b0[0xc];
    float f3bc;
    float f3c0;
    float f3c4;
    float f3c8;
    float f3cc;
    char unknown3d0[0x14];
    int f3e4;
    char unknown3e8[0x20];
    int f408;
};
struct Arg0_3a8 {
    char unknown0[0x18];
    int f18;
};
struct S_vv5 {
    char unknown0[0x18];
    int f18;
};
extern int operation_8c051ff4(void *, void *, void *);
extern void call_8c0ffdf0(void *, int);
extern float object_random_fraction(void *);
void operation_8c0f8cec(Object *o)
{
    Frame frame;
    S_vv5 *v5;
    int t1;
    float t2;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    (&frame)->f00.f04 += 5.0f;
    t1 = operation_8c051ff4((void *)o, (void *)(&frame), (void *)0);
    if (t1 != 0) {
        o->f3c.f04 += ((&frame)->f00.f04 - o->f3c.f04) * 0.5f;
    }
    o->f3c0 = -2.5f;
    o->f3cc = 0.0f;
    o->f3c8 = 0.0f;
    o->f3c4 = 0.0f;
    o->f3bc = 0.0f;
    o->f3e4 = 0;
    call_8c0ffdf0((void *)(o->f3a4), 7);
    o->f3a8->f18 &= -0x14001ad1;
    v5 = (S_vv5 *)o->f3a8;
    v5->f18 |= 0x14000a50;
    o->f408 = 0;
    o->f34 |= 0x40000;
    t2 = object_random_fraction((void *)o);
    t1 = 0x3ac;
    *(int *)((char *)o + t1) = (int)(t2 * 15.0f) + 0xf;
}
