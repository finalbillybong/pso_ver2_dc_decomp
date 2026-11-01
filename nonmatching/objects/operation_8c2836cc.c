/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2836cc
 * function: operation_8c2836cc
 * language: c
 * reference size: 1656 bytes
 * compiled size: 1648 bytes (-0.5%)
 * differing lines: 882 of 639 reference instruction lines
 * differing bytes: 1296
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3270bc S_L8c3270bc;
typedef struct S_L8c32739c S_L8c32739c;
typedef struct Frame Frame;
struct Frame {
    Vector3 f00;
};
struct S_L8c32739c {
    int f00;
    int f04;
    int f08;
};
struct S_L8c3270bc {
    int f00;
    int f04;
    int f08;
};
extern Vector3 g_8c2875c0;
extern Vector3 g_8c326f60;
extern Vector3 g_8c326f6c;
extern Vector3 g_8c326f78;
extern Vector3 g_8c326f84;
extern Vector3 g_8c326f90;
extern Vector3 g_8c326f9c;
extern Vector3 g_8c326fa8;
extern Vector3 g_8c326fb4;
extern Vector3 g_8c326fc0;
extern Vector3 g_8c326fcc;
extern Vector3 g_8c326fd8;
extern Vector3 g_8c326fe4;
extern Vector3 g_8c326ff0;
extern Vector3 g_8c326ffc;
extern Vector3 g_8c327008;
extern Vector3 g_8c327014;
extern Vector3 g_8c327020;
extern Vector3 g_8c32702c;
extern Vector3 g_8c327038;
extern Vector3 g_8c327044;
extern Vector3 g_8c327050;
extern Vector3 g_8c32705c;
extern Vector3 g_8c327068;
extern Vector3 g_8c327074;
extern Vector3 g_8c327080;
extern Vector3 g_8c32708c;
extern Vector3 g_8c327098;
extern Vector3 g_8c3270a4;
extern Vector3 g_8c3270b0;
extern Vector3 g_8c3270c8;
extern Vector3 g_8c3270d4;
extern Vector3 g_8c3270e0;
extern Vector3 g_8c3270ec;
extern Vector3 g_8c3270f8;
extern Vector3 g_8c327104;
extern Vector3 g_8c327110;
extern Vector3 g_8c32711c;
extern S_L8c3270bc g_8c3270bc;
extern S_L8c32739c g_8c32739c;
extern char g_8c327128[];
void operation_8c2836cc(void)
{
    Frame frame;
    int v1;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2875c0;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x4) = *(Vector3 *)&g_8c2875c0;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x10) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x1c) = *(Vector3 *)&g_8c326f60;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x28) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x38) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x44) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x50) = *(Vector3 *)&g_8c326f6c;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x5c) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x6c) = *(Vector3 *)&g_8c326f78;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x78) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x84) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x90) = *(Vector3 *)&g_8c326f84;
    {
        Vector3 *p_ = (Vector3 *)&g_8c326f90;
        *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0xa0) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0xac) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0xb8) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0xc4) = *(Vector3 *)&g_8c326f9c;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0xd4) = *(Vector3 *)&g_8c326fa8;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0xe0) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0xec) = *(Vector3 *)&g_8c326fb4;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0xf8) = *(Vector3 *)&g_8c326fc0;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x108) = *(Vector3 *)&g_8c326fcc;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x114) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x120) = *(Vector3 *)&g_8c326fd8;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x12c) = *(Vector3 *)&g_8c326fe4;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x13c) = *(Vector3 *)&g_8c326ff0;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x148) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x154) = *(Vector3 *)&g_8c326ffc;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x160) = *(Vector3 *)&g_8c327008;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x170) = *(Vector3 *)&g_8c327014;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x17c) = *(Vector3 *)&(&frame)->f00;
    {
        Vector3 *p_ = (Vector3 *)&g_8c327020;
        *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x188) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x194) = *(Vector3 *)&g_8c32702c;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x1a4) = *(Vector3 *)&g_8c327038;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x1b0) = *(Vector3 *)&(&frame)->f00;
    {
        Vector3 *p_ = (Vector3 *)&g_8c327044;
        *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x1bc) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x1c8) = *(Vector3 *)&g_8c327050;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x1d8) = *(Vector3 *)&g_8c32705c;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x1e4) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x1f0) = *(Vector3 *)&g_8c327068;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x1fc) = *(Vector3 *)&g_8c327074;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x20c) = *(Vector3 *)&g_8c327080;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x218) = *(Vector3 *)&(&frame)->f00;
    {
        Vector3 *p_ = (Vector3 *)&g_8c32708c;
        *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x224) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x230) = *(Vector3 *)&g_8c327098;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x240) = *(Vector3 *)&g_8c3270a4;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x24c) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x258) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x264) = *(Vector3 *)&g_8c3270b0;
    v1 = (int)(&g_8c3270bc)->f00;
    goto L_8c283bf0;
L_8c283bf0:;
    (&g_8c32739c)->f00 = (int)(v1);
    (&g_8c32739c)->f04 = (int)((&g_8c3270bc)->f04);
    (&g_8c32739c)->f08 = (int)((&g_8c3270bc)->f08);
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x280) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x28c) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x298) = *(Vector3 *)&g_8c3270c8;
    {
        Vector3 *p_ = (Vector3 *)&g_8c3270d4;
        *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x2a8) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x2b4) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x2c0) = *(Vector3 *)&g_8c3270e0;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x2cc) = *(Vector3 *)&g_8c3270ec;
    {
        Vector3 *p_ = (Vector3 *)&g_8c3270f8;
        *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x2dc) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x2e8) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x2f4) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x300) = *(Vector3 *)&g_8c327104;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x310) = *(Vector3 *)&g_8c327110;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x31c) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x328) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327128 + 0x334) = *(Vector3 *)&g_8c32711c;
}
