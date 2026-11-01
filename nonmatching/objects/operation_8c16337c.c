/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16337c
 * function: operation_8c16337c
 * language: c
 * reference size: 172 bytes
 * compiled size: 176 bytes (+2.3%)
 * differing lines: 0 of 81 reference instruction lines
 * differing bytes: 12
 * provenance: generator draft (mode retflip2)
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
struct Object {
    char unknown0[0x818];
    int f818;
};
int operation_8c16337c(Object *o, int a1)
{
    int v1;
    v1 = (int)o->f818;
    if (((v1 & 0x20)) != 0) {
        if ((((short)a1 & 1)) == 0) {
            return 0;
        }
        goto L_8c1633b4;
    }
    if (((v1 & 0x40)) != 0) {
        if ((((short)a1 & 2)) == 0) {
            return 0;
        }
        goto L_8c1633b4;
    }
    if ((((short)a1 & 4)) == 0) {
        return 0;
    }
L_8c1633b4:;
    if (((v1 & 0x10)) != 0) {
        if ((((short)a1 & 0x10)) == 0) {
            return 0;
        }
        goto L_8c1633f0;
    }
    if (((v1 & 8)) != 0) {
        if ((((short)a1 & 0x20)) == 0) {
            return 0;
        }
        goto L_8c1633f0;
    }
    if (((v1 & 4)) != 0 && (((short)a1 & 8)) == 0) {
        return 0;
    }
L_8c1633f0:;
    if (((v1 & 1)) != 0) {
        if ((((short)a1 & 0x40)) == 0) {
            return 0;
        }
        goto L_8c16341a;
    }
    if (((v1 & 2)) != 0 && (((short)a1 & 0x80)) == 0) {
        return 0;
    }
    return 1;
L_8c16341a:;
    return 1;
}
