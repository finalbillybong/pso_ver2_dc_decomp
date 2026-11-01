/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04a838
 * function: operation_8c04a838
 * language: c
 * reference size: 40 bytes
 * compiled size: 36 bytes (-10.0%)
 * differing lines: 4 of 15 reference instruction lines
 * differing bytes: 14
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x19c];
    short f19c;
};
short operation_8c04a838(Object *o)
{
    if (!(o->f19c >= 0)) {
        return 0;
    }
    if (o->f19c > 0xfa) {
        return 0xfa;
    }
    return o->f19c;
}
