/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03530c
 * function: operation_8c03530c
 * language: c
 * reference size: 60 bytes
 * compiled size: 60 bytes (+0.0%)
 * differing lines: 14 of 28 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern int call_8c18e8a0(int, int);
int operation_8c03530c(char *p)
{
    int s;
    int n;
    int i;
    signed char c;
    int t;
    s = 0;
    n = 0xc;
    i = 0;
    while (n > i && (c = *p) != 0) {
        s += c;
        i++;
        p++;
    }
    t = call_8c18e8a0(s, 0xa);
    if (t < 0 || t >= 0xa) {
        return 0;
    }
    return t;
}
