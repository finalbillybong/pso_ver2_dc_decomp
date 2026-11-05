/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13f47c
 * function: operation_8c13f47c
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 46 of 55 reference instruction lines
 * differing bytes: 31
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern int g_8c4d9e20;
extern int g_8c4d9e24;
int operation_8c13f47c(int a0, int a1)
{
    int base;
    unsigned int v;
    base = g_8c4d9e20;
    if (base == 0) {
        return 0;
    }
    if (a1 < 0 || a1 > 0x9500) {
        return 0;
    }
    a1 = (a1 + 0x1f) & -0x20;
    if (a0 < 4) {
        v = *(unsigned int *)((char *)0x8c4d9e28 + (a0 << 2)) + a1;
        if (v >= base + (a0 + 1) * 0x9500) {
            v = 0;
        } else {
            *(unsigned int *)((char *)0x8c4d9e28 + (a0 << 2)) = v;
        }
        return v;
    }
    a0 += -4;
    v = *(unsigned int *)((char *)0x8c4d9e38 + (a0 << 2)) + a1;
    if (v >= g_8c4d9e24 + (a0 + 1) * 0x9500) {
        v = 0;
    } else {
        *(unsigned int *)((char *)0x8c4d9e38 + (a0 << 2)) = v;
    }
    return v;
}
