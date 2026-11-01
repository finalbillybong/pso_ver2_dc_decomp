/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ca23c
 * function: operation_8c1ca23c
 * language: c
 * reference size: 424 bytes
 * compiled size: 424 bytes (+0.0%)
 * differing lines: 26 of 159 reference instruction lines
 * differing bytes: 45
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct S_g8c467180_44_20 S_g8c467180_44_20;
typedef struct S_g8c467180_44_24 S_g8c467180_44_24;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    char f28;
    char unknown29[0x2];
    char f2b;
    Arg0_2c *f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    char unknown48[0x10];
    void *f58;
    void *f5c;
    int f60;
};
struct Frame {
    Block8 f04;
    Block8 f0c;
};
struct S_g8c467180 {
    char unknown0[0x44];
    S_g8c467180_44 *f44;
};
struct S_g8c467180_44 {
    char unknown0[0x20];
    S_g8c467180_44_20 *f20;
    S_g8c467180_44_24 *f24;
};
struct Arg0_2c {
    char unknown0[0x5c];
    float f5c;
};
extern Block8 g_8c328fb0;
extern Block8 g_8c328fb8;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c467180 *g_8c467180;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c4e2ce0;
extern int g_8c4e2e24;
extern char g_8c3290d0[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern void operation_8c01c250(int);
extern int create_fitted_pair_grid_view(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TAdTitle_ctor_8c199688(int, Object *, int);
extern void TAdBack_ctor_8c198294(void *, int);
extern void call_8c19a700(int, Object *);
extern void call_8c1c2af8(int, Object *);
extern void TAdGuideButton_create_8c1afd58(int, int, int, float);
extern void set_global_8c1b0324(void);
extern void call_8c1003d0(void *);
extern void TAdDrawLineCtrl_create_8c227b34(int, int, float);
Object *operation_8c1ca23c(Object *o)
{
    Frame frame;
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c276838;
    o->f34 = 0;
    o->f30 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f40 = 0;
    o->f44 = 0;
    g_8c4e2e24 = 0;
    o->f28 = 0;
    o->f2b = g_8c4e2ce0;
    o->f58 = (void *)g_8c3290d0;
    o->f5c = (void *)g_8c3290d0;
    o->f20 = 0;
    o->f24 = 0;
    o->f60 = 0;
    operation_8c01c250(2);
    *(Block8 *)&(&frame)->f0c = *(Block8 *)&g_8c328fb0;
    *(Block8 *)&(&frame)->f04 = *(Block8 *)&g_8c328fb8;
    t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f0c), (void *)(&(&frame)->f04));
    o->f2c = (Arg0_2c *)t1;
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xac);
    if (t2 != 0) {
        TAdTitle_ctor_8c199688(t2, o, 2);
    }
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
    if (t3 != 0) {
        TAdBack_ctor_8c198294((void *)t3, (int)o);
    }
    t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x88);
    if (t4 != 0) {
        call_8c19a700(t4, o);
    }
    t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x238);
    if (t5 != 0) {
        call_8c1c2af8(t5, o);
    }
    TAdGuideButton_create_8c1afd58((int)o, (int)(g_8c467180->f44->f20), (int)(g_8c467180->f44->f24), -1.0f / (o->f2c->f5c + 0.1495f));
    set_global_8c1b0324();
    call_8c1003d0((void *)((g_8c3290d0 + 0x1)));
    TAdDrawLineCtrl_create_8c227b34((int)o, 4, 0.0f);
    TAdDrawLineCtrl_create_8c227b34((int)o, 6, 0.0f);
    return o;
}
