/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c129538
 * function: operation_8c129538
 * language: c
 * reference size: 276 bytes
 * compiled size: 276 bytes (+0.0%)
 * differing lines: 62 of 101 reference instruction lines
 * differing bytes: 76
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
typedef struct Block_p0_360 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_360;
typedef struct Block_p0_36c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_36c;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x24];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x18];
    int f90;
    char unknown94[0x2c0];
    float f354;
    float f358;
    float f35c;
    Block_p0_360 f360;
    Block_p0_36c f36c;
    int f378;
    float f37c;
    float f380;
    float f384;
    int f388;
};
extern char g_8c3123c8[];
void operation_8c129538(Object *o)
{
    o->f354 = o->f6c - 1.0f + 300.0f;
    o->f358 = o->f70 - 1.0f + 210.0f;
    o->f35c = o->f74 - 1.0f + 400.0f;
    o->f388 = (int)o->f90 + 4;
    *(Vector3 *)&o->f360 = *(Vector3 *)&o->f3c;
    o->f360.f04 += *(float *)(g_8c3123c8 + 0x4);
    *(Vector3 *)&o->f36c = *(Vector3 *)&o->f360;
    o->f36c.f04 += *(float *)(g_8c3123c8 + 0x4) * 1.25f;
    o->f378 = 0;
    o->f37c = 1.0f;
    o->f380 = 1.0f;
    o->f384 = 1.0f;
}
