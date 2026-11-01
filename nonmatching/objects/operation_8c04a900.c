/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04a900
 * function: operation_8c04a900
 * language: c
 * reference size: 40 bytes
 * compiled size: 36 bytes (-10.0%)
 * differing lines: 4 of 15 reference instruction lines
 * differing bytes: 14
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x19e];
    short f19e;
};
short operation_8c04a900(Object *o)
{
    short v = o->f19e;
    if (v < 0) {
        return 0;
    }
    if (v > 0xfa) {
        return 0xfa;
    }
    return v;
}
