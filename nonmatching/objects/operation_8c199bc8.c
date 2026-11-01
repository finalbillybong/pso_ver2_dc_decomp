/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c199bc8
 * function: operation_8c199bc8
 * language: c
 * reference size: 588 bytes
 * compiled size: 588 bytes (+0.0%)
 * differing lines: 128 of 246 reference instruction lines
 * differing bytes: 355
 * provenance: generator draft (mode ccastext)
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
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg1 {
    float f00;
    float f04;
    float f08;
    float f0c;
    char unknown10[0xc];
    float f1c;
    char unknown20[0x10];
    int f30;
    float f34;
};
struct Object {
    char unknown0[0x4];
    float f04;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
struct Arg2 {
    char unknown0[0x4];
    float f04;
};
extern S_g8c46fe00 *g_8c46fe00;
void operation_8c199bc8(Object *o, Arg1 *a1, Arg2 *a2)
{
    Frame frame;
    float v1;
    float v3;
    float v2;
    float v4;
    if (!(a1->f30 >= 0) || !(o->f04 > a1->f1c) || 72.0f > a1->f0c) {
        return;
    }
    v1 = (float)a1->f00;
    v2 = (float)(-1.0f / (a1->f34 + 0.1495f));
    v1 = (float)(v1 + a1->f08 - 22.0f);
    v3 = (float)a1->f04;
    ((void (*)(int))0x8c38aeb4)(1);
    ((void (*)(void *))0x8c3827d8)(g_8c46fe00);
    ((void (*)(int, int))0x8c38af22)(0, -1);
    (&frame)->f00 = v1;
    (&frame)->f04 = v3 + 24.0f;
    (&frame)->f08 = (&frame)->f00 + 14.0f;
    (&frame)->f0c = (&frame)->f04 + 12.0f;
    (&frame)->f10 = 0.875f;
    (&frame)->f14 = 0.23046875f;
    (&frame)->f18 = 0.9296875f;
    (&frame)->f1c = 0.27734375f;
    ((void (*)(Arg1 *, Frame *))0x8c0de7d4)(a1, (&frame));
    ((void (*)(Frame *, float))0x8c38b09e)((&frame), v2);
    (&frame)->f00 = v1;
    (&frame)->f04 = v3 - 31.0f + a1->f0c;
    (&frame)->f08 = (&frame)->f00 + 14.0f;
    (&frame)->f0c = (&frame)->f04 + 12.0f;
    (&frame)->f14 = 0.33984375f;
    (&frame)->f1c = 0.38671875f;
    ((void (*)(Arg1 *, Frame *))0x8c0de7d4)(a1, (&frame));
    ((void (*)(Frame *, float))0x8c38b09e)((&frame), v2);
    v4 = (float)(a1->f0c - 14.0f - 33.0f - 24.0f);
    (&frame)->f04 = a2->f04 * v4 / o->f04 + (v3 + 14.0f + 24.0f);
    (&frame)->f0c = a1->f1c * v4 / o->f04 + (&frame)->f04;
    (&frame)->f00 = v1;
    (&frame)->f08 = (&frame)->f00 + 14.0f;
    (&frame)->f14 = 0.28515625f;
    (&frame)->f1c = 0.33203125f;
    ((void (*)(Arg1 *, Frame *))0x8c0de7d4)(a1, (&frame));
    ((void (*)(Frame *, float))0x8c38b09e)((&frame), v2);
    ((void (*)(void))0x8c38af12)();
}
