/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c014e3c
 * function: operation_8c014e3c
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 20 of 51 reference instruction lines
 * differing bytes: 23
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
typedef struct Object Object;
struct Object {
    int tag;
    int f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float dispatch;
    char unknown1c[0x4];
    float f20;
    float f24;
    float f28;
};
extern void operation_8c014edc(Object *);
extern void operation_8c014ef8(Object *);
extern void operation_8c014f58(Object *);
Object *operation_8c014e3c(Object *o, int a1)
{
    o->tag = (int)(*(int *)((char *)0x8c2e2e78 + (a1 << 2)));
    o->f04 = 1;
    o->f10 = 0.0f;
    o->f0c = 0.0f;
    o->f08 = 0.0f;
    operation_8c014edc(o);
    o->f14 = 5.0f;
    o->dispatch = 30.0f;
    operation_8c014ef8(o);
    o->f20 = 1.0f;
    o->f24 = 1.0f;
    o->f28 = 1.0f;
    operation_8c014f58(o);
    return o;
}
