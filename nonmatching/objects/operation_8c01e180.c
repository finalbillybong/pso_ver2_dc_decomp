/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01e180
 * function: operation_8c01e180
 * language: c
 * reference size: 44 bytes
 * compiled size: 48 bytes (+9.1%)
 * differing lines: 2 of 16 reference instruction lines
 * differing bytes: 20
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c01e180(void)
{
    if (*(int *)0x8c41cb3c != 0) {
        return 0;
    }
    return (*(int *)0x8c5064f8 != 0) ? 0 : *(char *)0x8c41cd05;
}
