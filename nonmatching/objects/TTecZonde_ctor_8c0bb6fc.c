/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bb6fc
 * function: TTecZonde_ctor_8c0bb6fc
 * language: c
 * reference size: 248 bytes
 * compiled size: 248 bytes (+0.0%)
 * differing lines: 12 of 93 reference instruction lines
 * differing bytes: 13
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
typedef struct Block92 {
    int words[23];
} Block92;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_20 S_c8c122700_20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg2 Arg2;
typedef struct Block_c8c122700_14c {
    int f00;
    char unknown4[0x58];
} Block_c8c122700_14c;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    S_c8c122700_20 *f20;
    char unknown24[0xa4];
    short fc8;
    char unknownca[0x2];
    int fcc;
    short fd0;
    char unknownd2[0x7a];
    Block_c8c122700_14c f14c;
};
struct Arg2 {
    Block92 f00;
};
struct S_c8c122700_20 {
    char unknown0[0x20];
    short f20;
};
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void call_8c0b9730(S_c8c122700 *, int, int, int, int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void initialize_effect6_template(void *);
extern int call_8c18e768(int, int);
void TTecZonde_ctor_8c0bb6fc(int a0, int a1, Arg2 *a2, int a3)
{
    S_c8c122700 *t1;
    int t2;
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x1a8);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c0b9730(t1, a0, a1, 0, a3);
        self->f18 = (void *)0x8c2662a8;
        call_8c18e044((void *)(((char *)self + 0x150)), (void *)((void *)0x8c07de9c), 0, 8, 0xb);
        self->f14c.f00 = 0;
        self->f00 = (int)(*(int *)0x8c305920);
        self->f1e = 0x1a8;
        initialize_effect6_template((void *)self);
        *(Block92 *)&self->f14c = *(Block92 *)&a2->f00;
        {
            S_c8c122700 *base = self;
            t2 = call_8c18e768((int)(base->fc8), 5);
            base->fcc = (int)(t2);
            if (self->f20 != 0) {
                self->fd0 = self->f20->f20;
            }
        }
    }
}
