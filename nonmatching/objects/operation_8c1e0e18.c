/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e0e18
 * function: operation_8c1e0e18
 * language: c
 * reference size: 52 bytes
 * compiled size: 48 bytes (-7.7%)
 * differing lines: 4 of 19 reference instruction lines
 * differing bytes: 18
 * provenance: generator draft (mode bgotoext)
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
    char unknown0[0x68];
    int f68;
};
int operation_8c1e0e18(Object *o, int a1)
{
    if (((o->f68 & 0x80)) != 0) {
        return *(unsigned short *)((char *)0x8c2f23ae + ((unsigned char)a1 << 1));
    }
    return *(unsigned short *)((char *)0x8c2f229a + ((unsigned char)a1 << 1));
}
