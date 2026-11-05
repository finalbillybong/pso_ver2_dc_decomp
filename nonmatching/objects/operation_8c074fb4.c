/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c074fb4
 * function: operation_8c074fb4
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 12 of 103 reference instruction lines
 * differing bytes: 11
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Frame {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
    char unknown3[0x11];
};
struct Object {
    char unknown0[0xe6];
    unsigned short fe6;
    char unknowne8[0x48];
    int f130;
    unsigned char f134;
    char unknown135[0x1];
    unsigned char f136;
    char unknown137[0x1];
    unsigned char f138;
    char unknown139[0x3];
    Arg0_13c *f13c;
};
struct Arg0_13c {
    char unknown0[0x3b0];
    int f3b0;
};
void operation_8c074fb4(Object *o, int a1)
{
    Frame frame;
    int v1;
    if ((&frame) != 0) {
        v1 = (int)(o->f130 ^ (int)(&o->f130));
        (&frame)->f02 = v1 & 0xff;
        v1 = (int)((unsigned int)v1 >> 8);
        (&frame)->f01 = v1 & 0xff;
        v1 = (int)((unsigned int)v1 >> 8);
        (&frame)->f00 = v1 & 0xff;
    }
    if (o->f134 == (&frame)->f00 && o->f136 == (&frame)->f01 && o->f138 == (&frame)->f02) {
        o->f138 = a1;
        o->f130 = o->f134;
        o->f130 = o->f130 << 8;
        o->f130 |= o->f136;
        o->f130 = o->f130 << 8;
        o->f130 |= o->f138;
        o->f130 ^= (int)(&o->f130);
    } else {
        if ((o->fe6 & 0xffff) == *(int *)0x8c418248) {
            o->f13c->f3b0 |= 0x10;
        }
    }
}
