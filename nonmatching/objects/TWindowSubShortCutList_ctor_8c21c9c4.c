/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21c9c4
 * function: TWindowSubShortCutList_ctor_8c21c9c4
 * language: c
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 6 of 91 reference instruction lines
 * differing bytes: 22
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
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x60];
    unsigned short f80;
    char unknown82[0x16];
    int f98;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x234];
    int f234;
};
extern int g_8c3364c0;
extern S_g8c467180 *g_8c467180;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c1cd008(void *, void *, int);
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void initialize_grid_panel_8c1ccd24(void *, int);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
extern void operation_8c1cd38c(void *, int);
extern int game_malloc_8c011ecc(int);
extern void operation_192b14(void *, signed char, signed char);
extern void call_8c21cac8(S_c8c122700 *);
extern void operation_8c1cd440(void *, int);
S_c8c122700 *TWindowSubShortCutList_ctor_8c21c9c4(int a0, int a1)
{
    int t3;
    S_c8c122700 *t1;
    int t2;
    operation_8c1cd008((void *)a0, (void *)((void *)0x8c2e1830), 4);
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x9c);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_grid_panel_8c1ccd24((void *)t1, 4);
        self->f18 = (void *)0x8c2785d0;
        self->f00 = (int)(g_8c3364c0);
        self->f1e = 0x9c;
        t3 = call_8c18e768(a1, 4);
        a1 = call_8c18e8a0(a1, 4);
        operation_8c1cd38c((void *)self, (int)(g_8c467180->f2c->f234));
        t2 = game_malloc_8c011ecc(8);
        if (t2 != 0) {
            operation_192b14((void *)t2, (signed char)t3, (signed char)5);
        }
        self->f98 = (int)(t2);
        self->f80 = (self->f80 & 0xffff) | 0x10;
        call_8c21cac8(self);
        operation_8c1cd440((void *)self, a1);
    }
    return t1;
}
