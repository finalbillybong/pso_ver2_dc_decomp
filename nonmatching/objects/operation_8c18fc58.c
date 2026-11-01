/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18fc58
 * function: operation_8c18fc58
 * language: c
 * reference size: 400 bytes
 * compiled size: 400 bytes (+0.0%)
 * differing lines: 58 of 177 reference instruction lines
 * differing bytes: 32
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
typedef struct S_g8c4dc294 {
    char unknown0[0x4];
    Table *f04;
} S_g8c4dc294;
extern int g_8c4dc5a4;
extern S_g8c4dc294 *g_8c4dc294;
extern int g_8c4dc288;
extern char g_8c4dc120[];
extern char g_8c2875d0[];
extern int level_class_8c190208(int);
extern int level_class_8c190148(int);
extern int rand(void);
extern void operation_1c7dd4(void *);
extern int operation_8c190050(void *);
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
        t = (int)((float)n * ((float)rand() / 32768.0f));
        c = b->items[j];
        b->items[j++] = b->items[t];
        b->items[t] = c;
    }
}
void operation_8c18fc58(void)
{
    Frame frame;
    Rec rec;
    int n;
    Table *tab;
    int k;
    Pair *p;
    int i;
    unsigned char j;
    int none;
    int v;
    int m;
    int off;
    int c;
    n = level_class_8c190208(g_8c4dc5a4);
    if (n > 0) {
        frame.count = 0;
        k = level_class_8c190148(g_8c4dc5a4);
        tab = g_8c4dc294->f04;
        v = tab->width;
        p = tab->rows;
        k = k * v << 1;
        p = (Pair *)((char *)p + k);
        i = 0;
        while (i++ < v) {
            j = p->times;
            while (j-- != 0) {
                bag_push(&frame, p->value);
            }
            p++;
        }
        v = 8;
        while (v-- > 0) {
            bag_shuffle(&frame);
        }
        m = n;
        c = 0;
        none = -1;
        while (c < n) {
            if (frame.count > 0) {
                v = (unsigned char)frame.items[--frame.count];
            } else {
                v = none;
            }
            if (v == 15) {
                if (m == n) {
                    n--;
                }
            } else if (v != none) {
                operation_1c7dd4(&rec);
                rec.f00 = 3;
                off = v << 3;
                rec.f01 = *(int *)(g_8c2875d0 + off);
                rec.f02 = *(int *)((char *)(int *)(g_8c2875d0 + 4) + off);
                if (operation_8c190050(&rec) == 1) {
                    ((Block20 *)g_8c4dc120)[g_8c4dc288++] = *(Block20 *)&rec;
                    c++;
                }
            }
        }
    }
}
