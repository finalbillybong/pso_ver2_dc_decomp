/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c144c30
 * function: operation_8c144c30
 * language: c
 * reference size: 48 bytes
 * compiled size: 48 bytes (+0.0%)
 * differing lines: 12 of 20 reference instruction lines
 * differing bytes: 8
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
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
};
struct Arg0_dc {
    char unknown0[0x44];
    int f44;
    char unknown48[0x28];
    int f70;
};
void operation_8c144c30(Object *o)
{
    int v1;
    v1 = (int)-2;
    o->fdc->f44 &= v1;
    o->fdc->f70 = (unsigned int)o->fdc->f70 >> 1 << 1;
}
