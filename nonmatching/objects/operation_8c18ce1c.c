/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18ce1c
 * function: operation_8c18ce1c
 * language: c
 * reference size: 32 bytes
 * compiled size: 26 bytes (-18.8%)
 * differing lines: 5 of 16 reference instruction lines
 * differing bytes: 32
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -6 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x4];
    int f08;
};
void operation_8c18ce1c(Object *o)
{
    int v1;
    char *v11;
    v1 = (int)o->tag;
    if (v1 != 0) {
        v11 = (char *)o->f08;
        if (v11 != 0) {
            ((void (*)(int, int))(v11))(v1, -1);
        }
    }
}
