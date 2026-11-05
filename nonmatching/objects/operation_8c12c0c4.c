/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12c0c4
 * function: operation_8c12c0c4
 * language: c
 * reference size: 36 bytes
 * compiled size: 40 bytes (+11.1%)
 * differing lines: 30 of 16 reference instruction lines
 * differing bytes: 40
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern float g_8c285de8[];
float operation_8c12c0c4(float f0)
{
    float x2;
    float *p;
    float r;
    int i;
    x2 = f0 * f0;
    p = g_8c285de8;
    i = 5;
    r = *p++;
    do {
        r = x2 * r + *p++;
        i -= 1;
    } while (i > 0);
    return f0 * r;
}
