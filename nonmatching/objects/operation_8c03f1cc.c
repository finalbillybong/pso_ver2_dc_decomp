/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03f1cc
 * function: operation_8c03f1cc
 * language: c
 * reference size: 284 bytes
 * compiled size: 284 bytes (+0.0%)
 * differing lines: 6 of 105 reference instruction lines
 * differing bytes: 8
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
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    char unknown28[0x1];
    char f29;
    char unknown2a[0x2];
    int f2c;
    char unknown30[0x4];
    int f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
};
extern S_g8c44be84 *g_8c44be84;
extern S_g8c44be88 *g_8c44be88;
extern char g_8c466dc2;
extern int g_8c466de4;
extern int g_8c466df4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c2efd40[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern void operation_8c03f700(void *);
extern unsigned char operation_8c03f6e4(Object *);
extern void operation_8c01c250(int);
extern void call_8c1003d0(void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void initialize_color_fall(int, void *, void *);
extern void TItemReverseTechCtrl_ctor_8c25c710(void *, int);
extern void operation_8c03f400();
Object *operation_8c03f1cc(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c261bb8;
    o->f20 = 0;
    g_8c466df4 = 0;
    g_8c466dc2 = 0;
    o->f24 = 0;
    o->f29 = 0;
    o->f2c = 0;
    g_8c466de4 = 0;
    o->f38 = 1.0f;
    o->f3c = 0.0f;
    o->f40 = 0.0f;
    o->f44 = 0.0f;
    o->f48 = 1.0f;
    o->f4c = 0.0f;
    o->f50 = 0.0f;
    o->f54 = 0.0f;
    operation_8c03f700((void *)o);
    t1 = operation_8c03f6e4(o);
    o->f34 = t1;
    operation_8c01c250(0);
    call_8c1003d0((void *)((g_8c2efd40 + 0xb9)));
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
    if (t2 != 0) {
        initialize_color_fall(t2, g_8c44be84, operation_8c03f400);
    }
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x24);
    if (t3 != 0) {
        TItemReverseTechCtrl_ctor_8c25c710((void *)t3, (int)o);
    }
    o->f58 = (int)(t3);
    return o;
}
