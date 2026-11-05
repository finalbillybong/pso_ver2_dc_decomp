/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12b880
 * function: memset_8c12b880
 * language: c
 * reference size: 24 bytes
 * compiled size: 24 bytes (+0.0%)
 * differing lines: 14 of 12 reference instruction lines
 * differing bytes: 18
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char f00;
};
int memset_8c12b880(int a0, int a1, unsigned int a2)
{
    S_vv2 *v2;
    int v1;
    if (!((unsigned int)0 >= a2)) {
        v1 = (int)0;
        v2 = (S_vv2 *)a0;
L_8c12b88a:;
        v2->f00 = a1;
        if (!((unsigned int)(v1 + 1) >= a2)) {
            v1 = (int)(v1 + 1);
            v2 = (S_vv2 *)((char *)v2 + 1);
            goto L_8c12b88a;
        }
    }
    return (int)(a0);
}
