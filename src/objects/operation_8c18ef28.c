typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Rec {
    char f00;
    char f01;
    char f02;
    char pad3;
    int w[4];
} Rec;
typedef struct Frame {
    unsigned char items[100];
    int count;
} Frame;
typedef struct Pair {
    unsigned char value;
    unsigned char times;
} Pair;
typedef struct Table {
    Pair *rows;
    unsigned char width;
} Table;
typedef struct S_g8c4dbf64 {
    char *f00;
} S_g8c4dbf64;
extern int g_8c4dbf60;
extern S_g8c4dbf64 *g_8c4dbf64;
extern int g_8c4dc5a4;
extern int g_8c4dc5a8;
extern char g_8c4dbf68[];
extern int call_8c18f510(int);
extern int call_8c18f630(int);
extern int call_8c12b944(void);
extern void operation_1c7dd4(void *);
extern void call_8c1c936c(Rec *);
extern int operation_8c18f488(void *);
static inline void bag_push(Frame *b, unsigned char v)
{
    if (b->count < 100) {
        b->items[b->count++] = v;
    }
}
static inline void bag_shuffle(Frame *b)
{
    int n;
    int t;
    int j;
    unsigned char c;
    for (j = 0; j < (n = b->count);) {
        t = (int)((float)n * ((float)call_8c12b944() / 32768.0f));
        c = b->items[j];
        b->items[j++] = b->items[t];
        b->items[t] = c;
    }
}
void operation_8c18ef28(void)
{
    Frame frame;
    Rec rec;
    int n;
    Table *tab;
    int k;
    int width;
    Pair *p;
    int i;
    int none;
    int v;
    int g;
    frame.count = 0;
    n = call_8c18f510(g_8c4dc5a4);
    tab = (Table *)g_8c4dbf64->f00;
    k = call_8c18f630(g_8c4dc5a4);
    width = tab->width;
    p = tab->rows;
    k = k * width << 1;
    p = (Pair *)((char *)p + k);
    i = 0;
    while (i++ < width) {
        for (v = p->times; v != 0; v--) {
            bag_push(&frame, p->value);
        }
        p++;
    }
    v = 8;
    while (v-- > 0) {
        bag_shuffle(&frame);
    }
    i = 0;
    none = -1;
    while (i < n) {
        if (frame.count > 0) {
            v = (unsigned char)frame.items[--frame.count];
        } else {
            v = none;
        }
        if (v != none) {
            operation_1c7dd4(&rec);
            rec.f01 = rec.f00 = 1;
            if (g_8c4dc5a8 != 3) {
                rec.f02 = v;
            } else {
                g = g_8c4dc5a4;
                if (g >= 1 && 0x63 >= g) {
                    rec.f02 = v;
                } else if (g >= 0x64 && 0x96 >= g) {
                    v += 2;
                    rec.f02 = v;
                } else if (g >= 0x97 && 0xc8 >= g) {
                    v += 3;
                    rec.f02 = v;
                } else {
                    rec.f02 = v;
                }
            }
            call_8c1c936c(&rec);
            if (operation_8c18f488(&rec) == 1) {
                ((Block20 *)g_8c4dbf68)[g_8c4dbf60++] = *(Block20 *)&rec;
                i++;
            }
        }
    }
}
