typedef struct Pad {
    unsigned char cur;
    unsigned char edge;
    unsigned char keys[6];
    unsigned char news[6];
    char f0e;
    char f0f;
} Pad;
typedef struct Pair {
    unsigned char a;
    char b;
} Pair;
typedef struct Rep {
    char unknown0[0x20];
    short count[10];
    int bits;
} Rep;
extern Pad *g_8c41ccfc;
extern Pair *g_8c41cd00;
extern Pad g_8c41ccec;
extern char g_8c41cba0[];
extern Pad *pd_init_print_banner_8c36aa08(void *);
extern Pair *call_8c36a9fe(void *);
extern void operation_8c01d8d4(void *);
void operation_8c01dea8(void)
{
    int port;
    int i;
    int j;
    int n;
    unsigned char prev;
    unsigned char c;
    Pair *q;
    Pad *src;
    int k;
    Rep *r;
    g_8c41cd00 = 0;
    for (port = 0; port < 4; port++) {
        k = port << 2;
        g_8c41ccfc = pd_init_print_banner_8c36aa08(*(void **)((char *)0x8c2e34e0 + k));
        if (g_8c41ccfc != 0) {
            g_8c41cd00 = call_8c36a9fe(*(void **)((char *)0x8c2e34e0 + k));
            break;
        }
    }
    if (g_8c41ccfc == 0) {
        g_8c41ccfc = (Pad *)0x8c2e34a4;
    }
    q = g_8c41cd00;
    if (q != 0) {
        g_8c41ccec.f0e = q->a;
        g_8c41ccec.f0f = q->b;
    } else {
        g_8c41ccec.f0e = 2;
        g_8c41ccec.f0f = 5;
    }
    prev = g_8c41ccec.cur;
    g_8c41ccec.cur = (src = g_8c41ccfc)->cur;
    k = src->cur;
    g_8c41ccec.edge = (k ^ prev) & k;
    n = 0;
    for (i = 0; i < 6; i++) {
        c = *((unsigned char *)src->keys + i);
        for (j = 0; j < 6; j++) {
            if (*((unsigned char *)g_8c41ccec.keys + j) == c) {
                break;
            }
        }
        if (j == 6) {
            *((unsigned char *)g_8c41ccec.news + n++) = c;
        }
        *((unsigned char *)g_8c41ccec.keys + i) = c;
    }
    for (; n < 6; n++) {
        *((unsigned char *)g_8c41ccec.news + n) = 0;
    }
    r = (Rep *)(g_8c41cba0 + 0x110);
    operation_8c01d8d4(r);
    {
        short v = r->count[0];
        if (r->bits & 0x10) {
            v++;
        } else {
            v = 0;
        }
        r->count[0] = v;
    }
    {
        short v = r->count[1];
        if (r->bits & 0x20) {
            v++;
        } else {
            v = 0;
        }
        r->count[1] = v;
    }
    {
        short v = r->count[2];
        if (r->bits & 0x40) {
            v++;
        } else {
            v = 0;
        }
        r->count[2] = v;
    }
    {
        short v = r->count[3];
        if (r->bits & 0x80) {
            v++;
        } else {
            v = 0;
        }
        r->count[3] = v;
    }
    {
        short v = r->count[4];
        if (r->bits & 0x100000) {
            v++;
        } else {
            v = 0;
        }
        r->count[4] = v;
    }
    {
        short v = r->count[5];
        if (r->bits & 0x200000) {
            v++;
        } else {
            v = 0;
        }
        r->count[5] = v;
    }
    {
        short v = r->count[6];
        if (r->bits & 0x400000) {
            v++;
        } else {
            v = 0;
        }
        r->count[6] = v;
    }
    {
        short v = r->count[7];
        if (r->bits & 0x800000) {
            v++;
        } else {
            v = 0;
        }
        r->count[7] = v;
    }
    {
        short v = r->count[8];
        if (r->bits & 0x20000) {
            v++;
        } else {
            v = 0;
        }
        r->count[8] = v;
    }
    {
        short v = r->count[9];
        if (r->bits & 0x10000) {
            v++;
        } else {
            v = 0;
        }
        r->count[9] = v;
    }
}
