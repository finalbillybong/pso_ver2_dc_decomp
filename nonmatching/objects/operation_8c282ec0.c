/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c282ec0
 * function: operation_8c282ec0
 * language: c
 * reference size: 1160 bytes
 * compiled size: 1156 bytes (-0.3%)
 * differing lines: 588 of 435 reference instruction lines
 * differing bytes: 870
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    Vector3 f00;
};
extern Vector3 g_8c2875c0;
extern Vector3 g_8c32613c;
extern Vector3 g_8c326148;
extern Vector3 g_8c326154;
extern Vector3 g_8c326160;
extern Vector3 g_8c32616c;
extern Vector3 g_8c326178;
extern Vector3 g_8c326184;
extern Vector3 g_8c326190;
extern Vector3 g_8c32619c;
extern Vector3 g_8c3261a8;
extern Vector3 g_8c3261b4;
extern Vector3 g_8c3261c0;
extern Vector3 g_8c3261cc;
extern Vector3 g_8c3261d8;
extern Vector3 g_8c3261e4;
extern Vector3 g_8c3261f0;
extern Vector3 g_8c3261fc;
extern Vector3 g_8c326208;
extern Vector3 g_8c326214;
extern Vector3 g_8c326220;
extern Vector3 g_8c32622c;
extern Vector3 g_8c326238;
extern Vector3 g_8c326244;
extern Vector3 g_8c326250;
extern Vector3 g_8c32625c;
extern Vector3 g_8c326268;
extern Vector3 g_8c326274;
extern Vector3 g_8c326280;
extern Vector3 g_8c32628c;
extern Vector3 g_8c326298;
extern Vector3 g_8c3262a4;
extern Vector3 g_8c3262b0;
extern Vector3 g_8c3262bc;
extern Vector3 g_8c3262c8;
extern Vector3 g_8c3262d4;
extern Vector3 g_8c3262e0;
extern Vector3 g_8c3262ec;
extern char g_8c3262f8[];
void operation_8c282ec0(void)
{
    Frame frame;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x8) = *(Vector3 *)&g_8c32613c;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x14) = *(Vector3 *)&g_8c326148;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x20) = *(Vector3 *)&g_8c326154;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2875c0;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x34) = *(Vector3 *)&g_8c2875c0;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x40) = *(Vector3 *)&g_8c326160;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x4c) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x60) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x6c) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x78) = *(Vector3 *)&(&frame)->f00;
    {
        Vector3 *p_ = (Vector3 *)&g_8c32616c;
        *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x8c) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x98) = *(Vector3 *)&g_8c326178;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0xa4) = *(Vector3 *)&g_8c326184;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0xb8) = *(Vector3 *)&g_8c326190;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0xc4) = *(Vector3 *)&g_8c32619c;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0xd0) = *(Vector3 *)&g_8c3261a8;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0xe4) = *(Vector3 *)&g_8c3261b4;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0xf0) = *(Vector3 *)&g_8c3261c0;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0xfc) = *(Vector3 *)&g_8c3261cc;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x110) = *(Vector3 *)&g_8c3261d8;
    {
        Vector3 *p_ = (Vector3 *)&g_8c3261e4;
        *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x11c) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x128) = *(Vector3 *)&g_8c3261f0;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x13c) = *(Vector3 *)&g_8c3261fc;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x148) = *(Vector3 *)&g_8c326208;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x154) = *(Vector3 *)&g_8c326214;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x168) = *(Vector3 *)&g_8c326220;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x174) = *(Vector3 *)&g_8c32622c;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x180) = *(Vector3 *)&g_8c326238;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x194) = *(Vector3 *)&g_8c326244;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x1a0) = *(Vector3 *)&g_8c326250;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x1ac) = *(Vector3 *)&g_8c32625c;
    {
        Vector3 *p_ = (Vector3 *)&g_8c326268;
        *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x1c0) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x1cc) = *(Vector3 *)&g_8c326274;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x1d8) = *(Vector3 *)&g_8c326280;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x1ec) = *(Vector3 *)&g_8c32628c;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x1f8) = *(Vector3 *)&g_8c326298;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x204) = *(Vector3 *)&g_8c3262a4;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x218) = *(Vector3 *)&g_8c3262b0;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x224) = *(Vector3 *)&g_8c3262bc;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x230) = *(Vector3 *)&g_8c3262c8;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x244) = *(Vector3 *)&g_8c3262d4;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x250) = *(Vector3 *)&g_8c3262e0;
    *(Vector3 *)&*(Vector3 *)(g_8c3262f8 + 0x25c) = *(Vector3 *)&g_8c3262ec;
}
