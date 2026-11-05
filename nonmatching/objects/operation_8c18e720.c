/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e720
 * function: operation_8c18e720
 * language: c
 * reference size: 16 bytes
 * compiled size: 18 bytes (+12.5%)
 * differing lines: 12 of 7 reference instruction lines
 * differing bytes: 15
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +2 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
void operation_8c18e720(char *a0, char *a1)
{
    char c;
    do {
        c = *a1++;
        *a0 = c;
        a0++;
    } while (c != 0);
}
