/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e3730
 * function: operation_8c0e3730
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 56 of 70 reference instruction lines
 * differing bytes: 106
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
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x2ee];
    short f30a;
    short f30c;
    char unknown30e[0x82];
    short f390;
    short f392;
    int f394;
    int f398;
    float f39c;
    float f3a0;
    float f3a4;
    int f3a8;
    int f3ac;
    float f3b0;
    float f3b4;
    float f3b8;
    float f3bc;
    float f3c0;
};
extern void TObjEnemy_ctor_8c012008(void *);
Object *operation_8c0e3730(Object *o)
{
    TObjEnemy_ctor_8c012008((void *)o);
    o->dispatch = (void *)0x8c2677fc;
    o->f30a = 0;
    o->f30c = 0;
    o->f390 = 0;
    o->f392 = 0;
    o->f394 = 0;
    o->f398 = 0;
    o->f39c = 0.0f;
    o->f3a0 = 0.1f;
    o->f3a4 = -20.0f;
    o->f3a8 = 0;
    o->f3ac = 0;
    o->f3b4 = 0.8f;
    o->f3b8 = 0.4f;
    o->f3b0 = 0.8f;
    o->f3bc = 0.8f;
    o->f3c0 = 0.4f;
    return o;
}
