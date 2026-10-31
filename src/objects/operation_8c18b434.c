typedef struct Bag {
    unsigned char items[100];
    int count;
} Bag;
typedef struct Entry {
    int value;
    int n;
} Entry;
typedef struct S_g8c4dbc80 {
    char unknown0[0x4];
    Entry *f04;
    char unknown8[0x4];
    int *f0c;
} S_g8c4dbc80;
typedef struct S_g8c4dc5a4 S_g8c4dc5a4;
typedef struct Object {
    char unknown0[0x6];
    char f06;
    char f07;
} Object;
extern S_g8c4dbc80 *g_8c4dbc80;
extern S_g8c4dc5a4 *g_8c4dc5a4;
extern int call_8c18b994(S_g8c4dc5a4 *);
extern int call_8c12b944(void);
static inline void bag_push(Bag *b, int v)
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
static inline int bag_pop(Bag *b)
{
    if (b->count > 0) {
        return (unsigned char)b->items[--b->count];
    }
    return -1;
}
void operation_8c18b434(Object *o)
{
    Bag bag;
    Entry *tab;
    int *lim;
    int k;
    int six;
    int idx;
    int lo;
    int hi;
    int i;
    int n;
    int off;
    int v;
    int r;
    bag.count = 0;
    tab = g_8c4dbc80->f04;
    lim = g_8c4dbc80->f0c;
    k = call_8c18b994(g_8c4dc5a4);
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
    v = bag_pop(&bag);
    if (v != -1) {
        o->f06 = v;
        o->f07 = 0;
    } else {
        v = 0;
        o->f06 = v;
        o->f07 = v;
    }
    switch (v) {
    case 0:
        o->f07 = 0;
        break;
    default:
        r = (int)((float)(hi + 1) * ((float)call_8c12b944() / 32768.0f));
        if (lo > r) {
            r = lo;
        }
        o->f07 = *(int *)((char *)0x8c287570 + (r << 2));
        break;
    }
}
