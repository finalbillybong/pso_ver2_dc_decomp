/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a4f88
 * function: operation_8c0a4f88
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 8 of 65 reference instruction lines
 * differing bytes: 14
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
    char unknown1c[0x20];
    int f3c;
    char unknown40[0x30];
    float f70;
    float f74;
    float f78;
    float f7c;
    float f80;
    float f84;
    int f88;
    int f8c;
    int f90;
    int f94;
    int f98;
    char f9c;
    char f9d;
    short f9e;
    float fa0;
    float fa4;
};
extern int g_8c46f0c0;
extern int g_8c46f0c4;
extern void initialize_follow_base(void *);
Object *operation_8c0a4f88(Object *o)
{
    initialize_follow_base((void *)o);
    o->dispatch = (void *)0x8c265bb8;
    o->f3c = 0;
    g_8c46f0c4 = 0;
    g_8c46f0c0 = 0;
    o->f9d = 0;
    o->f9c = 0;
    o->f9e = 0;
    o->fa0 = 0.0f;
    o->fa4 = 0.0f;
    o->f70 = 0.0f;
    o->f74 = 0.0f;
    o->f78 = 0.0f;
    o->f7c = 0.0f;
    o->f80 = 0.0f;
    o->f84 = 0.0f;
    o->f88 = 0;
    o->f8c = 0;
    o->f90 = 0;
    o->f94 = 0;
    o->f98 = 0;
    return o;
}
