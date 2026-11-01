/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fa8ec
 * function: operation_8c0fa8ec
 * language: c
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 8 of 55 reference instruction lines
 * differing bytes: 13
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
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_3a8 Arg0_3a8;
struct Object {
    char unknown0[0x3a4];
    Arg0_3a4 *f3a4;
    Arg0_3a8 *f3a8;
    char unknown3ac[0x10];
    float f3bc;
    float f3c0;
    float f3c4;
    float f3c8;
    float f3cc;
    char unknown3d0[0x34];
    int f404;
    int f408;
};
struct Arg0_3a8 {
    char unknown0[0x18];
    int f18;
};
extern int create_effect_769c(void *, int);
extern void call_8c0ffdf0(void *, int);
void operation_8c0fa8ec(Object *o)
{
    int t1;
    t1 = create_effect_769c((void *)(((char *)o + 0x3c)), 0xe1);
    o->f404 = (int)(t1);
    o->f3c0 = -2.5f;
    o->f3cc = 0.0f;
    o->f3c8 = 0.0f;
    o->f3c4 = 0.0f;
    o->f3bc = 0.0f;
    call_8c0ffdf0((void *)(o->f3a4), 7);
    o->f3a8->f18 &= -0x14001ad1;
    o->f3a8->f18 |= 0x14000a50;
    o->f408 = 0;
}
