/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12e2a0
 * function: operation_8c12e2a0
 * language: c
 * reference size: 88 bytes
 * compiled size: 84 bytes (-4.5%)
 * differing lines: 52 of 35 reference instruction lines
 * differing bytes: 79
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2; offline start: Pioneer 2 office walk and NPC dialogue (emulator A/B:
 *   RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
};
extern float g_8c2861f0;
extern float g_8c286220;
extern float hs_8c12e0bc(float);
float operation_8c12e2a0(float f0, float f1)
{
    Frame frame;
    float v3;
    float v8;
    float t1;
    (&frame)->f04 = f0;
    (&frame)->f00 = f1;
    t1 = hs_8c12e0bc((&frame)->f04 / f1);
    v8 = (float)t1;
    if (((*(int *)&(&frame)->f00 & -0x80000000)) != 0) {
        if (((-0x80000000 & *(int *)&(&frame)->f04)) != 0) {
            v3 = (float)g_8c286220;
        } else {
            v3 = (float)g_8c2861f0;
        }
        v8 = (float)(v3 + t1);
    }
    return v8;
}
