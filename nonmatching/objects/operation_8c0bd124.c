/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bd124
 * function: operation_8c0bd124
 * language: c
 * reference size: 68 bytes
 * compiled size: 64 bytes (-5.9%)
 * differing lines: 16 of 26 reference instruction lines
 * differing bytes: 64
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
    char unknown0[0x3b8];
    int f3b8;
};
extern int angle_halfway(int, int);
void operation_8c0bd124(Object *o, int a1)
{
    int t1;
    if (-0x238e > a1) {
        a1 = (int)-0x238e;
    } else {
        if (a1 > 0x238e) {
            a1 = (int)0x238e;
        }
    }
    t1 = angle_halfway((int)(o->f3b8), a1);
    o->f3b8 = (int)(t1);
}
