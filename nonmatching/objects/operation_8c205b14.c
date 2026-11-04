/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c205b14
 * function: operation_8c205b14
 * language: c
 * reference size: 46 bytes
 * compiled size: 56 bytes (+21.7%)
 * differing lines: 22 of 23 reference instruction lines
 * differing bytes: 36
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +10 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int hs_8c2045b4(int, int, int);
extern int hs_8c204dc2(void);
int operation_8c205b14(int a0, int a1, int a2, int a3)
{
    int v1;
    int v2;
    int t1;
    int t2;
    v1 = (int)*(int *)((char *)0x8c504900 + (a0 << 2));
    if (v1 != 1) {
        if (v1 != 0) {
            return (int)(a3);
        }
    } else {
        t1 = hs_8c2045b4(a0, a1, a2);
        v2 = (int)t1;
        goto L_8c205b3a;
    }
    t2 = hs_8c204dc2();
    v2 = (int)t2;
L_8c205b3a:;
    return (int)(v2);
}
