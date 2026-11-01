/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c030e2c
 * function: operation_8c030e2c
 * language: c
 * reference size: 452 bytes
 * compiled size: 452 bytes (+0.0%)
 * differing lines: 74 of 186 reference instruction lines
 * differing bytes: 261
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, stack frame and spills; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c3c1460 S_c8c3c1460;
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_g8c44be0c_c S_g8c44be0c_c;
typedef struct Object Object;
typedef struct S_vv10 S_vv10;
typedef struct S_vv4 S_vv4;
typedef struct S_vv7 S_vv7;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_0 S_vv9_0;
typedef struct S_x60304 S_x60304;
typedef struct S_x60304_24 S_x60304_24;
struct S_g8c44be0c {
    short f00;
    char unknown2[0x6];
    int f08;
    S_g8c44be0c_c *f0c;
};
struct Object {
    short tag;
    char unknown2[0x6];
    int f08;
};
struct S_vv7 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x8];
    int f2c;
};
struct S_vv4 {
    char unknown0[0x8];
    int f08;
};
struct S_x60304 {
    char unknown0[0x24];
    S_x60304_24 *f24;
};
struct S_vv9 {
    S_vv9_0 *f00;
    char unknown4[0x28];
    int f2c;
};
struct S_vv10 {
    int f00;
    char unknown4[0x4];
    int f08;
};
extern S_g8c44be0c *g_8c44be0c;
extern int g_8c44be14;
extern int g_8c44be24;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern int get_current_area_8c032b10(void);
extern void call_8c38c0e0(int);
extern void call_8c38c0e6(int, int);
extern void reset_state_8c391cc4(void);
extern void call_8c3827d8(void *);
extern int call_8c3c1460(void *);
extern void reset_state_8c391c94(void);
extern void call_8c3c10f6(void *, int);
void operation_8c030e2c(Object *o)
{
    S_vv7 *p;
    S_vv9 *s;
    S_vv10 *d;
    char *buf;
    int mode;
    int i;
    int j;
    int size;
    int neg;
    S_g8c44be0c *q;
    if (o == 0 || g_8c44be0c == 0) {
        return;
    }
    buf = (char *)g_8c44be24;
    if (buf == 0) {
        return;
    }
    g_8c44be14 = 0;
    mode = get_current_area_8c032b10();
    g_8c46f560 = g_8c575570;
    g_8c46f574 = g_8c5755a4;
    g_8c46f578 = g_8c5755a8;
    call_8c38c0e0(8);
    call_8c38c0e6(-1, 0);
    g_8c575570 &= -0x401;
    reset_state_8c391cc4();
    call_8c3827d8((void *)(g_8c44be0c->f0c));
    mode <<= 2;
    for (i = 0; i < (q = g_8c44be0c)->f00; i++) {
        neg = -1;
        if (i > o->tag + neg) {
            break;
        }
        p = (S_vv7 *)(o->f08 + i * 0x3c);
        d = (S_vv10 *)((S_x60304 *)(q->f08 + i * 0x3c))->f24;
        s = (S_vv9 *)p->f20;
        if (d == 0 || s == 0) {
            continue;
        }
        for (j = 0; j < p->f2c; j++) {
            if ((s->f2c & 0x100) != 0) {
                d++;
                s++;
                continue;
            }
            size = call_8c3c1460((void *)(s->f00));
            if ((unsigned int)(g_8c44be14 + size) > *(unsigned int *)((char *)mode + 0x8c284708)) {
                d->f00 = 0;
                d++;
                continue;
            }
            if ((s->f2c & 0x10) != 0) {
                reset_state_8c391c94();
                call_8c3c10f6((void *)(s->f00), (int)buf);
                reset_state_8c391cc4();
            } else {
                call_8c3c10f6((void *)(s->f00), (int)buf);
            }
            d->f00 = (int)buf;
            buf += size;
            d->f08 = s->f2c;
            g_8c44be14 += size;
            d++;
            s->f2c |= 0x100;
            s++;
        }
    }
    reset_state_8c391c94();
    g_8c5755a4 = g_8c46f574;
    g_8c5755a8 = g_8c46f578;
    g_8c575570 = g_8c46f560;
}
