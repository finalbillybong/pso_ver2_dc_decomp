/* SDK pool group 0x8c35f7e8 (Hitachi SHC): stream buffer layout: splits one
   buffer into eight channel areas and initialises each channel descriptor. */
typedef struct Pair {
    int a;
    int b;
} Pair;

typedef struct Item {
    int state;
    char unknown4[0x30];
} Item;

typedef struct Ring {
    int base;
    int size;
    int end;
    int n;
    int rd;
    int wr;
    int z[8];
} Ring;

typedef struct Frame {
    int base;
    int size;
    int format;
    int width;
    int height;
    int start;
    int end;
    int stride;
} Frame;

typedef union Sub {
    int w[14];
    Ring r;
    Frame f;
    struct {
        int w[4];
        Item items[16];
    } b;
    Pair pairs[3];
} Sub;

typedef struct Elem {
    int type;
    int active;
    int unknown8;
    int unknownc;
    Sub sub;
    int unknown360;
    int unknown364;
} Elem;

typedef struct Outer {
    char unknown0[0xc34];
    Elem elems[1];
} Outer;

typedef struct Info {
    int unknown0;
    int base;
    int sizes[8];
    int unit;
} Info;

void nop_8c35f7e8(void)
{
}

void nop_8c35f7ec(void)
{
}

void layout_offsets_8c35f880(int *dst, int *sizes, int base);
void init_ring_8c35f896(Elem *e, int *ofs, int *sizes, int k, int n);
void init_items_8c35f906(Elem *e, int *ofs, int *sizes, int k);
void init_flat_8c35f974(Elem *e, int *ofs, int *sizes, int k);
void init_pairs_8c35fa2a(Elem *e, int *ofs, int *sizes, int k);
void clear_pairs_8c35fa58(Sub *s);

void call_8c35f7f0(int a, Elem *e, Info *info)
{
    register int *sizes;
    register Elem *p;
    int ofs[8];
    int n;
    p = e;
    sizes = info->sizes;
    layout_offsets_8c35f880(ofs, sizes, info->base);
    n = sizes[0] % info->unit;
    init_ring_8c35f896(p, ofs, sizes, 0, n);
    init_ring_8c35f896(p, ofs, sizes, 1, 0x28000);
    init_ring_8c35f896(p, ofs, sizes, 2, 0x800);
    init_items_8c35f906(p, ofs, sizes, 3);
    init_flat_8c35f974(p, ofs, sizes, 4);
    init_items_8c35f906(p, ofs, sizes, 5);
    init_flat_8c35f974(p, ofs, sizes, 6);
    init_pairs_8c35fa2a(p, ofs, sizes, 7);
}

void layout_offsets_8c35f880(int *dst, int *sizes, int base)
{
    unsigned int i;
    int acc = base;
    for (i = 0; i < 8; i++) {
        dst[i] = acc;
        acc += sizes[i];
    }
}

void init_ring_8c35f896(Elem *e, int *ofs, int *sizes, int k, int n)
{
    int active;
    Ring *s;
    e += k;
    ofs += k;
    sizes += k;
    s = &e->sub.r;
    if (*sizes == 0) {
        n = 0;
        active = 0;
    } else {
        active = 1;
    }
    e->type = 0;
    e->active = active;
    e->unknown8 = 0;
    e->unknownc = 0;
    e->unknown360 = 9;
    e->unknown364 = 9;
    s->base = *ofs;
    s->size = *sizes - n;
    s->end = s->base + s->size;
    s->n = n;
    s->rd = s->base;
    s->wr = s->base;
    s->z[0] = 0;
    s->z[1] = 0;
    s->z[2] = 0;
    s->z[3] = 0;
    s->z[4] = 0;
    s->z[5] = 0;
    s->z[6] = 0;
    s->z[7] = 0;
}

void init_items_8c35f906(Elem *e, int *ofs, int *sizes, int k)
{
    int zero;
    int active;
    Sub *s;
    Item *it;
    e += k;
    ofs += k;
    sizes += k;
    zero = 0;
    if (*sizes == 0) active = zero;
    else active = 1;
    s = &e->sub;
    e->type = 1;
    e->active = active;
    e->unknown8 = zero;
    e->unknownc = zero;
    e->unknown360 = 9;
    e->unknown364 = 9;
    s->b.w[0] = *ofs;
    s->b.w[1] = *sizes;
    s->b.w[2] = zero;
    s->b.w[3] = zero;
    it = s->b.items;
    do {
        it->state = zero;
        it++;
    } while (it < &s->b.items[16]);
}

void init_flat_8c35f974(Elem *e, int *ofs, int *sizes, int k)
{
    Sub *s;
    int active;
    e += k;
    ofs += k;
    sizes += k;
    if (*sizes == 0) active = 0;
    else active = 1;
    s = &e->sub;
    e->type = 2;
    e->active = active;
    e->unknown8 = 0;
    e->unknownc = 0;
    e->unknown360 = 9;
    e->unknown364 = 9;
    s->w[0] = *ofs;
    s->w[1] = *sizes;
    s->w[2] = 0;
    s->w[3] = 0;
    s->w[4] = 0;
    s->w[5] = 0;
    s->w[6] = 0;
    s->w[7] = 0;
    s->w[8] = 0;
    s->w[9] = 0;
    s->w[10] = 0;
    s->w[11] = 0;
}

void set_format_8c35f9d0(Outer *o, int i, int w, int h, int fmt)
{
    Elem *el = o->elems;
    Frame *f;
    int base;
    int size;
    int bpl;
    el += i;
    f = &el->sub.f;
    base = f->base;
    size = f->size;
    if (h > 1) size /= h;
    bpl = (w + 7) / 8;
    f->width = w;
    f->height = h;
    f->format = fmt;
    f->start = base;
    f->end = base + size;
    f->stride = size / bpl;
}

void init_pairs_8c35fa2a(Elem *e, int *ofs, int *sizes, int k)
{
    Sub *s;
    e += k;
    s = &e->sub;
    e->type = 3;
    e->active = 1;
    e->unknown8 = 0;
    e->unknownc = 0;
    e->unknown360 = 9;
    e->unknown364 = 9;
    {
        clear_pairs_8c35fa58(s);
        return;
    }
}

void clear_pairs_8c35fa58(Sub *s)
{
    int i;
    Pair *t;
    for (i = 0; i < 3; i++) {
        t = &s->pairs[i];
        t->a = 0;
        t->b = 0;
    }
}

void set_pair_8c35fa70(Outer *o, int i, int j, Pair *in)
{
    Elem *el = o->elems;
    Sub *s;
    el += i;
    s = &el->sub;
    s->pairs[j] = *in;
}
