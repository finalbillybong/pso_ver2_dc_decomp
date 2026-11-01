/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12f264
 * function: operation_8c12f264
 * language: c
 * reference size: 36 bytes
 * compiled size: 44 bytes (+22.2%)
 * differing lines: 18 of 13 reference instruction lines
 * differing bytes: 41
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void memcpy_8c12b77c(int, void *, int);
void operation_8c12f264(int a0, int a1)
{
    int *home = &a0;
    int *home1 = &a1;
    (void)home;
    (void)home1;
    memcpy_8c12b77c(a1, (void *)(&*(int *)((char *)0x8c286050 + (a0 << 3))), 8);
}
