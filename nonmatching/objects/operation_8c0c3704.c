/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c3704
 * function: operation_8c0c3704
 * language: c
 * reference size: 272 bytes
 * compiled size: 270 bytes (-0.7%)
 * differing lines: 38 of 135 reference instruction lines
 * differing bytes: 36
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -2 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern void __fsca(long, void *, void *);
void operation_8c0c3704(int *angles, float *output)
{
    float cx;
    float cy;
    float cz;
    float sx;
    float sy;
    float sz;
    __fsca(angles[0] >> 1, &sx, &cx);
    __fsca(angles[1] >> 1, &sy, &cy);
    __fsca(angles[2] >> 1, &sz, &cz);
    output[0] = cx * cy * cz + sx * sy * sz;
    output[1] = -cx * sy * sz + sx * cy * cz;
    output[2] = cy * sz * sx + sy * cz * cx;
    output[3] = -cz * sx * sy + sz * cx * cy;
}
