/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12f67c
 * function: operation_8c12f67c
 * language: c
 * reference size: 40 bytes
 * compiled size: 44 bytes (+10.0%)
 * differing lines: 18 of 15 reference instruction lines
 * differing bytes: 31
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
struct Object {
    char tag;
};
extern int g_8c4d9a00;
int operation_8c12f67c(Object *o, int a1)
{
    if (o->tag != 0 && ((int)o - a1) >= 0x200) {
        g_8c4d9a00 = 0x450;
        return 1;
    }
    return 0;
}
