/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c061170
 * function: operation_8c061170
 * language: c
 * reference size: 352 bytes
 * compiled size: 348 bytes (-1.1%)
 * differing lines: 86 of 143 reference instruction lines
 * differing bytes: 252
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x368];
    float f3b0;
    char unknown3b4[0x4];
    float f3b8;
    char unknown3bc[0x54];
    float f410;
    char unknown414[0x4];
    float f418;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern float normalize_xz_checked(void *);
extern float object_random_fraction(void *);
extern void rotate_scalar_pair(void *, void *, int);
extern float operation_8c05b8e8(int, float, float);
extern S_c8c011214 *operation_8c011214(int, int, int);
void operation_8c061170(Object *o)
{
    Frame frame;
    float v1;
    float v2;
    float t1;
    S_c8c011214 *t2;
    float t3;
    float t4;
    (&frame)->f00 = o->f3c - o->f410;
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = o->f44 - o->f418;
    normalize_xz_checked((void *)(&frame));
    t1 = object_random_fraction((void *)o);
    rotate_scalar_pair((void *)(&frame), (void *)(&(&frame)->f08), (int)((int)(t1 * 32768.0f) + 0x4000));
    t3 = operation_8c05b8e8((int)o, 0.3f, 1.0f);
    v1 = (float)(t3 * 120.0f);
    o->f3b0 = (&frame)->f00 * v1 + o->f410;
    o->f3b8 = (&frame)->f08 * v1 + o->f418;
    t2 = operation_8c011214((int)(((char *)o + 0x324)), (int)(&o->f3b0), 0x400008e0);
    if (t2 != 0) {
        (&frame)->f00 = t2->f04->f00 - o->f3c;
        (&frame)->f08 = t2->f04->f08 - o->f44;
        t4 = normalize_xz_checked((void *)(&frame));
        v2 = (float)(t4 - 25.0f);
        o->f3b0 = (&frame)->f00 * v2 + o->f3c;
        o->f3b8 = (&frame)->f08 * v2 + o->f44;
    }
}
