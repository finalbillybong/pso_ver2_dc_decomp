/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c241398
 * function: operation_8c241398
 * language: c
 * reference size: 48 bytes
 * compiled size: 48 bytes (+0.0%)
 * differing lines: 4 of 20 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern void operation_8c2413c8(int, int, int);
extern void call_8c076340(int, int, int, int, int);
void operation_8c241398(int a0, int a1, int a2, int a3, int a4)
{
    int v5;
    int v6;
    v5 = a4;
    v6 = a2;
    if (a3 == 2) {
        operation_8c2413c8(a0, v6, v5);
        return;
    }
    call_8c076340(a0, a1, v6, a3, v5);
}
