/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1591b4
 * function: operation_8c1591b4
 * language: c
 * reference size: 32 bytes
 * compiled size: 32 bytes (+0.0%)
 * differing lines: 14 of 13 reference instruction lines
 * differing bytes: 9
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void operation_8c1591b4(int a0)
{
    for (a0 = 0; 4 > a0; a0++) {
        *(int *)((char *)0x8c4daae0 + (a0 << 2)) = -1;
    }
}
