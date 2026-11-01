/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12c108
 * function: operation_8c12c108
 * language: c
 * reference size: 36 bytes
 * compiled size: 40 bytes (+11.1%)
 * differing lines: 30 of 16 reference instruction lines
 * differing bytes: 40
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern float g_8c285e20[];
float operation_8c12c108(float f0)
{
    float x2;
    float *p;
    float r;
    int i;
    x2 = f0 * f0;
    p = g_8c285e20;
    i = 6;
    r = *p++;
    do {
        r = x2 * r + *p++;
    } while (--i > 0);
    return f0 * r;
}
