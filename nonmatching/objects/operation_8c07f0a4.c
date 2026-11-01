/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07f0a4
 * function: operation_8c07f0a4
 * language: c
 * reference size: 1332 bytes
 * compiled size: 1332 bytes (+0.0%)
 * differing lines: 308 of 542 reference instruction lines
 * differing bytes: 301
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Blk16 {
    int a[4];
} Blk16;
typedef struct Rec8 {
    short a[4];
} Rec8;
typedef struct Info {
    int f00;
    unsigned int f04;
} Info;
typedef struct Unit {
    char unknown0[0x28];
    int f28;
    Info *f2c;
    int f30;
    char unknown34[0x40];
    int f74;
    int f78;
    int f7c;
    char unknown80[0x4];
    float f84;
    float f88;
    char unknown8c[0x30];
    Blk16 fbc;
    char unknowncc[0x4];
    Rec8 fd0;
    Rec8 fd8;
} Unit;
typedef struct Owner {
    char unknown0[0x81c];
    short f81c;
    short f81e;
} Owner;
typedef struct Res {
    int f00;
    int f04;
    char unknown8[0x8];
    int f10;
    int f14;
} Res;
typedef struct Tables {
    char unknown0[0x4];
    char *f04;
    Rec8 *f08;
    char *f0c;
    Blk16 *f10;
} Tables;
typedef struct Game {
    char unknown0[0x4];
    Tables *f04;
} Game;
typedef struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0xb0];
    int fec;
    char unknownf0[0x46];
    unsigned char f136;
    char unknown137[0x5];
    Owner *f13c;
    char unknown140[0x84];
    int f1c4;
    int f1c8;
    char unknown1cc[0x8];
    int f1d4;
    int f1d8;
    char unknown1dc[0x16];
    unsigned char f1f2;
    char unknown1f3[0x1];
    Unit *f1f4[2];
    char *f1fc[2];
} Object;
extern void *g_8c44be9c;
extern Game *g_8c469b60;
extern char **g_8c469b64;
extern void *g_8c4d97e0;
extern Res *operation_8c1931b0(int);
extern int call_8c16337c(Owner *, int);
extern int rand(void);
extern int operation_8c07f690(Object *);
extern Unit *heap_alloc_8c122700(void *, unsigned int);
extern void TItemMagSub_ctor_8c1f1d38(Unit *, Owner *, Object *);
extern void call_8c1f2980(Unit *, int);
extern void TItemMagGrowEff_ctor_8c1f2a78(Unit *, void *, Unit *);
static inline void set_unit(int x, Unit *q, int y, Info *z)
{
    q->f28 = x;
    q->f30 = y;
    q->f2c = z;
    if (q->f2c != 0) {
        q->f84 = 0.0f;
        q->f88 = (float)q->f2c->f04 - 1.0f;
    }
}
void operation_8c07f0a4(Object *o)
{
    Res *r;
    unsigned char k;
    int m1;
    int kc;
    int n;
    int i;
    int off;
    int k1;
    int c;
    Unit *e;
    Unit *q;
    Tables *t;
    Blk16 *b;
    int c0;
    int v;
    char *p;
    Rec8 *tab;
    char none;

    r = operation_8c1931b0(o->f1c4);
    if (r != 0) {
        o->f38 = r->f00;
        o->f28 = r->f10;
        o->f1c8 = r->f14;
        o->f1d4 = r->f04;
    } else {
        o->f38 = 0;
        o->f28 = 0;
        o->f1c8 = 0;
        o->f1d4 = 0;
    }
    k = o->f136;
    if (k >= 0x39) k = 0x39;
    if (o->f1f2 > 9) {
        if (call_8c16337c(o->f13c, 0xd7) != 0) {
            o->f1f2 = o->f13c->f81e;
        } else {
            o->f1f2 = o->f13c->f81c;
        }
        if (o->f1f2 > 7) {
            o->f1f2 = (float)rand() / 32768.0f * 10.0f;
        }
    }
    c = k;
    kc = c * 0xc;
    k1 = 0x1f4;
    for (i = 0; i != 2; i++) {
        n = operation_8c07f690(o);
        off = i << 2;
        *(char **)((char *)o->f1fc + off) = *(char **)((char *)g_8c469b64 + (n << 2));
        *(char **)((char *)o->f1fc + off) += kc + i * 6;
        c0 = **(char **)((char *)o->f1fc + off);
        m1 = -1;
        if (c0 == m1) continue;
        e = heap_alloc_8c122700(g_8c4d97e0, 0xec);
        if (e != 0) TItemMagSub_ctor_8c1f1d38(e, o->f13c, o);
        *(Unit **)((char *)o + k1 + off) = e;
        if (*(Unit **)((char *)o + k1 + off) == 0) continue;
        call_8c1f2980(*(Unit **)((char *)o + k1 + off), c0);
        if (i == 1 && (v = o->f1d4) != 0) {
            set_unit(v, *(Unit **)((char *)o + k1 + off), o->f28, (Info *)o->f1c8);
        } else {
            set_unit(o->f38, *(Unit **)((char *)o + k1 + off), o->f28, (Info *)o->f1c8);
        }
        t = g_8c469b60->f04;
        b = (Blk16 *)((char *)t->f10 + ((unsigned char)o->f1f2 << 4));
        (*(Unit **)((char *)o + k1 + off))->f74 = t->f0c[c];
        if (b != 0) (*(Unit **)((char *)o + k1 + off))->fbc = *b;
        switch (c) {
        case 0xe:
            (*(Unit **)((char *)o + k1 + off))->f78 = 2;
            (*(Unit **)((char *)o + k1 + off))->f7c = 4;
            break;
        case 0x13:
            (*(Unit **)((char *)o + k1 + off))->f78 = 3;
            break;
        case 0x15:
            (*(Unit **)((char *)o + k1 + off))->f78 = 3;
            break;
        case 0x1e:
            (*(Unit **)((char *)o + k1 + off))->f78 = 3;
            (*(Unit **)((char *)o + k1 + off))->f7c = 5;
            break;
        case 0x25:
            (*(Unit **)((char *)o + k1 + off))->f78 = 3;
            break;
        }
    }
    k1 = 0x1f4;
    t = g_8c469b60->f04;
    p = t->f04 + (c << 1);
    tab = t->f08;
    c = -0x20;
    for (i = 0; i != 2; i++) {
        off = i << 2;
        q = *(Unit **)((char *)o + k1 + off);
        if (q == 0) continue;
        if (o->f1d4 != 0) {
            none = -1;
            if (p[1] != none) {
                if (i == 0) {
                    if (p[0] != none) {
                        q->fd0 = *(Rec8 *)((char *)tab + (p[0] << 3));
                    } else {
                        *(char *)&q->fd0 = c;
                    }
                    *(char *)&(*(Unit **)((char *)o + k1 + off))->fd8 = c;
                } else {
                    q->fd0 = *(Rec8 *)((char *)tab + (p[1] << 3));
                    *(char *)&(*(Unit **)((char *)o + k1 + off))->fd8 = c;
                }
                goto spawn;
            }
        }
        none = -1;
        if (p[0] != none) {
            q->fd0 = *(Rec8 *)((char *)tab + (p[0] << 3));
        } else {
            *(char *)&q->fd0 = c;
        }
        none = -1;
        if (p[1] != none) {
            (*(Unit **)((char *)o + k1 + off))->fd8 = *(Rec8 *)((char *)tab + (p[1] << 3));
        } else {
            *(char *)&(*(Unit **)((char *)o + k1 + off))->fd8 = c;
        }
spawn:
        if ((o->f1d8 & 0x40) != 0 && (o->fec & 0x40) == 0) {
            e = heap_alloc_8c122700(g_8c4d97e0, 0x2c);
            if (e != 0) TItemMagGrowEff_ctor_8c1f2a78(e, g_8c44be9c, *(Unit **)((char *)o + k1 + off));
        }
    }
    o->f1d8 &= ~0x40;
}
