/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21e148
 * function: operation_8c21e148
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 30 of 86 reference instruction lines
 * differing bytes: 30
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
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_68 Arg0_68;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x14];
    Arg0_30 *f30;
    char unknown34[0x4];
    float f38;
    float f3c;
    char unknown40[0x28];
    Arg0_68 *f68;
    float f6c;
    float f70;
    int f74;
    int f78;
};
struct Arg2 {
    float f00;
    float f04;
};
struct Arg0_68 {
    char unknown0[0x48];
    float f48;
    float f4c;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void operation_8c0dc854(void *);
extern void operation_8c21e3c0(void *, int);
Object *operation_8c21e148(Object *o, int a1, Arg2 *a2, int a3, register int a4)
{
    Object **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c3367a4));
    o->dispatch = (void *)0x8c278660;
    o->f68 = (Arg0_68 *)a1;
    o->f6c = a2->f00;
    o->f70 = a2->f04;
    o->f74 = a3;
    o->f78 = a4;
    o->f38 = o->f68->f48 + o->f6c + (float)o->f74 * 16.0f;
    o->f3c = o->f68->f4c + o->f70;
    operation_8c0dc854((void *)o);
    operation_8c21e3c0((void *)(o->f30->f00), a4);
    return o;
}
