/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c283348
 * function: operation_8c283348
 * language: c
 * reference size: 900 bytes
 * compiled size: 892 bytes (-0.9%)
 * differing lines: 616 of 346 reference instruction lines
 * differing bytes: 766
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
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
extern Vector3 g_8c3267b4;
extern Vector3 g_8c3267c0;
extern Vector3 g_8c3267cc;
extern Vector3 g_8c3267d8;
extern Vector3 g_8c3267e4;
extern Vector3 g_8c3267f0;
extern Vector3 g_8c3267fc;
extern Vector3 g_8c326808;
extern Vector3 g_8c326814;
extern Vector3 g_8c326820;
extern Vector3 g_8c32682c;
extern Vector3 g_8c326838;
extern Vector3 g_8c326844;
extern Vector3 g_8c326850;
extern Vector3 g_8c32685c;
extern Vector3 g_8c326868;
extern Vector3 g_8c326874;
extern Vector3 g_8c326880;
extern Vector3 g_8c32688c;
extern Vector3 g_8c326898;
extern Vector3 g_8c3268a4;
extern Vector3 g_8c3268b0;
extern Vector3 g_8c3268bc;
extern Vector3 g_8c3268c8;
extern Vector3 g_8c3268d4;
extern Vector3 g_8c3268e0;
extern char g_8c3268ec[];
void operation_8c283348(void)
{
    Frame frame;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x8) = *(Vector3 *)&g_8c3267b4;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x14) = *(Vector3 *)&g_8c3267c0;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x20) = *(Vector3 *)&g_8c3267cc;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2875c0;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x34) = *(Vector3 *)&g_8c2875c0;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x40) = *(Vector3 *)&g_8c3267d8;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x4c) = *(Vector3 *)&(&frame)->f00;
    {
        Vector3 *p_ = (Vector3 *)&g_8c3267e4;
        *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x60) = *p_;
    }
    {
        Vector3 *p_ = (Vector3 *)&g_8c3267f0;
        *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x6c) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x78) = *(Vector3 *)&g_8c3267fc;
    {
        Vector3 *p_ = (Vector3 *)&g_8c326808;
        *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x8c) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x98) = *(Vector3 *)&g_8c326814;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0xa4) = *(Vector3 *)&g_8c326820;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0xb8) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0xc4) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0xd0) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0xe4) = *(Vector3 *)&g_8c32682c;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0xf0) = *(Vector3 *)&(&frame)->f00;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0xfc) = *(Vector3 *)&g_8c326838;
    {
        Vector3 *p_ = (Vector3 *)&g_8c326844;
        *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x110) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x11c) = *(Vector3 *)&(&frame)->f00;
    {
        Vector3 *p_ = (Vector3 *)&g_8c326850;
        *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x128) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x13c) = *(Vector3 *)&g_8c32685c;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x148) = *(Vector3 *)&g_8c326868;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x154) = *(Vector3 *)&g_8c326874;
    {
        Vector3 *p_ = (Vector3 *)&g_8c326880;
        *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x168) = *p_;
    }
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x174) = *(Vector3 *)&g_8c32688c;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x180) = *(Vector3 *)&g_8c326898;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x194) = *(Vector3 *)&g_8c3268a4;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x1a0) = *(Vector3 *)&g_8c3268b0;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x1ac) = *(Vector3 *)&g_8c3268bc;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x1c0) = *(Vector3 *)&g_8c3268c8;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x1cc) = *(Vector3 *)&g_8c3268d4;
    *(Vector3 *)&*(Vector3 *)(g_8c3268ec + 0x1d8) = *(Vector3 *)&g_8c3268e0;
}
