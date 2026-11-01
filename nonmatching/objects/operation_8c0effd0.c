/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0effd0
 * function: operation_8c0effd0
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 30 of 98 reference instruction lines
 * differing bytes: 41
 * provenance: generator draft (mode ccastext)
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
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Vector3 f20;
    Vector3 f2c;
    char unknown38[0x24];
    float f5c;
    int f60;
    int f64;
    int f68;
    int f6c;
};
struct Arg1 {
    Vector3 f00;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
    Vector3 f10;
};
extern Vector3 g_8c30903c;
extern S_g8c44be9c *g_8c44be9c;
Object *operation_8c0effd0(Object *o, Arg1 *a1, int a2, int a3, int a4)
{
    Frame frame;
    Object **home = &o;
    int t1;
    (void)home;
    ((void (*)(Object *, void *))0x8c0330e4)(o, g_8c44be9c);
    o->dispatch = (void *)0x8c268244;
    *(Vector3 *)&o->f20 = *(Vector3 *)&a1->f00;
    *(Vector3 *)&o->f2c = *(Vector3 *)&a1->f00;
    o->f5c = 0.0f;
    ((void (*)(void *))0x8c38ade4)((void *)0x8c400500);
    *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&g_8c30903c;
    ((void (*)(int, int))0x8c37df90)(0, a2);
    ((void (*)(int, void *, void *))0x8c3be38c)(0, &(&frame)->f10, ((char *)o + 0x38));
    ((void (*)(void))0x8c38ad10)();
    o->f68 = a3;
    (&frame)->f04 = 0;
    (&frame)->f08 = a2 + 0x4000;
    (&frame)->f0c = 0x4000;
    t1 = ((int (*)(Arg1 *, void *, int, int))0x8c0a78d0)(a1, &(&frame)->f04, 0x6d, 2);
    o->f60 = (int)(t1);
    o->f64 = 0;
    o->f6c = a4;
    return o;
}
