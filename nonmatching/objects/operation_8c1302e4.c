/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1302e4
 * function: operation_8c1302e4
 * language: c
 * reference size: 80 bytes
 * compiled size: 84 bytes (+5.0%)
 * differing lines: 38 of 29 reference instruction lines
 * differing bytes: 67
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern int g_8c4d9a00;
extern float call_8c12dfac(float);
float operation_8c1302e4(float a0)
{
    float r;
    r = call_8c12dfac(a0);
    if ((*(int *)&r & 0x7f800000) == 0x7f800000) {
        if ((*(int *)&r & 0x7fffff) != 0) {
            g_8c4d9a00 = 0x44d;
        } else {
            g_8c4d9a00 = 0x44c;
        }
    }
    return r;
}
