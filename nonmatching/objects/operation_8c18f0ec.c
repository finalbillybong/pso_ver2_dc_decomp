/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18f0ec
 * function: operation_8c18f0ec
 * language: c
 * reference size: 448 bytes
 * compiled size: 448 bytes (+0.0%)
 * differing lines: 48 of 195 reference instruction lines
 * differing bytes: 26
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
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
extern int call_8c18f570(int);
extern int call_8c18f630(int);
extern int rand(void);
extern void operation_1c7dd4(void *);
extern int operation_8c18f418(void *);
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
static inline int bag_pop(Frame *b)
{
    if (b->count > 0) {
        return (unsigned char)b->items[--b->count];
    }
    return -1;
}
void operation_8c18f0ec(void)
{
    Frame frame;
    Rec rec;
    int n;
    Table *tab;
    int k;
    int width;
    Pair *p;
    int i;
    int j;
    int none;
    int v;
    int g;
    frame.count = 0;
    n = call_8c18f570(g_8c4dc5a4);
    tab = (Table *)(g_8c4dbf64->f00 + 8);
    k = call_8c18f630(g_8c4dc5a4);
    width = tab->width;
    p = tab->rows;
    p = (Pair *)((char *)p + (k * width << 1));
    i = 0;
    while (i++ < width) {
        for (j = p->times; j != 0; j--) {
            bag_push(&frame, p->value);
        }
        p++;
    }
    bag_shuffle(&frame, 8);
    i = 0;
    none = -1;
    while (i < n) {
        v = bag_pop(&frame);
        if (v != none) {
            operation_1c7dd4(&rec);
            rec.f00 = 1;
            rec.f01 = 2;
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
            if (operation_8c18f418(&rec) == 1) {
                ((Block20 *)g_8c4dbf68)[g_8c4dbf60++] = *(Block20 *)&rec;
                i++;
            }
        }
    }
}
