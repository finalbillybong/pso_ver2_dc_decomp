/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d7c80
 * function: operation_8c1d7c80
 * language: c
 * reference size: 624 bytes
 * compiled size: 620 bytes (-0.6%)
 * differing lines: 174 of 250 reference instruction lines
 * differing bytes: 474
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x30];
    int f30;
    float f34;
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
extern S_g8c46fe00 *g_8c46fe00;
void operation_8c1d7c80(int a0, Arg1 *a1)
{
    Frame frame;
    int v2;
    float v1;
    v1 = (float)(-1.0f / (a1->f34 + 0.1794f));
    if (6 > a1->f30) {
        v2 = (int)((int)((float)(a1->f30 * 0xff) * 0.166666672f) << 0x18 | 0xffffff);
    } else {
        v2 = (int)-1;
    }
    ((void (*)(int))0x8c38aeb4)(1);
    ((void (*)(void *))0x8c3827d8)(g_8c46fe00);
    ((void (*)(int, int))0x8c38af22)(0, v2);
    (&frame)->f00 = 16.0f;
    (&frame)->f04 = 346.0f;
    (&frame)->f08 = 12.0f + (&frame)->f00;
    (&frame)->f0c = 14.0f + (&frame)->f04;
    (&frame)->f10 = 0.87109375f;
    (&frame)->f14 = 0.1640625f;
    (&frame)->f18 = 0.91796875f;
    (&frame)->f1c = 0.21875f;
    ((void (*)(Arg1 *, Frame *))0x8c0de7d4)(a1, (&frame));
    ((void (*)(Frame *, float))0x8c38b09e)((&frame), v1);
    (&frame)->f00 = 484.0f;
    (&frame)->f04 = 346.0f;
    (&frame)->f08 = 12.0f + (&frame)->f00;
    (&frame)->f0c = 14.0f + (&frame)->f04;
    (&frame)->f10 = 0.9296875f;
    (&frame)->f18 = 0.9765625f;
    ((void (*)(Arg1 *, Frame *))0x8c0de7d4)(a1, (&frame));
    ((void (*)(Frame *, float))0x8c38b09e)((&frame), v1);
    (&frame)->f00 = 249.0f;
    (&frame)->f04 = 272.0f;
    (&frame)->f08 = 14.0f + (&frame)->f00;
    (&frame)->f0c = 12.0f + (&frame)->f04;
    (&frame)->f10 = 0.9375f;
    (&frame)->f14 = 0.0f;
    (&frame)->f18 = 0.9921875f;
    (&frame)->f1c = 0.046875f;
    ((void (*)(Arg1 *, Frame *))0x8c0de7d4)(a1, (&frame));
    ((void (*)(Frame *, float))0x8c38b09e)((&frame), v1);
    (&frame)->f00 = 249.0f;
    (&frame)->f04 = 420.0f;
    (&frame)->f08 = 14.0f + (&frame)->f00;
    (&frame)->f0c = 12.0f + (&frame)->f04;
    (&frame)->f14 = 0.109375f;
    (&frame)->f1c = 0.15625f;
    ((void (*)(Arg1 *, Frame *))0x8c0de7d4)(a1, (&frame));
    ((void (*)(Frame *, float))0x8c38b09e)((&frame), v1);
    ((void (*)(void))0x8c38af12)();
}
