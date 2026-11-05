/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c025764
 * function: operation_8c025764
 * language: c
 * reference size: 36 bytes
 * compiled size: 34 bytes (-5.6%)
 * differing lines: 9 of 18 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -2 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
int operation_8c025764(int a0, Arg1 *a1, int a2)
{
    int r;
    short v;
    a1->f00 += a0;
    r = 0;
    v = a1->f00;
    if (v < 0) {
        a1->f00 = r;
        return r;
    }
    v -= a2;
    if (v > 0) {
        a1->f00 = a2;
    }
    return v;
}
