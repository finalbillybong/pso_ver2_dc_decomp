/* SDK pool group 0x8c342640-0x8c34283e (Hitachi SHC): buffer geometry and
   work-area size calculation helpers. */
typedef struct Spec {
    int a;
    int b;
    int w;
    int h;
    int extra;
    int pad[3];
    int level;
} Spec;

void geom_8c342640(int mode, int bits, int *w, int *h, int *s0, int *s1, int *s2, int *s3)
{
    int n = bits / 8;
    if (mode == 2) {
        *w = n;
        *h = 0;
        *s0 = n;
        *s1 = 0;
        *s2 = 0;
    } else {
        *w = (n + 0x800) / 0x800 * 0x800;
        *h = 0x10000;
        *s0 = *w - 0x10000;
        *s1 = 0x12000;
        *s2 = 0x12000;
    }
    *s3 = 0x80c0;
    /* dead use of bits: keeps it in r14 as in the reference */
    if (0) *s3 = bits;
}

void dims_8c3426a6(int a, int b, int *pa, int *pb, int *s0, int *s1)
{
    *s0 = (a / 2 + 0x1f) / 32 * 32;
    *s1 = b / 2;
    *pa = a;
    *pb = b;
}

void plane_size_8c3426da(a, b, c, d, e)
int a; int b; int c; int *d; int *e;
{
    int x0, x4, x8, xc;
    dims_8c3426a6(a, b, &x0, &x4, &x8, &xc);
    *d = (x8 * xc * 2 + x0 * x4) * 2 + 0x20;
    *e = x0 * x4 * 3 / 2 * c + 0x20;
}

int call_8c34273e(a, b, c, d, e)
int a; int b; int c; int d; int e;
{
    int l8, lc, l10, l14, l0, l4, l18, l1c;
    geom_8c342640(a, b, &l8, &lc, &l10, &l14, &l18, &l1c);
    plane_size_8c3426da(c, d, e, &l0, &l4);
    return l8 + lc + l10 + l14 + l0 + l4 + l18 + l1c + 0x20;
}

int pow2_size_8c3427b8(Spec *p)
{
    int n, k, v;
    if (p->level >= 4) {
        n = p->w > p->h ? p->w : p->h;
        if (n > 0) {
            n--;
            for (k = 0; n; k++) n >>= 1;
            v = 1 << k;
        } else {
            v = 0;
        }
        return v * v + 0x20;
    }
    return 0;
}

int spec_size_8c3427f8(Spec *p)
{
    int h;
    if (p->level >= 7) h = p->h * 2;
    else h = p->h;
    return call_8c34273e(p->a, p->b, p->w, h, p->extra);
}

int total_size_8c342822(p)
Spec *p;
{
    int r;
    r = spec_size_8c3427f8(p);
    r += pow2_size_8c3427b8(p);
    return r;
}
