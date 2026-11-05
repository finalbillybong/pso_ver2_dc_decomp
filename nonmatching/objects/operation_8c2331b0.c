/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2331b0
 * function: operation_8c2331b0
 * language: c
 * reference size: 30 bytes
 * compiled size: 32 bytes (+6.7%)
 * differing lines: 4 of 15 reference instruction lines
 * differing bytes: 16
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +2 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int fs_poll_8c378e04(int);
int operation_8c2331b0(int a0)
{
    int (*fp)(int);
    fp = fs_poll_8c378e04;
    do {
        a0 = fp(a0);
        if (a0 == 1) {
            break;
        }
    } while (a0 != 3);
    return a0;
}
