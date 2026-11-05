/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c020444
 * function: operation_8c020444
 * language: c
 * reference size: 340 bytes
 * compiled size: 336 bytes (-1.2%)
 * differing lines: 74 of 105 reference instruction lines
 * differing bytes: 218
 * provenance: generator draft (mode ccastext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x318];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x2c];
    int f350;
    char unknown354[0x1c];
    int f370;
    char unknown374[0x18];
    int f38c;
    int f390;
    int f394;
    float f398;
    float f39c;
    float f3a0;
    char unknown3a4[0x164];
    int f508;
    char unknown50c[0x74];
    float f580;
    float f584;
    float f588;
    char unknown58c[0x34];
    int f5c0;
    int f5c4;
    int f5c8;
    char unknown5cc[0xe4];
    short f6b0;
    short f6b2;
    char unknown6b4[0x4];
    float f6b8;
    float f6bc;
    float f6c0;
    char unknown6c4[0x10];
    short f6d4;
    short f6d6;
    int f6d8;
    char unknown6dc[0x104];
    int f7e0;
};
void operation_8c020444(Object *o)
{
    o->f7e0 &= -3;
    o->f5c4 = 0;
    o->f5c0 = 0;
    o->f5c8 = 0;
    ((void (*)(void *))0x8c1aa7fc)(((char *)o + 0x754));
    o->f6b0 = 0;
    o->f6b2 = 0;
    o->f6b8 = 0.0f;
    o->f6c0 = 0.0f;
    o->f6bc = 0.0f;
    ((void (*)(void *))0x8c03bdb0)(((char *)o + 0x58c));
    o->f508 = 0;
    o->f6d8 = 0;
    o->f6d4 = 0;
    o->f6d6 = 0;
    o->f370 = 0;
    o->f350 &= -0x484;
    o->f394 = 0;
    o->f390 = 0;
    o->f38c = 0;
    o->f3a0 = 0.0f;
    o->f39c = 0.0f;
    o->f398 = 0.0f;
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    o->f580 = 0.0f;
    o->f584 = 0.0f;
    o->f588 = 0.0f;
}
