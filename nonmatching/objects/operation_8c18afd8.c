/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18afd8
 * function: operation_8c18afd8
 * language: c
 * reference size: 584 bytes
 * compiled size: 584 bytes (+0.0%)
 * differing lines: 28 of 250 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Rec {
    char f00;
    char f01;
    char f02;
    char pad3[7];
    char f0a;
    char f0b;
    int w[2];
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
typedef struct S_g8c4dbc80 {
    Table *f00;
} S_g8c4dbc80;
extern S_g8c4dbc80 *g_8c4dbc80;
extern int g_8c4dbdc4;
extern int g_8c4dbdc8;
extern int g_8c4dbdcc;
extern int g_8c4dc5a0;
extern int g_8c4dc5a4;
extern char g_8c287290[];
extern char g_8c2874d0[];
extern char g_8c287520[];
extern char g_8c4dbc84[];
extern int operation_8c18b764(int);
extern int operation_8c18b7b4(int);
extern int rand(void);
extern void operation_1c7dd4(void *);
extern void call_8c18b220(Rec *);
extern void call_8c18b310(Rec *);
extern void operation_8c18b434(Rec *);
extern void operation_8c18b58c(Rec *);
extern int operation_8c18b6e8(void *);
extern void call_8c1cc8e4(void *, void *, int);
static inline void bag_push(Frame *b, unsigned char v)
{
    if (b->count < 100) {
        b->items[b->count++] = v;
    }
}
static inline void bag_shuffle(Frame *b, int times)
{
    int n;
    int t;
    int j;
    unsigned char c;
    while (times-- > 0) {
        for (j = 0; j < (n = b->count);) {
            t = (int)((float)n * ((float)rand() / 32768.0f));
            c = b->items[j];
            b->items[j++] = b->items[t];
            b->items[t] = c;
        }
    }
}
void operation_8c18afd8(void)
{
    Frame frame;
    Rec rec;
    int k;
    Table *tab;
    int width;
    Pair *p;
    int i;
    unsigned char j;
    int none;
    int v;
    int off;
    if (g_8c4dbc80 == 0) {
        return;
    }
    if (g_8c4dbdcc != 0) {
        return;
    }
    g_8c4dbdcc = 1;
    g_8c4dbdc4 = 0;
    g_8c4dbdc8 = 0;
    g_8c4dbdc4 = operation_8c18b764(g_8c4dc5a4);
    frame.count = 0;
    k = operation_8c18b7b4(g_8c4dc5a4);
    tab = (Table *)((char *)g_8c4dbc80->f00 + (k << 3));
    width = tab->width;
    p = tab->rows;
    p = (Pair *)((char *)p + (width * g_8c4dc5a0 << 1));
    i = 0;
    while (i++ < width) {
        for (j = p->times; j != 0; j--) {
            bag_push(&frame, p->value);
        }
        p++;
    }
    bag_shuffle(&frame, 4);
    none = -1;
    while (g_8c4dbdc8 < g_8c4dbdc4) {
        if (frame.count > 0) {
            v = (unsigned char)frame.items[--frame.count];
        } else {
            v = none;
        }
        if (v != none) {
            operation_1c7dd4(&rec);
            if (v == 0x39) {
                off = g_8c4dc5a0 << 3;
                if (*(int *)(g_8c2874d0 + off) != none) {
                    rec.f00 = 0;
                    rec.f01 = *(int *)(g_8c2874d0 + off);
                    rec.f02 = *(int *)((char *)(int *)(g_8c2874d0 + 4) + off);
                }
            } else if (v == 0x3a) {
                off = g_8c4dc5a0 << 3;
                if (*(int *)(g_8c287520 + off) != none) {
                    rec.f00 = 0;
                    rec.f01 = *(int *)(g_8c287520 + off);
                    rec.f02 = *(int *)((char *)(int *)(g_8c287520 + 4) + off);
                }
            } else {
                rec.f00 = 0;
                v <<= 3;
                rec.f01 = *(int *)(g_8c287290 + v);
                rec.f02 = *(int *)((char *)(int *)(g_8c287290 + 4) + v);
            }
            call_8c18b220(&rec);
            call_8c18b310(&rec);
            operation_8c18b434(&rec);
            operation_8c18b58c(&rec);
            rec.f0a = 0;
            rec.f0b = 0;
            if (operation_8c18b6e8(&rec) == 1) {
                ((Block20 *)g_8c4dbc84)[g_8c4dbdc8++] = *(Block20 *)&rec;
            }
        }
    }
    call_8c1cc8e4(g_8c4dbc84, (void *)g_8c4dbdc8, 2);
}
