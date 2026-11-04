/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1cfc40
 * function: operation_8c1cfc40
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 12 of 103 reference instruction lines
 * differing bytes: 15
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    int f3c;
    char unknown40[0xc];
    float f4c;
    float f50;
    float f54;
    char unknown58[0x4];
    float f5c;
    float f60;
    char unknown64[0xc];
    Vector3 f70;
    float f7c;
    float f80;
    float f84;
    char unknown88[0x8];
    int f90;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_g8c46ee80 {
    char unknown0[0x9c];
    float f9c;
    float fa0;
    float fa4;
};
extern Vector3 g_8c289308;
extern S_g8c46ee80 *g_8c46ee80;
extern float njScalor_8c37e480(Frame *);
extern int operation_8c0a0f08(Object *);
void operation_8c1cfc40(Object *o)
{
    Frame frame;
    float t1;
    int t2;
    o->f3c = 0x15;
    o->f5c = 1.65f;
    (&frame)->f00 = g_8c46ee80->f9c - o->f4c;
    (&frame)->f04 = g_8c46ee80->fa0 - o->f50;
    (&frame)->f08 = g_8c46ee80->fa4 - o->f54;
    t1 = njScalor_8c37e480((&frame));
    o->f60 = t1 * 0.7f / 100.0f;
    t2 = operation_8c0a0f08(o);
    if (t2 != 0) {
        o->f90 |= 1;
    } else {
        o->f90 = (unsigned int)o->f90 >> 1 << 1;
    }
    o->f7c = 0.0f;
    o->f80 = 19.8f;
    o->f84 = -5.0f;
    *(Vector3 *)&o->f70 = *(Vector3 *)&g_8c289308;
}
