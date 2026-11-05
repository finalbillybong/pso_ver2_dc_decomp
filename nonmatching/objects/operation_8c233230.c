/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c233230
 * function: operation_8c233230
 * language: c
 * reference size: 92 bytes
 * compiled size: 80 bytes (-13.0%)
 * differing lines: 24 of 30 reference instruction lines
 * differing bytes: 81
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -12 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c338cb4 S_g8c338cb4;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x160];
    int f168;
};
extern S_g8c338cb4 *g_8c338cb4;
int operation_8c233230(int a0)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)g_8c338cb4;
    if (v1 != 0) {
        if (a0 != 0 && a0 != 1) {
            goto L_8c23324e;
        }
        if (v1->f04 != 0x41474553) {
            goto L_8c23325e;
L_8c23324e:;
            if (a0 != 2) {
                goto L_8c233262;
            }
            if (v1->f168 != 0x41474553) {
                goto L_8c23325e;
            }
        }
        return 0;
L_8c23325e:;
        return -3;
L_8c233262:;
        return -2;
    }
    return -1;
}
