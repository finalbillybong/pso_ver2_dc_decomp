/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c283d44
 * function: operation_8c283d44
 * language: c
 * reference size: 1420 bytes
 * compiled size: 1410 bytes (-0.7%)
 * differing lines: 700 of 528 reference instruction lines
 * differing bytes: 1017
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -10 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
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
extern Vector3 g_8c327530;
extern Vector3 g_8c32753c;
extern Vector3 g_8c327548;
extern Vector3 g_8c327554;
extern Vector3 g_8c327560;
extern Vector3 g_8c32756c;
extern Vector3 g_8c327578;
extern Vector3 g_8c327584;
extern Vector3 g_8c327590;
extern Vector3 g_8c32759c;
extern Vector3 g_8c3275a8;
extern Vector3 g_8c3275b4;
extern Vector3 g_8c3275c0;
extern Vector3 g_8c3275cc;
extern Vector3 g_8c3275d8;
extern Vector3 g_8c3275e4;
extern Vector3 g_8c3275f0;
extern Vector3 g_8c3275fc;
extern Vector3 g_8c327608;
extern Vector3 g_8c327614;
extern Vector3 g_8c327620;
extern Vector3 g_8c32762c;
extern Vector3 g_8c327638;
extern Vector3 g_8c327644;
extern Vector3 g_8c327650;
extern Vector3 g_8c32765c;
extern Vector3 g_8c327668;
extern Vector3 g_8c327674;
extern Vector3 g_8c327680;
extern Vector3 g_8c32768c;
extern Vector3 g_8c327698;
extern Vector3 g_8c3276a4;
extern Vector3 g_8c3276b0;
extern Vector3 g_8c3276bc;
extern Vector3 g_8c3276c8;
extern Vector3 g_8c3276d4;
extern Vector3 g_8c3276e0;
extern Vector3 g_8c3276ec;
extern Vector3 g_8c3276f8;
extern Vector3 g_8c327704;
extern Vector3 g_8c327710;
extern Vector3 g_8c32771c;
extern Vector3 g_8c327728;
extern Vector3 g_8c327734;
extern Vector3 g_8c327740;
extern Vector3 g_8c32774c;
extern char g_8c327758[];
void operation_8c283d44(void)
{
    Frame frame;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x8) = *(Vector3 *)&g_8c327530;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x14) = *(Vector3 *)&g_8c32753c;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x20) = *(Vector3 *)&g_8c327548;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2875c0;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x34) = *(Vector3 *)&g_8c2875c0;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x40) = *(Vector3 *)&g_8c327554;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x4c) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x60) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x6c) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x78) = *(Vector3 *)&(&frame)->f00;
    {
        Vector3 *p_ = (Vector3 *)&g_8c327560;
        *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x8c) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x98) = *(Vector3 *)&g_8c32756c;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0xa4) = *(Vector3 *)&g_8c327578;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0xb8) = *(Vector3 *)&g_8c327584;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0xc4) = *(Vector3 *)&g_8c327590;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0xd0) = *(Vector3 *)&g_8c32759c;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0xe4) = *(Vector3 *)&g_8c3275a8;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0xf0) = *(Vector3 *)&g_8c3275b4;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0xfc) = *(Vector3 *)&g_8c3275c0;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x110) = *(Vector3 *)&g_8c3275cc;
    {
        Vector3 *p_ = (Vector3 *)&g_8c3275d8;
        *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x11c) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x128) = *(Vector3 *)&g_8c3275e4;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x13c) = *(Vector3 *)&g_8c3275f0;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x148) = *(Vector3 *)&g_8c3275fc;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x154) = *(Vector3 *)&g_8c327608;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x168) = *(Vector3 *)&g_8c327614;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x174) = *(Vector3 *)&g_8c327620;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x180) = *(Vector3 *)&g_8c32762c;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x194) = *(Vector3 *)&g_8c327638;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x1a0) = *(Vector3 *)&g_8c327644;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x1ac) = *(Vector3 *)&g_8c327650;
    {
        Vector3 *p_ = (Vector3 *)&g_8c32765c;
        *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x1c0) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x1cc) = *(Vector3 *)&g_8c327668;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x1d8) = *(Vector3 *)&g_8c327674;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x1ec) = *(Vector3 *)&g_8c327680;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x1f8) = *(Vector3 *)&g_8c32768c;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x204) = *(Vector3 *)&g_8c327698;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x218) = *(Vector3 *)&g_8c3276a4;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x224) = *(Vector3 *)&g_8c3276b0;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x230) = *(Vector3 *)&g_8c3276bc;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x244) = *(Vector3 *)&g_8c3276c8;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x250) = *(Vector3 *)&g_8c3276d4;
    {
        Vector3 *p_ = (Vector3 *)&g_8c3276e0;
        *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x25c) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x270) = *(Vector3 *)&g_8c3276ec;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x27c) = *(Vector3 *)&g_8c3276f8;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x288) = *(Vector3 *)&g_8c327704;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x29c) = *(Vector3 *)&g_8c327710;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x2a8) = *(Vector3 *)&g_8c32771c;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x2b4) = *(Vector3 *)&g_8c327728;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x2c8) = *(Vector3 *)&g_8c327734;
    goto L_8c2842a4;
L_8c2842a4:;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x2d4) = *(Vector3 *)&g_8c327740;
    *(Vector3 *)&*(Vector3 *)(g_8c327758 + 0x2e0) = *(Vector3 *)&g_8c32774c;
}
