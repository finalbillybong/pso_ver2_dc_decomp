typedef struct S4 S4;
struct S4 {
    char unknown0[0x4];
    int f04;
};
typedef struct L30 L30;
struct L30 {
    char unknown0[0x4];
    S4 *f04;
    char unknown8[0x28];
    L30 *f30;
};
typedef struct Model {
    char unknown0[0x2c];
    L30 *f2c;
} Model;
typedef struct Info42c {
    char unknown0[0x8];
    Model *f08;
    char unknownc[0xc];
    int f18;
} Info42c;
typedef struct Info430 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
} Info430;
typedef struct Owner {
    char unknown0[0x42c];
    Info42c *f42c;
    Info430 *f430;
} Owner;
typedef struct Pair {
    Model *f00;
    int f04;
} Pair;
typedef struct IPair {
    int f00;
    int f04;
} IPair;
typedef struct Triple {
    int f00;
    int f04;
    int f08;
} Triple;
extern char g_8c30ff94[];
extern int g_8c4703c0;
extern Owner *g_8c4d8200;
extern Pair g_8c4d8204;
extern IPair g_8c4d820c;
extern int g_8c4d8214;
extern Triple g_8c4d8218;
extern Owner *call_8c011ecc(int);
extern void call_8c03d610(Owner *, int, void *, int, int, int);
extern int call_8c118528(void *);
void operation_8c1138bc(void)
{
    Owner *o;
    Owner *v;
    Model *m;
    int t;
    o = call_8c011ecc(0x440);
    if (o != 0) {
        call_8c03d610(o, 5, (void *)0x8c30ff54, 0, 0, 0);
    }
    g_8c4d8200 = o;
    if (g_8c4703c0 == 3) {
        g_8c4d8214 = call_8c118528(g_8c30ff94 + 0xa4);
    } else {
        g_8c4d8214 = call_8c118528(g_8c30ff94 + 0xbc);
    }
    v = g_8c4d8200;
    g_8c4d8204.f00 = v->f42c->f08;
    g_8c4d8204.f04 = v->f42c->f18;
    t = v->f430->f04;
    g_8c4d820c.f00 = t;
    g_8c4d820c.f04 = v->f430->f0c;
    m = g_8c4d8204.f00;
    g_8c4d8218.f00 = m->f2c->f04->f04;
    g_8c4d8218.f04 = m->f2c->f30->f04->f04;
    g_8c4d8218.f08 = m->f2c->f30->f30->f04->f04;
}
