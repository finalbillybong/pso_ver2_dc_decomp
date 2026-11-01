/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1886f0
 * function: operation_8c1886f0
 * language: c
 * reference size: 492 bytes
 * compiled size: 492 bytes (+0.0%)
 * differing lines: 76 of 202 reference instruction lines
 * differing bytes: 30
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Rec {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
} Rec;
typedef struct Model {
    char unknown0[0x80];
    short f80;
    char unknown82[0xe];
    void *f90;
} Model;
typedef struct Owner {
    char unknown0[0xb0];
    int fb0;
} Owner;
typedef struct World {
    char unknown0[0xbc8];
    void *fbc8;
} World;
typedef struct Object {
    char unknown0[0x28];
    World *f28;
    Model *f2c;
    char unknown30[0xc];
    void *f3c;
    void *f40;
    char unknown44[0x4];
    int f48;
    char unknown4c[0xc];
    Rec f58[1];
} Object;
extern void *g_8c4d97e0;
extern Owner **g_8c4dbc20;
extern int g_8c4dc288;
extern Rec g_8c4dc120[];
extern int operation_8c1c7e08(Rec *);
extern Model *operation_8c19fb24(int, int);
extern void operation_8c1cdc94(Model *);
extern void operation_8c1cd674(Model *, Rec *, int);
extern void operation_8c1cdc30(Model *);
extern void operation_8c19a044(void *, int);
extern void operation_8c1cdd08(Model *);
extern void *heap_alloc_8c122700(void *, unsigned int);
extern void TWindowHelpItem_ctor_8c1d5b24(void *);
extern void operation_8c1d5dfc(void *, Rec *);
extern void TWindowQuantity_ctor_8c1ca088(void *);
extern int operation_8c16a50c(void *, Rec *);
extern void operation_8c1ca234(void *, int);
void operation_8c1886f0(Object *o)
{
    Rec frame;
    int k;
    int i;
    Rec *p;
    char *q;
    int off;
    int m1;
    Model *m;
    void *t;
    o->f48 = g_8c4dc288;
    q = (char *)o + 0x58;
    for (k = 0; k < o->f48; k++) {
        off = k * 0x14;
        frame = *(Rec *)((char *)g_8c4dc120 + off);
        *(Rec *)(q + off) = frame;
    }
    p = o->f58;
    i = 0;
    m1 = -1;
    for (; i < o->f48; i++, p++) {
        if (p->f10 != m1) {
            p->f10 = p ? operation_8c1c7e08(p) : 0;
        }
    }
    if (o->f2c == 0) {
        o->f2c = operation_8c19fb24((*g_8c4dbc20)->fb0, o->f48);
    } else {
        operation_8c1cdc94(o->f2c);
    }
    if (o->f2c != 0) {
        i = 0;
        m1 = -1;
        for (; i < o->f48; i++) {
            off = i * 0x14;
            if (*(int *)((char *)(int *)((char *)o + 0x68) + off) != m1) {
                operation_8c1cd674(o->f2c, (Rec *)((char *)o + off + 0x58), i);
            }
        }
        operation_8c1cdc30(o->f2c);
        m = o->f2c;
        m->f80 = (m->f80 & 0xffff) & -3;
        if (m->f90 != 0) {
            operation_8c19a044(m->f90, 1);
        }
        operation_8c1cdd08(o->f2c);
    }
    if (o->f3c == 0) {
        t = heap_alloc_8c122700(g_8c4d97e0, 0xb8);
        if (t != 0) {
            TWindowHelpItem_ctor_8c1d5b24(t);
        }
        o->f3c = t;
        operation_8c1d5dfc(o->f3c, o->f58);
    }
    if (o->f40 == 0) {
        t = heap_alloc_8c122700(g_8c4d97e0, 0x6c);
        if (t != 0) {
            TWindowQuantity_ctor_8c1ca088(t);
        }
        o->f40 = t;
        operation_8c1ca234(o->f40, operation_8c16a50c(o->f28->fbc8, o->f58));
    }
}
