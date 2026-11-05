/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0dddcc
 * function: operation_8c0dddcc
 * language: c
 * reference size: 32 bytes
 * compiled size: 32 bytes (+0.0%)
 * differing lines: 2 of 11 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
struct S_g8c46fe20 {
    char unknown0[0x2c];
    short f2c;
};
int operation_8c0dddcc(void)
{
    if (*(int *)0x8c46fe20 == 0) {
        return 0xffff;
    }
    return (*(S_g8c46fe20 **)0x8c46fe20)->f2c;
}
