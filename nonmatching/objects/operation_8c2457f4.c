/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2457f4
 * function: operation_8c2457f4
 * language: c
 * reference size: 28 bytes
 * compiled size: 26 bytes (-7.1%)
 * differing lines: 5 of 14 reference instruction lines
 * differing bytes: 8
 * provenance: generator draft (mode bgotoext)
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
typedef struct Arg0_4 Arg0_4;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
    int f08;
    int f0c;
};
int operation_8c2457f4(Object *o)
{
    int v1;
    v1 = (int)o->f08;
    if (o->f0c < v1) {
        return 0;
    }
    o->f08 = v1 + 1;
    return (int)(*(int *)((char *)((char *)o->f04 + 0x0) + (v1 << 2)));
}
