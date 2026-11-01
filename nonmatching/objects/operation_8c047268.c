/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c047268
 * function: operation_8c047268
 * language: c
 * reference size: 464 bytes
 * compiled size: 456 bytes (-1.7%)
 * differing lines: 72 of 179 reference instruction lines
 * differing bytes: 388
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x16a];
    short f1a2;
    short f1a4;
    short f1a6;
    short f1a8;
    short f1aa;
    short f1ac;
    short f1ae;
    short f1b0;
    char unknown1b2[0x10e];
    int f2c0;
    float f2c4;
    int f2c8;
    int f2cc;
    float f2d0;
    int f2d4;
    int f2d8;
    float f2dc;
    int f2e0;
    int f2e4;
    float f2e8;
    int f2ec;
    int f2f0;
    float f2f4;
    int f2f8;
    char unknown2fc[0x50];
    int f34c;
};
void operation_8c047268(Object *o)
{
    unsigned short v3;
    switch (o->f2c0) {
    case 16:
        o->f1ae += (int)((float)o->f1a6 * -o->f2c4);
    }
    switch (o->f2cc) {
    case 2:
        o->f1ae += (int)((float)o->f1a6 * -o->f2d0);
        break;
    case 3:
        v3 = (unsigned short)o->f20;
        if (v3 >= (unsigned int)0x1000) {
            o->f1ae += (int)((float)o->f1a6 * -o->f2d0);
        }
    }
    o->f34 &= -0x40;
    o->f34c = o->f34 & 0x3f;
    o->f2c0 = 0;
    o->f2c4 = 0.0f;
    o->f2c8 = 0;
    o->f2cc = 0;
    o->f2d0 = 0.0f;
    o->f2d4 = 0;
    o->f1aa += (int)(-o->f2dc * (float)o->f1a2);
    o->f1ac += (int)((float)o->f1a4 * -o->f2dc);
    o->f2d8 = 0;
    o->f2dc = 0.0f;
    o->f2e0 = 0;
    o->f1b0 += (int)((float)o->f1a8 * -o->f2e8);
    o->f2e4 = 0;
    o->f2e8 = 0.0f;
    o->f2ec = 0;
    o->f34 &= -0x4001;
    o->f2f0 = 0;
    o->f2f4 = 0.0f;
    o->f2f8 = 0;
}
