/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b3178
 * function: TTecGrants_ctor_8c0b3178
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 12 of 96 reference instruction lines
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
typedef struct Block_c8c122700_108 {
    int f00;
    char unknown4[0x58];
} Block_c8c122700_108;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    S_c8c122700_20 *f20;
    char unknown24[0x58];
    short f7c;
    char unknown7e[0x2];
    int f80;
    char unknown84[0x4c];
    short fd0;
    char unknownd2[0x36];
    Block_c8c122700_108 f108;
    int f164;
};
struct Arg2 {
    Block92 f00;
};
struct S_c8c122700_20 {
    char unknown0[0x20];
    short f20;
};
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c0ad660(void *, int, void *, int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void initialize_effect9_template(void *);
extern int call_8c18e768(int, int);
void TTecGrants_ctor_8c0b3178(int a0, int a1, Arg2 *a2, int a3)
{
    S_c8c122700 *t1;
    int t2;
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x168);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c0ad660((void *)t1, a0, (void *)a1, a3);
        self->f18 = (void *)0x8c265f60;
        call_8c18e044((void *)(((char *)self + 0x10c)), (void *)((void *)0x8c07de9c), 0, 8, 0xb);
        self->f108.f00 = 0;
        self->f00 = (int)(*(int *)0x8c3051e8);
        self->f1e = 0x168;
        initialize_effect9_template((void *)self);
        *(Block92 *)&self->f108 = *(Block92 *)&a2->f00;
        self->f164 = 0;
        {
            S_c8c122700 *base = self;
            t2 = call_8c18e768((int)(base->f7c), 5);
            base->f80 = (int)(t2);
            if (self->f20 != 0) {
                self->fd0 = self->f20->f20;
            }
        }
    }
}
