typedef struct {
    int a;
    int b;
} Pair;

typedef struct {
    int f00, f04, f08, f0c, f10, f14, f18, f1c, f20, f24, f28, f2c, f30, f34;
} Ring;

typedef union {
    Ring r;
    Pair pairs[7];
} Sub;

typedef struct {
    int type;
    int active;
    int unknown8;
    int unknownc;
    Sub sub;
    char pad48[0x368 - 0x48];
} Elem;

typedef struct {
    char pad0[0xc34];
    Elem elems[1];
} Outer;

typedef struct {
    char pad0[0xc34];
    char area[0x368];
} OuterB;

typedef struct {
    Elem e[1];
} Arr;

typedef struct {
    int base;
    int len1;
    int base2;
    int len2;
    int rd;
    int n;
    int z;
} Avail;

typedef struct {
    int f00, f04, f08, f0c, f10, f14, f18, f1c, f20, f24, f28;
} Info;

extern int send_code_8c360c8c(Outer *, int);
extern void lock_8c360db4(int *);
extern void unlock_8c360dcc(int *);

void ring_snap_8c35fd7c(Ring *r, unsigned int *a, int *b, unsigned int *c, int *d, int *e);

void elem_pair_8c35faac(Outer *m, int i, int j, Pair *dst)
{
    Elem *e;
    Sub *s;
    if (0) m++;
    e = (Elem *)((char *)m + 0xc34) + i;
    s = &e->sub;
    *dst = s->pairs[j];
}

int ring_space_8c35fad4(Outer *m, int i, Avail *o)
{
    Elem *e;
    Ring *r;
    unsigned int c;
    unsigned int a;
    int b;
    int d;
    int n;

    {
        Arr *a = (Arr *)m->elems;
        e = &a->e[i];
    }
    if (e->active == 0) return send_code_8c360c8c(m, 0xff000401);
    r = &e->sub.r;
    ring_snap_8c35fd7c(r, &a, &b, &c, &d, &n);
    if (n >= r->f04) {
        o->base = c;
        o->len1 = 0;
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto n0;
n0:     ;
    } else if (c < a) {
        o->base = c;
        o->len1 = a - c;
    } else goto c3;
    o->base2 = c;
    o->len2 = 0;
    goto tail;
c3:
        o->base = c;
        o->len1 = r->f08 - c;
        o->base2 = r->f00;
        o->len2 = a - r->f00;
tail:
    o->rd = r->f34;
    o->n = d;
    o->z = b;
    return 0;
}

int ring_wadv_8c35fb7e(Outer *m, int i, int n)
{
    Elem *e;
    Ring *r;
    int ret;
    int lk;

    ret = 0;
    e = m->elems;
    e += i;
    if (e->active == 0) return send_code_8c360c8c(m, 0xff000401);
    r = &e->sub.r;
    if (r->f34 != 0) return send_code_8c360c8c(m, 0xff000403);
    lock_8c360db4(&lk);
    r->f10 += n;
    if ((unsigned int)r->f10 >= (unsigned int)r->f08) r->f10 -= r->f04;
    r->f30 += n;
    if (r->f30 > r->f04) ret = send_code_8c360c8c(m, 0xff000404);
    r->f28 += n;
    unlock_8c360dcc(&lk);
    return ret;
}

int ring_data_8c35fc24(Outer *m, int i, Avail *o)
{
    Elem *e;
    Ring *r;
    unsigned int c;
    unsigned int a;
    int b;
    int d;
    int n;

    {
        Arr *a = (Arr *)m->elems;
        e = &a->e[i];
    }
    if (e->active == 0) return send_code_8c360c8c(m, 0xff000401);
    r = &e->sub.r;
    ring_snap_8c35fd7c(r, &c, &b, &a, &d, &n);
    if (n <= 0) {
        o->base = c;
        o->len1 = 0;
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto n1;
n1:     ;
    } else if (c < a) {
        o->base = c;
        o->len1 = a - c;
    } else goto c3;
    o->base2 = c;
    o->len2 = 0;
    goto tail;
c3:
        o->base = c;
        o->len1 = r->f08 - c;
        o->base2 = r->f00;
        o->len2 = a - r->f00;
tail:
    o->rd = r->f34;
    o->n = d;
    o->z = b;
    return 0;
}

int ring_radv_8c35fccc(Outer *m, int i, int n)
{
    Elem *e;
    Ring *r;
    int zero;
    int ret;
    int lk;

    zero = 0;
    e = m->elems;
    e += i;
    ret = zero;
    if (e->active == 0) return send_code_8c360c8c(m, 0xff000401);
    r = &e->sub.r;
    lock_8c360db4(&lk);
    r->f14 += n;
    if ((unsigned int)r->f14 >= (unsigned int)r->f18) {
        r->f18 = zero;
        r->f1c = zero;
    }
    if ((unsigned int)r->f14 >= (unsigned int)r->f08) {
        r->f14 -= r->f04;
        r->f20 = zero;
        r->f24 = zero;
    }
    r->f30 -= n;
    if (r->f30 < 0) ret = send_code_8c360c8c(m, 0xff000405);
    r->f2c += n;
    unlock_8c360dcc(&lk);
    return ret;
}

void ring_snap_8c35fd7c(Ring *r, unsigned int *a, int *b, unsigned int *c, int *d, int *e)
{
    int lk;

    lock_8c360db4(&lk);
    *a = r->f14;
    *b = r->f2c;
    *c = r->f10;
    *d = r->f28;
    *e = r->f30;
    unlock_8c360dcc(&lk);
}

void ring_get_marks_8c35fdbc(Outer *m, int i, int *a, int *b, int *c, int *d, int *f)
{
    int lk;
    Ring *r;
    Elem *e;

    lock_8c360db4(&lk);
    e = m->elems;
    e += i;
    r = &e->sub.r;
    *a = r->f18;
    *b = r->f1c;
    *d = r->f20;
    *c = r->f24;
    *f = r->f0c;
    unlock_8c360dcc(&lk);
}

void ring_set_marks_8c35fe0c(Outer *m, int i, int a, int b, int c, int d)
{
    int lk;
    Ring *r;
    Elem *e;

    lock_8c360db4(&lk);
    e = m->elems;
    e += i;
    r = &e->sub.r;
    r->f18 = a;
    r->f1c = b;
    r->f20 = d;
    r->f24 = c;
    unlock_8c360dcc(&lk);
}

#define AD(b, n) (bits <= 8 ? (n) + (b) : (n) * 2 + (b))
#define SZ(n) (bits > 8 ? (n) * 2 : (n))
#define SZ0(n) (bits <= 8 ? (n) : (n) * 2)
#define SZ1(n) (bits <= 8 ? (n) : (n) << 1)
#define SZ2(n) (!(bits > 8) ? (n) : (n) * 2)
#define SZ3(n) (bits < 9 ? (n) : (n) * 2)
#define SZ4(n) (bits <= 8 ? (n) : (n) + (n))
#define SZ5(n) (t = bits > 8 ? (n) * 2 : (n))
#define SZ6(n) (t = bits <= 8 ? (n) : (n) * 2)
#define SZ7(n) (t = (n), bits > 8 ? t * 2 : t)
#define SZ8(n) ((int)(bits > 8 ? (n) * 2 : (n)))
#define SZ9(n) (bits > 8 ? (n) * 2 : (n) * 1)

int frame_space_8c35fe64(Outer *m, int i, Info *o)
{
    Elem *e;
    Ring *r;
    int lk;
    int base;
    int cur;
    int bits;
    int size;
    int rd;
    int b1;
    int b2;
    int tot;
    int wr;
    int done;
    Ring * t36_101;
    int t36_75;
    int t36_110;

    {
        Arr *a = (Arr *)m->elems;
        e = &a->e[i];
    }
    if (e->active == 0) return send_code_8c360c8c(m, 0xff000401);
    t36_101 = &e->sub.r;
    r = t36_101;
    lock_8c360db4(&lk);
    base = r->f08;
    t36_110 = r->f0c;
    cur = r->f10;
    bits = t36_110;
    t36_75 = r->f14;
    b2 = r->f18;
    size = r->f1c;
    b1 = t36_75;
    rd = r->f20;
    wr = r->f24;
    tot = r->f28;
    done = r->f2c;
    unlock_8c360dcc(&lk);
    o->f00 = base;
    o->f04 = bits;
    o->f08 = cur;
    o->f24 = tot;
    o->f28 = done;
    if (0) b2++;
    if (tot >= size + done) {
        o->f0c = 0;
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto g36_28;
g36_28:
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto g36_6;
g36_6:
        o->f14 = SZ(0);
        o->f18 = SZ(0);
        goto tail;
    }
    if (rd >= wr) goto wrap;
    if (0) i++;
    o->f0c = wr - rd;
    if (0) tot++;
    o->f14 = AD(b1, rd);
    o->f18 = AD(b2, rd);
tail:
    o->f10 = 0;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto z0;
z0:
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto z1;
z1:
    o->f1c = SZ(0);
    o->f20 = SZ(0);
    goto ret;
wrap:
    o->f0c = size - rd;
    o->f14 = AD(b1, rd);
    o->f18 = AD(b2, rd);
    o->f10 = wr;
    o->f1c = AD(b1, 0);
    o->f20 = AD(b2, 0);
ret:
    return 0;
}

int frame_wadv_8c35ff90(Outer *m, int i, int n)
{
    Elem *e;
    Ring *r;
    int ret;
    int lk;

    ret = 0;
    e = m->elems;
    e += i;
    if (e->active == 0) return send_code_8c360c8c(m, 0xff000401);
    r = &e->sub.r;
    lock_8c360db4(&lk);
    r->f20 += n;
    if (r->f20 >= r->f1c) r->f20 -= r->f1c;
    r->f28 += n;
    if (r->f28 > r->f2c + r->f1c) ret = send_code_8c360c8c(m, 0xff000406);
    unlock_8c360dcc(&lk);
    return ret;
}

int frame_data_8c360010(Outer *m, int i, Info *o)
{
    Elem *e;
    Ring *r;
    int lk;
    int base;
    int cur;
    int bits;
    int size;
    int rd;
    int b1;
    int b2;
    int tot;
    int wr;
    int done;
    Ring * t36_101;
    int t36_75;
    int t36_110;

    {
        Arr *a = (Arr *)m->elems;
        e = &a->e[i];
    }
    if (e->active == 0) return send_code_8c360c8c(m, 0xff000401);
    t36_101 = &e->sub.r;
    r = t36_101;
    lock_8c360db4(&lk);
    base = r->f08;
    t36_110 = r->f0c;
    cur = r->f10;
    bits = t36_110;
    t36_75 = r->f14;
    b2 = r->f18;
    size = r->f1c;
    b1 = t36_75;
    wr = r->f20;
    rd = r->f24;
    tot = r->f28;
    done = r->f2c;
    unlock_8c360dcc(&lk);
    o->f00 = base;
    o->f04 = bits;
    o->f08 = cur;
    o->f24 = tot;
    if (0) wr++;
    o->f28 = done;
    if (0) b2++;
    if (tot <= done) {
        o->f0c = 0;
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto h36_28;
h36_28:
        /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
        goto h36_6;
h36_6:
        o->f14 = SZ(0);
        o->f18 = SZ(0);
        goto tail;
    }
    if (rd >= wr) goto wrap;
    if (0) i++;
    wr -= rd;
    o->f0c = wr;
    if (0) lk++;
    if (0) tot++;
    o->f14 = AD(b1, rd);
    o->f18 = AD(b2, rd);
tail:
    o->f10 = 0;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto z0;
z0:
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto z1;
z1:
    o->f1c = SZ(0);
    o->f20 = SZ(0);
    goto ret;
wrap:
    o->f0c = size - rd;
    o->f14 = AD(b1, rd);
    o->f18 = AD(b2, rd);
    o->f10 = wr;
    o->f1c = AD(b1, 0);
    o->f20 = AD(b2, 0);
ret:
    return 0;
}

int frame_radv_8c36013c(Outer *m, int i, int n)
{
    Elem *e;
    Ring *r;
    int ret;
    int lk;

    ret = 0;
    e = m->elems;
    e += i;
    if (e->active == 0) return send_code_8c360c8c(m, 0xff000401);
    r = &e->sub.r;
    lock_8c360db4(&lk);
    r->f24 += n;
    if (r->f24 >= r->f1c) r->f24 -= r->f1c;
    r->f2c += n;
    if (r->f2c > r->f28) ret = send_code_8c360c8c(m, 0xff000407);
    unlock_8c360dcc(&lk);
    return ret;
}

int elem_check_8c3601ba(Outer *m, int i)
{
    Elem *e;

    e = m->elems;
    e += i;
    if (e->active == 0) {
    }
    return 0;
}

int elem_check_8c3601ce(Outer *m, int i)
{
    Elem *e;

    e = m->elems;
    e += i;
    if (e->active == 0) {
    }
    return 0;
}
