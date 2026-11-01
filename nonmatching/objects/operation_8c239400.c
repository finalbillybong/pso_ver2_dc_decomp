/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c239400
 * function: operation_8c239400
 * language: c
 * reference size: 168 bytes
 * compiled size: 188 bytes (+11.9%)
 * differing lines: 106 of 79 reference instruction lines
 * differing bytes: 163
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float dispatch;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
};
extern void operation_2395d0(void *);
extern void operation_2394dc(void *);
Object *operation_8c239400(Object *o)
{
    o->f08 = 0.0f;
    o->f0c = 0.0f;
    o->f10 = 1.0f;
    o->f14 = 1.0f;
    o->dispatch = 0.0f;
    o->f1c = 0.0f;
    o->f20 = 1.0f;
    o->f24 = 1.0f;
    o->f28 = 0.0f;
    o->f2c = 0.0f;
    o->f30 = 1.0f;
    o->f34 = 1.0f;
    o->f38 = 0.0f;
    o->f3c = 0.0f;
    o->f40 = 1.0f;
    o->f44 = 1.0f;
    o->f48 = 0.0f;
    o->f4c = 0.0f;
    o->f50 = 1.0f;
    o->f54 = 1.0f;
    operation_2395d0((void *)(((char *)o + 0x58)));
    o->f04 = 0;
    operation_2394dc((void *)o);
    return o;
}
