/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c043724
 * function: operation_8c043724
 * language: c
 * reference size: 348 bytes
 * compiled size: 348 bytes (+0.0%)
 * differing lines: 74 of 110 reference instruction lines
 * differing bytes: 137
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
    char unknown0[0x134];
    float f134;
    float f138;
    float f13c;
    int f140;
    int f144;
    int f148;
    float f14c;
    float f150;
    float f154;
    float f158;
    float f15c;
    float f160;
    float f164;
    float f168;
    float f16c;
    float f170;
    float f174;
    float f178;
    int f17c;
    float f180;
    char unknown184[0x32];
    unsigned short f1b6;
    int f1b8;
    char unknown1bc[0x150];
    short f30c;
    short f30e;
    int f310;
    char unknown314[0x4];
    float f318;
    float f31c;
    float f320;
    float f324;
    float f328;
    float f32c;
};
void operation_8c043724(Object *o)
{
    o->f13c = 0.0f;
    o->f138 = 0.0f;
    o->f134 = 0.0f;
    o->f148 = 0;
    o->f144 = 0;
    o->f140 = 0;
    o->f154 = 0.0f;
    o->f150 = 0.0f;
    o->f14c = 0.0f;
    o->f160 = 0.0f;
    o->f15c = 0.0f;
    o->f158 = 0.0f;
    o->f16c = 0.0f;
    o->f168 = 0.0f;
    o->f164 = 0.0f;
    o->f178 = 0.0f;
    o->f170 = 0.0f;
    o->f174 = 1.0f;
    o->f17c = 0;
    o->f180 = 0.0f;
    o->f1b6 = 0xffff;
    o->f1b8 = 0;
    o->f30e = 0;
    o->f30c = 0;
    o->f310 = 0;
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    o->f32c = 0.0f;
    o->f328 = 0.0f;
    o->f324 = 0.0f;
}
