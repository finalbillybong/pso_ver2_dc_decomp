/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23cf68
 * function: TItemEffFireWand_ctor_8c23cf68
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 10 of 52 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg2 Arg2;
typedef struct Arg2_13c Arg2_13c;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Arg0_24 *f24;
    int f28;
};
struct Arg2 {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x50];
    Arg2_13c *f13c;
};
struct Frame {
    int f04;
    char unknown8[0x8];
};
extern int g_8c33a5bc;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void operation_8c075894(void *, void *, int, int);
extern int create_effect_769c(void *, int);
Object *TItemEffFireWand_ctor_8c23cf68(Object *o, int a1, Arg2 *a2, int a3, int a4)
{
    Frame frame;
    Object **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27a790;
    o->tag = (int)(g_8c33a5bc);
    o->size = 0x2c;
    o->f04 |= 0x10;
    o->f20 = (int)(a2->fe8);
    o->f24 = (Arg0_24 *)a3;
    operation_8c075894((void *)a2, (void *)(a2->f13c), (int)(o->f24), (int)(&(&frame)->f04));
    t1 = create_effect_769c((void *)(&(&frame)->f04), a4);
    o->f28 = (int)(t1);
    return o;
}
