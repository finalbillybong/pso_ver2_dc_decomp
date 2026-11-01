/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c224614
 * function: operation_8c224614
 * language: c
 * reference size: 424 bytes
 * compiled size: 424 bytes (+0.0%)
 * differing lines: 32 of 183 reference instruction lines
 * differing bytes: 30
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Rec {
    signed char f00;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
} Rec;
typedef struct Object {
    char unknown0[0x71];
    char f71;
    short f72;
    short f74;
    short f76;
    char *f78;
    int f7c;
    int f80;
    int *f84;
    int *f88;
    int *f8c;
    char unknown90[0xc];
    float f9c;
} Object;
extern int g_8c5059a0;
extern int call_8c21f468(void);
extern int operation_8c21f5b0(void *, int);
extern int *table_first_8c1a6604(void *, int);
extern int *table_second_8c1a6610(void *, int);
extern int operation_8c21f544(void *, int);
extern int call_8c18e8a0(int, int);
extern int call_8c18e768(int, int);
int operation_8c224614(Object *o, char *a1, int *a2)
{
    int g;
    int rb;
    int lim;
    int i;
    int n;
    int v;
    Rec *r;
    int *a;
    int *b;
    o->f8c = a2;
    *o->f8c = 0;
    g = g_8c5059a0;
    rb = g + 0x1c;
    lim = 0xc - call_8c21f468();
    if (lim > o->f76) {
        r = (Rec *)((char *)(rb + (o->f76 << 2)) + 0xc);
        o->f9c = 2.0f;
        o->f7c = o->f76;
        o->f80 = operation_8c21f5b0((void *)g, 0);
        o->f76 = r->f00;
        o->f72 = r->f01;
        o->f74 = r->f02;
        *o->f84 = r->f03 & 1;
        *o->f88 = r->f03 >> 1 & 1;
        for (g = 0; g < 4; g++) {
            a = table_first_8c1a6604(o, g);
            b = table_second_8c1a6610(o, g);
            *a |= 2;
            *b |= 2;
        }
        o->f71 = 2;
        return 0;
    }
    o->f78 = a1;
    o->f71 = 3;
    n = o->f76 - lim;
    for (i = 0; i < 4; i++) {
        if (operation_8c21f544((void *)g, i) != 0 && !(n-- > 0)) {
            v = *(unsigned short *)((char *)(rb + 4) + (i << 1));
            o->f7c = i;
            o->f80 = i;
            o->f72 = call_8c18e8a0(i, 2);
            o->f74 = call_8c18e768(i, 2);
            o->f76 = (unsigned char)(unsigned short)v;
            *o->f78 = (unsigned short)v >> 8 & 7;
            *o->f84 = (unsigned short)v >> 0xb & 1;
            *o->f88 = (unsigned short)v >> 0xc & 1;
            return 1;
        }
    }
    return 1;
}
