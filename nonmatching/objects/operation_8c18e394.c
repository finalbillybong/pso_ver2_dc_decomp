/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e394
 * function: operation_8c18e394
 * language: c
 * reference size: 120 bytes
 * compiled size: 116 bytes (-3.3%)
 * differing lines: 34 of 60 reference instruction lines
 * differing bytes: 98
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
typedef struct Arg1 Arg1;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
};
struct Arg1 {
    int f00;
};
int operation_8c18e394(Object *o, Arg1 *a1)
{
    unsigned char v1;
    unsigned char v2;
    int v3;
    v1 = (unsigned char)o->tag;
    if (((v1 & 1)) == 0) {
        a1->f00 = (unsigned int)v1 >> 1;
        v3 = (int)&o->f01;
    } else {
        v2 = (unsigned char)o->f01;
        if (((v1 & 2)) == 0) {
            a1->f00 = (unsigned int)v1 >> 2 << 8 | v2;
            v3 = (int)&o->f02;
        } else {
            if (((v1 & 4)) == 0) {
                a1->f00 = (unsigned int)(unsigned int)v1 >> 2 >> 1 << 0x10 | v2 << 8 | o->f02;
                v3 = (int)&o->f03;
            } else {
                a1->f00 = (unsigned int)(unsigned int)v1 >> 2 >> 1 << 0x18 | v2 << 0x10 | o->f02 << 8 | o->f03;
                v3 = (int)((char *)o + 0x4);
            }
        }
    }
    return (int)(v3);
}
