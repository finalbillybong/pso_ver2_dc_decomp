/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0123d8
 * function: operation_8c0123d8
 * language: c
 * reference size: 600 bytes
 * compiled size: 604 bytes (+0.7%)
 * differing lines: 322 of 266 reference instruction lines
 * differing bytes: 522
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Obj Obj;
struct Obj {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0xa];
    short f2c;
    char unknown2e[0x6];
    int f34;
    char unknown38[0x318];
    int f350;
    char unknown354[0x8];
    Obj *f35c;
    Obj *f360;
    Obj *f364;
    Obj *f368;
    char unknown36c[0x1c];
    int f388;
};
#define FI(p, off) (*(int *)((char *)(p) + (off)))
#define FP(p, off) (*(Obj **)((char *)(p) + (off)))
extern int g_8c467874;
extern int g_8c467878;
void operation_8c0123d8(Obj *o)
{
    int off388;
    Obj *a;
    Obj *b;
    unsigned short hi;
    int i;
    int mask;
    int off350;
    int off364;
    int off368;
    Obj *e;
    Obj *t;
    Obj *n;
    unsigned short lo;
    off388 = 0x388;
    if (FI(o, off388) > 0 && o->f35c == 0 && o->f360 == 0) {
        a = 0;
        hi = 0x4000;
        b = 0;
        i = g_8c467874;
        mask = 0x800;
        off350 = 0x350;
        off364 = 0x364;
        off368 = 0x368;
        for (; i < g_8c467874 + g_8c467878; i++) {
            e = *(Obj **)((char *)0x8c467240 + (i << 2));
            if (e == 0) continue;
            if (e == o) continue;
            lo = 0x1000;
            if (!(e->f20 >= lo)) continue;
            if (!(hi > e->f20)) continue;
            if (e->f34 & mask) continue;
            if (FI(e, off388) != FI(o, off388)) continue;
            if (e->f2c != o->f2c) continue;
            switch (FI(o, off350)) {
            case 2:
                if (FI(e, off350) != 2) continue;
                if (FP(o, off364) != 0) continue;
                if (b != 0) continue;
                while ((n = FP(e, off364)) != 0) e = n;
                b = e;
                break;
            case 1:
                switch (FI(e, off350)) {
                case 2:
                    if (a != 0) continue;
                    t = FP(e, off368);
                    if (t == 0) {
                        a = e;
                        continue;
                    }
                    if (FP(o, off364) != 0) continue;
                    if (b != 0) continue;
                    while ((n = FP(t, off364)) != 0) t = n;
                    b = t;
                    break;
                case 1:
                    if (FP(o, off364) != 0) continue;
                    if (b != 0) continue;
                    while ((n = FP(e, off364)) != 0) e = n;
                    b = e;
                    break;
                }
                break;
            case 0:
                switch (FI(e, off350)) {
                case 2:
                    if (a != 0) continue;
                    t = FP(e, off368);
                    if (t == 0) {
                        a = e;
                        continue;
                    }
                    e = FP(t, off368);
                    if (e == 0) {
                        a = t;
                        continue;
                    }
                    if (FP(o, off364) != 0) continue;
                    if (b != 0) continue;
                    while ((n = FP(e, off364)) != 0) e = n;
                    b = e;
                    break;
                case 1:
                    t = FP(e, off368);
                    if (t == 0) {
                        a = e;
                        continue;
                    }
                    if (FP(o, off364) != 0) continue;
                    if (b != 0) continue;
                    while ((n = FP(t, off364)) != 0) t = n;
                    b = t;
                    break;
                default:
                    if (FP(o, off364) != 0) continue;
                    if (b != 0) continue;
                    while ((n = FP(e, off364)) != 0) e = n;
                    b = e;
                    break;
                }
                break;
            }
        }
        if (a != 0) {
            o->f35c = a;
            a->f368 = o;
            return;
        }
        if (b != 0) {
            o->f360 = b;
            b->f364 = o;
        }
    }
}
