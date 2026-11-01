/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c159194
 * function: operation_8c159194
 * language: c
 * reference size: 32 bytes
 * compiled size: 32 bytes (+0.0%)
 * differing lines: 14 of 13 reference instruction lines
 * differing bytes: 9
 * provenance: generator draft (mode switch2ext)
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
void operation_8c159194(void)
{
    int v1;
    v1 = (int)0;
    while (4 > v1) {
        *(int *)((char *)0x8c4daae0 + (v1 << 2)) = -1;
        v1 = (int)(v1 + 1);
    }
}
