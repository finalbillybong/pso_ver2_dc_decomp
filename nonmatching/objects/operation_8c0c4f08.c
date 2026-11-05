/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c4f08
 * function: operation_8c0c4f08
 * language: c
 * reference size: 96 bytes
 * compiled size: 100 bytes (+4.2%)
 * differing lines: 14 of 45 reference instruction lines
 * differing bytes: 56
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef union FloatWord { float value; unsigned int bits; } FloatWord;
static inline int float_is_nonfinite(float value) {
    FloatWord word;
    unsigned int mask = 0x7f800000;
    word.value = value;
    return (mask & word.bits) == mask;
}
int operation_8c0c4f08(Vector3 *v)
{
    int a;
    int b;
    b = 1;
    a = 1;
    if (float_is_nonfinite(v->x) == 0) {
        if (float_is_nonfinite(v->y) == 0) {
            a = 0;
        }
    }
    if (!a) {
        if (float_is_nonfinite(v->z) == 0) {
            b = 0;
        }
    }
    return b;
}
