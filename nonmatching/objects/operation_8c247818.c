/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c247818
 * function: operation_8c247818
 * language: c
 * reference size: 44 bytes
 * compiled size: 44 bytes (+0.0%)
 * differing lines: 10 of 21 reference instruction lines
 * differing bytes: 20
 * provenance: generator draft (mode bgotoext)
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
    char tag;
    char f01;
};
int operation_8c247818(Object *o)
{
    char v1;
    char v5;
    int v4;
    int v2;
    v1 = (char)o->f01;
    v2 = (int)0;
    if ((char)v1 >= -1) {
        v2 = (int)0;
        if (0x1d >= (char)v1) {
            v2 = (int)1;
        }
    }
    v4 = (int)v1;
    if (v2 == 0) {
        v4 = (int)0x1d;
    }
    v5 = (char)o->tag;
    if ((char)v4 > (char)v5) {
        v4 = (int)v5;
    }
    return (int)(v4);
}
