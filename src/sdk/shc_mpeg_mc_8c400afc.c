/* MPEG decoder macroblock output and motion compensation (store-queue flushes, per-row MC calls). */
int _builtin_get_imask(void);
void _builtin_set_imask(int);

typedef struct Blk {
    char *y;
    char *u;
    char *v;
    short w12;
    short w14;
} Blk;

typedef struct Pic {
    Blk cur;
    Blk ref;
    unsigned int addr;
} Pic;

typedef struct MV {
    int pad[6];
    int x;
    int y;
    int pad2;
} MV;

typedef struct MC {
    int pad[5];
    int x20;
    char *x24;
    int x28;
    int x32;
    int x36;
    int x40;
} MC;

typedef struct Comp {
    int a;
    int b;
} Comp;

typedef struct Pl {
    int n;
    Comp comp[6];
} Pl;

typedef struct F8 {
    int a;
    int b;
    char *c;
    char *d;
} F8;

typedef struct Dec {
    char p0[0x38];
    int x38;
    char p1[0xc4 - 0x3c];
    MC mc;
    char p2[0xf8 - 0xf0];
    F8 f8;
    Pl pl0;
    Pl pl1;
    char p3[0x184 - 0x170];
    int mode;
    char p4[0x1ec - 0x188];
    Pic pic;
    char p5[0x24c - 0x210];
    void (*fn)(struct Dec *);
    char p6[0x260 - 0x250];
    MV mv0;
    MV mv1;
    int row;
    int p7[2];
    int x2b4;
    char p8[0x2e0 - 0x2b8];
    char x2e0[0xc60 - 0x2e0];
    short coef[0x300];
    signed char tab[0x80][2];
} Dec;

typedef struct Pos {
    int x;
    int y;
} Pos;

typedef void (*McFn)(MC *);

extern void mp_sq_copy_8c4015e0(char *, unsigned int *, Pl *, int);
extern void mp_sq_a_8c4016a4(unsigned int *, F8 *, int);
extern void mp_sq_b_8c4019f8(unsigned int *, F8 *, int);
extern void mp_store_8c401790(char *, Pos *, Blk *);
extern int mp_add_8c401bcc(MC *, short *);
extern McFn d_8c3f6260[][4];

void mp_mc_8c400d64(Dec *d, char *ref, Pos *pos, Blk *b, MV *mv);
void mp_sq_y_8c400f0c();
void mp_sq_c_8c400f74();
void mp_pos_8c401152(Dec *d, int row, Pos *out, Blk *b);
void mp_split_8c4011a0(int x, int y, int *out);

void mp_flush_8c400afc(Dec *d)
{
    int mask;
    unsigned int a;
    unsigned int *sq;
    Pos pos;
    Pic *p;
    Comp *c;
    Pl *l;
    Blk *b;
    int h;

    &mask;
    &sq;
    mask = _builtin_get_imask();
    _builtin_set_imask(15);
    p = &d->pic;
    b = &p->ref;
    l = &d->pl0;
    c = l->comp;
    p->addr = (a = p->addr) + 0x180;
    *(volatile unsigned int *)0xff000038 = a >> 24 & 0x1c;
    *(volatile unsigned int *)0xff00003c = a >> 24 & 0x1c;
    sq = (unsigned int *)(a & 0x3ffffff | 0xe0000000);
    if (0) c++;
    mp_pos_8c401152(d, d->row, &pos, b);
    h = b->w14;
    c[0].a = (int)b->y + pos.x;
    c[1].a = (int)b->u + pos.x;
    c[2].a = (int)b->v + pos.y;
    c[3].a = c[2].a + 8;
    c[4].a = c[2].a + h * 8;
    c[5].a = c[4].a + 8;
    mp_sq_copy_8c4015e0(d->x2e0, sq, l, d->x38);
    _builtin_set_imask(mask);
}

void mp_flush2_8c400bc8(Dec *d)
{
    int mask;
    unsigned int a;
    unsigned int *sq;
    Pic *p;

    &mask;
    &sq;
    mask = _builtin_get_imask();
    _builtin_set_imask(15);
    p = &d->pic;
    a = p->addr;
    p->addr = a + 0x180;
    *(volatile unsigned int *)0xff000038 = a >> 24 & 0x1c;
    *(volatile unsigned int *)0xff00003c = a >> 24 & 0x1c;
    sq = (unsigned int *)(a & 0x3ffffff | 0xe0000000);
    mp_sq_copy_8c4015e0(d->x2e0, sq, &d->pl1, d->x38);
    _builtin_set_imask(mask);
}

void mp_mb_fwd_8c400c58(Dec *d)
{
    F8 *f;
    Pic *c;
    Pos pos;

    f = &d->f8;
    c = &d->pic;
    mp_mc_8c400d64(d, f->c, &pos, &c->cur, &d->mv0);
    mp_sq_y_8c400f0c(d, f);
    mp_store_8c401790(f->c, &pos, &c->ref);
}

void mp_mb_a_8c400c9e(Dec *d)
{
    F8 *f;
    Pic *c;
    Pos pos;

    f = &d->f8;
    c = &d->pic;
    mp_mc_8c400d64(d, f->c, &pos, &c->cur, &d->mv0);
    mp_sq_y_8c400f0c(d, f);
}

void mp_mb_b_8c400cd4(Dec *d)
{
    F8 *f;
    Pic *c;
    Pos pos;

    f = &d->f8;
    c = &d->pic;
    mp_mc_8c400d64(d, f->c, &pos, &c->ref, &d->mv1);
    mp_sq_y_8c400f0c(d, f);
}

void mp_mb_bi_8c400d0c(Dec *d)
{
    F8 *f;
    Pic *c;
    Pos pos;

    f = &d->f8;
    c = &d->pic;
    mp_mc_8c400d64(d, f->c, &pos, &c->cur, &d->mv0);
    mp_mc_8c400d64(d, f->d, &pos, &c->ref, &d->mv1);
    mp_sq_c_8c400f74(d, f);
}

void mp_mc_8c400d64(Dec *d, char *ref, Pos *pos, Blk *b, MV *mv)
{
    int mode;
    int w14;
    int w12;
    int mx;
    int my;
    int off0;
    int off1;
    int t;
    int *ha;
    int *hb;
    McFn fa;
    McFn fb;
    MC *mc;
    int A[4];
    int B[4];

    if (0) pos++;
    mode = d->mode;
    w14 = b->w14;
    w12 = b->w12;
    mp_pos_8c401152(d, d->row, pos, b);
    mx = mv->x;
    my = mv->y;
    if (0) A[0] = 0;
    mp_split_8c4011a0(mx / 2, my / 2, A);
    off0 = pos->x + A[0] + A[1] * w12;
    if (0) pos++;
    if (0) w14++;
    if (0) my++;
    if (0) mx++;
    if (0) mx++;
    mp_split_8c4011a0(mx, my, B);
    if (0) B[0] = 0;
    if (0) B[0] = 0;
    if (0) w14++;
    off1 = pos->y + B[0] + B[1] * w14;
    if (0) b++;
    if (0) ref++;
    if (0) ref++;
    if (0) w14++;
    if (0) d++;
    fa = *(A[3] * 2 + *(ha = &A[2]) + d_8c3f6260[mode]);
    fb = *(B[3] * 2 + *(hb = &B[2]) + d_8c3f6260[mode]);
    if (0) mode++;
    if (0) mc++;
    if (0) d++;
    if (0) w14++;
    if (0) w12++;
    mc = &d->mc;
    mc->x32 = w12;
    mc->x24 = ref;
    t = (int)b->y + off0;
    mc->x36 = t;
    t += (mode ? *ha : 0) + w12;
    mc->x40 = t;
    fa(mc);
    mc->x24 = ref + 0x40;
    t = (int)b->u + off0;
    mc->x36 = t;
    t += (mode ? *ha : 0) + w12;
    mc->x40 = t;
    fa(mc);
    mc->x32 = w14;
    mc->x24 = ref + 0x80;
    t = (int)b->v + off1;
    mc->x36 = t;
    t += (mode ? *hb : 0) + w14;
    mc->x40 = t;
    fb(mc);
    mc->x24 = ref + 0xc0;
    mc->x36 += 8;
    mc->x40 += 8;
    fb(mc);
    mc->x24 = ref + 0x100;
    mc->x36 += (w14 - 1) * 8;
    w14--;
    mc->x40 += w14 << 3;
    fb(mc);
    mc->x24 = ref + 0x140;
    mc->x36 += 8;
    mc->x40 += 8;
    fb(mc);
}

void mp_sq_y_8c400f0c(d, f)
Dec *d;
F8 *f;
{
    int mask;
    unsigned int a;
    unsigned int *sq;
    Pic *p;

    &sq;
    mask = _builtin_get_imask();
    _builtin_set_imask(15);
    p = &d->pic;
    a = p->addr;
    p->addr = a + 0x180;
    *(volatile unsigned int *)0xff000038 = a >> 24 & 0x1c;
    *(volatile unsigned int *)0xff00003c = a >> 24 & 0x1c;
    sq = (unsigned int *)(a & 0x3ffffff | 0xe0000000);
    mp_sq_a_8c4016a4(sq, f, d->x2b4);
    _builtin_set_imask(mask);
}

void mp_sq_c_8c400f74(d, f)
Dec *d;
F8 *f;
{
    int mask;
    unsigned int a;
    unsigned int *sq;
    Pic *p;

    &sq;
    mask = _builtin_get_imask();
    _builtin_set_imask(15);
    p = &d->pic;
    a = p->addr;
    p->addr = a + 0x180;
    *(volatile unsigned int *)0xff000038 = a >> 24 & 0x1c;
    *(volatile unsigned int *)0xff00003c = a >> 24 & 0x1c;
    sq = (unsigned int *)(a & 0x3ffffff | 0xe0000000);
    mp_sq_b_8c4019f8(sq, f, d->x2b4);
    _builtin_set_imask(mask);
}

void mp_rows_8c401004(Dec *d, int n)
{
    Pic *p;
    Blk *cur;
    MC *mc;
    short *k;
    int r;
    int v;
    int w14;
    int w12;
    int step;
    Blk *rb;
    Pos pos;

    k = d->coef;
    p = &d->pic;
    cur = &p->cur;
    rb = &p->ref;
    mc = &d->mc;
    w14 = cur->w14;
    w12 = cur->w12;
    r = p->addr;
    p->addr = r + n * 0x180 - 0x180;
    for (step = (w14 - 1) * 8; --n; ) {
        mp_pos_8c401152(d, d->row - n, &pos, cur);
        mc->x28 = w12;
        mc->x20 = r;
        mc->x36 = (int)cur->y + pos.x;
        v = mp_add_8c401bcc(mc, k);
        k += 0x20;
        mc->x20 = v;
        mc->x36 = (int)cur->u + pos.x;
        v = mp_add_8c401bcc(mc, k);
        k += 0x20;
        mc->x28 = w14;
        mc->x20 = v;
        mc->x36 = (int)cur->v + pos.y;
        v = mp_add_8c401bcc(mc, k);
        k += 0x20;
        mc->x20 = v;
        mc->x36 += 8;
        v = mp_add_8c401bcc(mc, k);
        k += 0x20;
        mc->x20 = v;
        mc->x36 += step;
        v = mp_add_8c401bcc(mc, k);
        k += 0x20;
        mc->x20 = v;
        mc->x36 += 8;
        r = mp_add_8c401bcc(mc, k);
        k = d->coef;
        mp_store_8c401790((char *)k, &pos, rb);
    }
}

void mp_run_8c401110(Dec *d, int n)
{
    int end;
    int i;
    void (*fn)(Dec *);

    end = d->row;
    d->x2b4 = 0;
    fn = d->fn;
    for (i = end - n + 1; i < end; i++) {
        d->row = i;
        fn(d);
    }
    d->row = end;
}

void mp_pos_8c401152(Dec *d, int row, Pos *out, Blk *b)
{
    signed char *t;
    volatile unsigned int w;
    int h;
    int x;
    int y;

    t = d->tab[row];
    w = b->w12;
    h = b->w14;
    x = t[0] * 8;
    y = t[1] * 8;
    out->x = x * w + y;
    out->y = (x << 1) * h + (y << 1);
}

void mp_split_8c4011a0(int x, int y, int *out)
{
    out[0] = x >> 1;
    out[1] = y >> 1;
    out[2] = x & 1;
    out[3] = y & 1;
}
