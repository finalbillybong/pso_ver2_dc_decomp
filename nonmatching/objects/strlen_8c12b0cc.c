/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12b0cc
 * function: strlen_8c12b0cc
 * language: c
 * reference size: 16 bytes
 * compiled size: 20 bytes (+25.0%)
 * differing lines: 14 of 8 reference instruction lines
 * differing bytes: 16
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2; offline start: Pioneer 2 office walk and NPC dialogue (emulator A/B:
 *   RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
int strlen_8c12b0cc(char *s)
{
    int n;
    n = 0;
    while (*s++ != 0) {
        n++;
    }
    return n;
}
