/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1aa558
 * function: operation_8c1aa558
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 8 of 56 reference instruction lines
 * differing bytes: 8
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
typedef struct S_g8c4d7ce4 S_g8c4d7ce4;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Vector3 f20;
    int f2c;
    int f30;
    short f34;
    char unknown36[0x2];
    int f38;
    int f3c;
};
struct Arg1 {
    Vector3 f00;
};
extern S_g8c4d7ce4 *g_8c4d7ce4;
extern char g_8c324e74[];
extern void TObject_ctor_8c0330e4(Object *, int);
extern void operation_8c10bac8(void);
extern void create_file_read_task(void *, void *, void *, int);
Object *operation_8c1aa558(Object *o, Arg1 *a1, int a2, int a3, int a4, int a5, int a6)
{
    Object **home = &o;
    (void)home;
    TObject_ctor_8c0330e4(o, a6);
    o->dispatch = (void *)0x8c2746d0;
    *(Vector3 *)&o->f20 = *(Vector3 *)&a1->f00;
    o->f2c = a2;
    o->f34 = a3;
    o->f38 = a4;
    o->f30 = 0;
    o->f3c = a5;
    operation_8c10bac8();
    create_file_read_task((g_8c324e74 + 0xe), g_8c4d7ce4, &o->f30, 0);
    return o;
}
