/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0905ac
 * function: operation_8c0905ac
 * language: c
 * reference size: 212 bytes
 * compiled size: 212 bytes (+0.0%)
 * differing lines: 28 of 82 reference instruction lines
 * differing bytes: 28
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
typedef struct Arg0_3dc Arg0_3dc;
typedef struct Arg3 Arg3;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0xa];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x374];
    Arg0_3dc *f3dc;
    int f3e0;
    int f3e4;
};
struct Arg3 {
    Vector3 f00;
};
struct Arg0_3dc {
    char unknown0[0x64];
    int f64;
};
extern int g_8c300a6c;
extern void call_8c05bcc0(Object *);
extern void initialize_object_8c114768(void *);
extern void operation_8c05a0b4(void *, void *);
extern void call_8c090ccc(Arg0_3dc *, void *);
extern void call_8c090680(Object *);
Object *operation_8c0905ac(Object *o, int a1, int a2, Arg3 *a3, unsigned short a4, int a5)
{
    Object **home = &o;
    (void)home;
    call_8c05bcc0(o);
    o->dispatch = (void *)0x8c265520;
    initialize_object_8c114768((void *)(((char *)o + 0x3e8)));
    o->tag = (int)(g_8c300a6c);
    o->size = 0x4e8;
    o->f3dc = (Arg0_3dc *)a2;
    operation_8c05a0b4((void *)o, (void *)(o->f3dc));
    o->f20 = a4;
    o->f30 = a5;
    call_8c090ccc((Arg0_3dc *)(o->f3dc), (void *)(&o->f3c));
    *(Vector3 *)&o->f3c = *(Vector3 *)&a3->f00;
    o->f64 = (int)(o->f3dc->f64);
    o->f3e4 = 0;
    o->f3e0 = 1;
    call_8c090680(o);
    return o;
}
