/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c076af4
 * function: operation_8c076af4
 * language: c
 * reference size: 648 bytes
 * compiled size: 648 bytes (+0.0%)
 * differing lines: 152 of 277 reference instruction lines
 * differing bytes: 417
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in code
 *   generation (unclassified); review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Ent {
    short id;
    short sub;
} Ent;
typedef struct List {
    int n;
    int k;
    int m;
    Ent e[10];
} List;
typedef struct Blk {
    short f754;
    char pad756[0x2e];
    List list;
} Blk;
typedef struct Owner {
    char pad000[0x20];
    short f20;
    char pad022[0x1a];
    Vector3 f3c;
    char pad048[0x1c];
    int f64;
    char pad068[0x2bc];
    Vector3 f324;
    char pad330[0x424];
    Blk blk;
} Owner;
typedef struct Target {
    char pad00[0x20];
    short f20;
    char pad22[0xba];
    char *fdc;
} Target;
typedef struct Hit {
    int f00;
    void *f04;
} Hit;
typedef struct Object Object;
struct Object {
    char padx[0xe4];
    short fe4;
    char pade6[2];
    int fe8;
    char padec[0x50];
    Owner *f13c;
    char pad140[0xe0];
    float f220;
    char pad224[8];
    void (*f22c)(Object *, Vector3 *, Vector3 *, float);
};
typedef struct Frame {
    int f00;
    int f04;
    int f08;
    short f0c;
    short f0e;
    short f10;
    short f12;
    float f14;
    Vector3 dir;
    Vector3 pos;
} Frame;
extern int g_8c4689e0;
extern Target *operation_8c0541b4(short, short);
extern void njPushMatrix_8c38ade4(void *);
extern float *operation_8c1581d8(Object *, short);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be280(int, Vector3 *, Vector3 *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3bdf60(Vector3 *, Vector3 *);
extern Hit *operation_8c011214(Vector3 *, Vector3 *, int);
extern float call_8c38d7d8(Vector3 *, void *);
extern void TItemAttacker_ctor_8c1c682c(int, void *, int, Frame *);
extern int operation_8c0750cc(Object *);
static inline int clamp_count(int n)
{
    if (n < 0 || n > 10) {
        return 0;
    }
    return n;
}
static inline List *blk_list(Blk *b)
{
    return &b->list;
}
void operation_8c076af4(Object *o, Vector3 *a1, int a2, float f0)
{
    Frame frame;
    Owner *p;
    Ent *e;
    Target *t;
    Hit *h;
    int found;
    float d;
    int s;
    int n;
    int k;
    List *l;
    int m;
    p = o->f13c;
    if (p == 0) {
        return;
    }
    switch (o->fe4) {
    case 2:
        l = blk_list(&p->blk);
        if (l == 0) {
            return;
        }
        if (a1 == 0) {
            a1 = &p->f324;
        }
        found = 0;
        n = l->n;
        if (clamp_count(n) != 0) {
            e = (Ent *)((char *)l + ((clamp_count(n) - 1) << 2) + 4);
            t = operation_8c0541b4(e->id, e->sub);
            if (t != 0) {
                frame.pos = *(Vector3 *)(t->fdc + e->sub * 0x2c + 0x1c);
                found = 1;
            }
        }
        if (found == 0) {
            njPushMatrix_8c38ade4((void *)0x8c400500);
            frame.dir.y = 0.0f;
            frame.dir.x = 0.0f;
            frame.dir.z = *operation_8c1581d8(o, 2);
            njRotateY_8c37df90(0, o->f13c->f64);
            call_8c3be280(0, &frame.dir, &frame.pos);
            njPopMatrixEx_8c38ad10();
            call_8c3bdf60(&frame.pos, a1);
        }
        h = operation_8c011214(a1, &frame.pos, 0x40000100);
        if (h != 0) {
            d = call_8c38d7d8(a1, h->f04);
        } else {
            d = call_8c38d7d8(a1, &frame.pos);
        }
        if (a2 != 0) {
            k = 0x13c;
            m = 0x220;
            for (a2 = 0; a2 != clamp_count(l->n); a2++) {
                e = (Ent *)((char *)l + (a2 << 2) + 4);
                t = operation_8c0541b4(e->id, e->sub);
                if (t != 0) {
                    frame.f00 = 0;
                    frame.f04 = 1;
                    frame.f0c = (*(Owner **)((char *)o + k))->f20;
                    frame.f0e = t->f20;
                    frame.f08 = o->fe8;
                    frame.f10 = e->sub;
                    frame.f14 = *(float *)(((*(Owner **)((char *)o + k))->blk.f754 << 2) + 0x8c2e73b4) * f0;
                    TItemAttacker_ctor_8c1c682c(g_8c4689e0, &(*(Owner **)((char *)o + k))->f3c, (int)(call_8c38d7d8(a1, t->fdc + e->sub * 0x2c + 0x1c) / *(float *)((char *)o + m)), &frame);
                }
            }
        }
        s = (int)(d / o->f220);
        if (!(s >= 0)) {
            s = 0;
        }
        if (o->f22c != 0) {
            if (operation_8c0750cc(o) == 1) {
                o->f22c(o, a1, &frame.pos, (float)s);
            }
        }
    }
}
