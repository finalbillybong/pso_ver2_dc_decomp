/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13e784
 * function: operation_8c13e784
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 82 of 95 reference instruction lines
 * differing bytes: 91
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
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x118];
    int f134;
    int f138;
    float f13c;
    float f140;
    float f144;
    float f148;
    float f14c;
    float f150;
    float f154;
    float f158;
    float f15c;
    float f160;
    float f164;
    float f168;
    int f16c;
    int f170;
    float f174;
    float f178;
    float f17c;
    int f180;
    short f184;
    char unknown186[0x2];
    float f188;
    int f18c;
};
extern S_g8c44be9c *g_8c44be9c;
extern void operation_8c01c488(void *, void *);
Object *operation_8c13e784(Object *o)
{
    operation_8c01c488((void *)o, g_8c44be9c);
    o->dispatch = (void *)0x8c26db84;
    o->f16c = 0;
    o->f138 = 0;
    o->f170 = 0;
    o->f188 = 1.0f;
    o->f18c = 0;
    o->f174 = 0.0f;
    o->f178 = 0.0f;
    o->f17c = 0.0f;
    o->f180 = 0;
    o->f184 = 0;
    o->f134 = 0;
    o->f13c = 0.0f;
    o->f140 = 0.0f;
    o->f144 = 0.0f;
    o->f148 = 0.0f;
    o->f14c = 0.0f;
    o->f150 = 0.0f;
    o->f154 = 0.0f;
    o->f158 = 0.0f;
    o->f15c = 1.0f;
    o->f160 = 0.0f;
    o->f164 = 0.0f;
    o->f168 = 1.0f;
    return o;
}
