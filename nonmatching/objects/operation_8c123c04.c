/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c123c04
 * function: operation_8c123c04
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 20 of 65 reference instruction lines
 * differing bytes: 25
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
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0xc8];
    float f110;
    float f114;
    float f118;
    Vector3 f11c;
    char unknown128[0x8];
    float f130;
    short f134;
    short f136;
    char f138;
    char f139;
    char unknown13a[0x2];
    float f13c;
    float f140;
    float f144;
    float f148;
};
void operation_8c123c04(Object *o)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)((char *)o + 0x104);
    *(Vector3 *)&v1->f00 = *(Vector3 *)&o->f3c;
    *(Vector3 *)&o->f11c = *(Vector3 *)&o->f3c;
    o->f110 = 0.0f;
    o->f114 = 0.0f;
    o->f118 = 0.0f;
    o->f130 = 0.0f;
    o->f138 = 0;
    o->f139 = 0;
    o->f134 = 0x1e;
    o->f136 = 0;
    o->f13c = 1.0f;
    o->f140 = 1.0f;
    o->f144 = 1.0f;
    o->f148 = 1.0f;
}
