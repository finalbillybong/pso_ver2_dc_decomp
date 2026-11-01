/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0de834
 * function: TWindowFukidasi_ctor_8c0de834
 * language: c
 * reference size: 396 bytes
 * compiled size: 396 bytes (+0.0%)
 * differing lines: 38 of 147 reference instruction lines
 * differing bytes: 42
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
typedef struct S_g8c4e2ba4 S_g8c4e2ba4;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    char unknown48[0x8];
    float f50;
    float f54;
    char unknown58[0x28];
    char f80;
    unsigned char f81;
    char f82;
    char f83;
    char unknown84[0x2];
    short f86;
    Arg0_88 *f88;
    float f8c;
    float f90;
    char unknown94[0x4];
    float f98;
    float f9c;
};
extern int g_8c3074b0;
extern S_g8c4e2ba4 *g_8c4e2ba4;
extern void initialize_alternate_grid_view(void *, void *, void *);
extern int operation_8c257e3c(int, unsigned int);
extern int operator_new_8c18de4c(int);
extern void strncpy_8c12b154(void *, int, int);
extern void operation_8c0df9f8(void *, int);
extern void call_8c0e0060(Object *, int, void *);
extern void operation_8c0e0f6c(Object *);
Object *TWindowFukidasi_ctor_8c0de834(Object *o, int a1, int a2, float f0)
{
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    initialize_alternate_grid_view((void *)o, (void *)((void *)0x8c3074d8), g_8c4e2ba4);
    o->dispatch = (void *)0x8c267748;
    o->tag = (int)(g_8c3074b0);
    o->size = 0xa8;
    o->f80 = 0;
    o->f81 = 0;
    o->f82 = 2;
    o->f83 = -1;
    o->f86 = a1;
    if (a2 != 0) {
        t1 = operation_8c257e3c(a2, (unsigned int)0x18);
        t2 = operator_new_8c18de4c((int)(t1 + 1));
        o->f88 = (Arg0_88 *)t2;
        strncpy_8c12b154((void *)(o->f88), a2, (int)(t1 + 1));
    } else {
        o->f88 = (Arg0_88 *)0;
    }
    operation_8c0df9f8((void *)o, a1);
    o->f90 = 0.0f;
    o->f8c = f0;
    call_8c0e0060(o, 0, (void *)(((char *)o + 0xa0)));
    operation_8c0e0f6c(o);
    o->f50 = 0.0f;
    o->f54 = 0.0f;
    o->f98 = o->f38 + o->f40 * 0.5f;
    o->f9c = o->f3c + o->f44 * 0.5f;
    o->f81 &= -5;
    o->f34 &= -0x101;
    return o;
}
