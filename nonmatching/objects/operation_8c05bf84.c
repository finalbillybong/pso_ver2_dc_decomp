/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05bf84
 * function: operation_8c05bf84
 * language: c
 * reference size: 84 bytes
 * compiled size: 84 bytes (+0.0%)
 * differing lines: 2 of 34 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a8];
    unsigned short f3a8;
    char unknown3aa[0x2];
    int f3ac;
};
extern int lookup_object_by_id(unsigned short);
int operation_8c05bf84(Object *o, int a1)
{
    int v1;
    int t1;
    v1 = (int)0xffff;
    if ((unsigned short)a1 != (unsigned short)v1) {
        o->f3a8 = a1;
        if ((unsigned short)a1 != v1) {
            t1 = lookup_object_by_id((unsigned short)(o->f3a8));
            o->f3ac = (int)(t1);
        } else {
            o->f3ac = 0;
        }
        return 1;
    }
    o->f3ac = 0;
    o->f3a8 = v1;
    return 0;
}
