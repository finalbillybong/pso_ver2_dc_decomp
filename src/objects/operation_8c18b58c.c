typedef struct Bag {
    unsigned char items[100];
    int count;
} Bag;
typedef struct Entry {
    int value;
    int n;
} Entry;
typedef struct S_g8c4dbc80 {
    char unknown0[0x8];
    Entry *f08;
    char unknownc[0x4];
    int *f10;
} S_g8c4dbc80;
typedef struct S_g8c4dc5a4 S_g8c4dc5a4;
typedef struct Object {
    char unknown0[0x6];
    unsigned char f06;
    char unknown7[0x1];
    char f08;
    char f09;
} Object;
extern S_g8c4dbc80 *g_8c4dbc80;
extern S_g8c4dc5a4 *g_8c4dc5a4;
extern int call_8c18ba34(S_g8c4dc5a4 *);
extern int call_8c12b944(void);
static inline void bag_push(Bag *b, unsigned char v)
{
    if (b->count < 100) {
        b->items[b->count++] = v;
    }
}
static inline void bag_shuffle(Bag *b, int times)
{
    int n;
    int t;
    int j;
    unsigned char c;
    while (times-- > 0) {
        for (j = 0; j < (n = b->count);) {
            t = (int)((float)n * ((float)call_8c12b944() / 32768.0f));
            c = b->items[j];
            b->items[j++] = b->items[t];
            b->items[t] = c;
        }
    }
}
void operation_8c18b58c(Object *o)
{
    Bag bag;
    Entry *tab;
    int *lim;
    int k;
    int six;
    int idx;
    int hi;
    int lo;
    int i;
    int n;
    int off;
    int v;
    int r;
    int none;
    bag.count = 0;
    tab = g_8c4dbc80->f08;
    lim = g_8c4dbc80->f10;
    k = call_8c18ba34(g_8c4dc5a4);
    six = 6;
    idx = k * six;
    lo = *(int *)((char *)lim + (k << 3));
    hi = *(int *)((char *)(int *)((char *)lim + 4) + (k << 3));
    i = 0;
    while (i++ < six) {
        n = *(int *)((char *)(int *)((char *)tab + 4) + (idx << 3));
        off = idx << 3;
        for (; n != 0; n--) {
            bag_push(&bag, *(int *)((char *)tab + off));
        }
        idx++;
    }
    bag_shuffle(&bag, 3);
    none = -1;
    do {
        if (bag.count > 0) {
            v = (unsigned char)bag.items[--bag.count];
        } else {
            v = none;
        }
        if (v < 0) {
            v = 0;
            break;
        }
    } while (v == o->f06);
    o->f08 = v;
    o->f09 = 0;
    switch (v) {
    case 0:
        o->f09 = 0;
        break;
    default:
        r = (int)((float)(hi + 1) * ((float)call_8c12b944() / 32768.0f));
        if (lo > r) {
            r = lo;
        }
        o->f09 = *(int *)((char *)0x8c287570 + (r << 2));
        break;
    }
}
