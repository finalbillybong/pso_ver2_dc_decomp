/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12b548
 * function: operation_8c12b548
 * language: c
 * reference size: 40 bytes
 * compiled size: 40 bytes (+0.0%)
 * differing lines: 16 of 17 reference instruction lines
 * differing bytes: 21
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void vsprintf_8c12d5e0(int, int, int, int, int);
void operation_8c12b548(int a0, int a1, int a2)
{
    int *home = &a0;
    int *home1 = &a1;
    int *home2 = &a2;
    (void)home;
    (void)home1;
    (void)home2;
    vsprintf_8c12d5e0(1, 0, a0, a1, a2);
}
