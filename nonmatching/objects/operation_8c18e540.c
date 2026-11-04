/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e540
 * function: operation_8c18e540
 * language: c
 * reference size: 44 bytes
 * compiled size: 44 bytes (+0.0%)
 * differing lines: 14 of 19 reference instruction lines
 * differing bytes: 27
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char tag;
};
struct Frame {
    char unknown0[0x4];
};
extern int hs_8c18e394(int, Frame *, int);
int operation_8c18e540(Object *o, int a1, int a2)
{
    Frame frame;
    int v1;
    int t1;
    v1 = (int)((char *)o + 0x1);
    if (((o->tag & 0x40)) != 0) {
        v1 = (int)((char *)o + 0x2);
    }
    t1 = hs_8c18e394(v1, (&frame), a2);
    return (int)(t1);
}
