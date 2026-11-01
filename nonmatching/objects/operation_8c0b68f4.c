/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b68f4
 * function: operation_8c0b68f4
 * language: c
 * reference size: 40 bytes
 * compiled size: 38 bytes (-5.0%)
 * differing lines: 8 of 19 reference instruction lines
 * differing bytes: 10
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -2 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    short f20;
    short f22;
};
void operation_8c0b68f4(Object *o)
{
    o->f22 += 1;
    if (o->f20 < o->f22) {
        o->f04 |= 1;
    }
}
