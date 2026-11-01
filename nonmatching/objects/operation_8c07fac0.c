/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07fac0
 * function: operation_8c07fac0
 * language: c
 * reference size: 48 bytes
 * compiled size: 52 bytes (+8.3%)
 * differing lines: 0 of 19 reference instruction lines
 * differing bytes: 12
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
struct Arg0_13c {
    char unknown0[0x330];
    short f330;
};
int operation_8c07fac0(Object *o, int a1)
{
    short v1;
    v1 = (short)o->f13c->f330;
    if (a1 == 7) {
        if ((short)v1 == 0) {
            goto L_8c07fae2;
        }
        return 0;
    }
    if ((short)v1 == 0) {
        return 0;
    }
    return 1;
L_8c07fae2:;
    return 1;
}
