typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Rec {
    char f00;
    char f01;
    char f02;
    char pad3;
    char f04;
    char pad5[3];
    int w[3];
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
typedef struct S_g8c4dc294 {
    char unknown0[0x4];
    Table *f04;
} S_g8c4dc294;
extern int g_8c4dc5a4;
extern S_g8c4dc294 *g_8c4dc294;
extern int g_8c4dc288;
extern char g_8c4dc120[];
extern int call_8c18ff6c(void *, int);
extern int level_class_8c190268(int);
extern int level_class_8c190148(int);
extern int call_8c12b944(void);
extern void operation_1c7dd4(void *);
extern int operation_8c1900c0(void *);
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
void operation_8c18fde8(void)
{
    Frame frame;
    int n;
    Table *tab;
    int k;
    Pair *p;
    int i;
    unsigned char j;
    int none;
    int v;
    int c;
    n = level_class_8c190268(g_8c4dc5a4);
    if (n > 0) {
        frame.count = 0;
        k = level_class_8c190148(g_8c4dc5a4);
        tab = (Table *)((char *)g_8c4dc294->f04 + 8);
        c = tab->width;
        p = tab->rows;
        k = k * c << 1;
        p = (Pair *)((char *)p + k);
        i = 0;
        while (i++ < c) {
            j = p->times;
            while (j-- != 0) {
                bag_push(&frame, p->value);
            }
            p++;
        }
        c = 5;
        while (c-- > 0) {
            bag_shuffle(&frame);
        }
        c = 0;
        none = -1;
        while (c < n) {
            if (frame.count > 0) {
                v = (unsigned char)frame.items[--frame.count];
            } else {
                v = none;
            }
            if (v != none) {
                Rec rec;
                operation_1c7dd4(&rec);
                rec.f00 = 3;
                rec.f01 = 2;
                rec.f04 = *(int *)((char *)0x8c287650 + (v << 2));
                call_8c18ff6c(&rec, v);
                if (operation_8c1900c0(&rec) == 1) {
                    ((Block20 *)g_8c4dc120)[g_8c4dc288++] = *(Block20 *)&rec;
                    c++;
                }
            }
        }
    }
}
