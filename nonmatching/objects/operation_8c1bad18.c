/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bad18
 * function: operation_8c1bad18
 * language: c
 * reference size: 52 bytes
 * compiled size: 52 bytes (+0.0%)
 * differing lines: 4 of 18 reference instruction lines
 * differing bytes: 28
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
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x1e];
    unsigned short f3c2;
    char unknown3c4[0x164];
    int f528;
};
extern void TObjDFYutai_create_8c21c15c(void *, int, unsigned short);
void operation_8c1bad18(Object *o)
{
    TObjDFYutai_create_8c21c15c((void *)o, 1, (unsigned short)(o->f3c2));
    o->f528 = 0;
    o->f3a0 = 0x62;
}
