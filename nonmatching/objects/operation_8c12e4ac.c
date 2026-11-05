/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12e4ac
 * function: operation_8c12e4ac
 * language: c
 * reference size: 192 bytes
 * compiled size: 196 bytes (+2.1%)
 * differing lines: 120 of 79 reference instruction lines
 * differing bytes: 178
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
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
};
extern float g_8c2861d0;
extern float g_8c2861d4;
extern float g_8c2861d8;
extern float g_8c286204;
extern float g_8c286208;
float operation_8c12e4ac(int a0, float f0)
{
    Frame frame;
    int v3;
    int v2;
    float v5;
    float v4;
    float v6;
    float v1;
    (&frame)->f00 = f0;
    v1 = (float)g_8c2861d8;
    v2 = (int)*(int *)&(&frame)->f00;
    v3 = (int)(*(int *)&(&frame)->f00 & 0x7f800000);
    v4 = (float)g_8c286208;
    if (v3 == 0x7f800000) {
        if (((0x7fffff & v2)) == 0) {
            if (((-0x80000000 & v2)) != 0) {
                goto L_8c12e516;
            }
            goto L_8c12e50e;
        }
        return g_8c2861d0;
    }
    v5 = (float)g_8c2861d4;
    v6 = (float)g_8c286204;
    if (!(v3 > 0)) {
        if (((-0x80000000 & v2)) != 0) {
            goto L_8c12e52a;
        }
    } else {
        if (((v3 >> 0x17) + a0) > 0 && !(((v3 >> 0x17) + a0) >= 0xff)) {
            goto L_8c12e532;
        }
        if (a0 >= 0) {
            if (((-0x80000000 & v2)) == 0) {
L_8c12e50e:;
                return v1;
            }
L_8c12e516:;
            return v4;
        }
        if (((-0x80000000 & v2)) != 0) {
            goto L_8c12e52a;
        }
    }
    return v5;
L_8c12e52a:;
    return v6;
L_8c12e532:;
    *(int *)&(&frame)->f00 = -0x80000000 & v2 | (v3 >> 0x17) + a0 << 0x17 | 0x7fffff & v2;
    return (&frame)->f00;
}
