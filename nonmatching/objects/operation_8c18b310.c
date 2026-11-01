/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18b310
 * function: operation_8c18b310
 * language: c
 * reference size: 292 bytes
 * compiled size: 292 bytes (+0.0%)
 * differing lines: 10 of 133 reference instruction lines
 * differing bytes: 5
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Bag {
    unsigned char items[100];
    int count;
} Bag;
typedef struct Entry {
    int value;
    int n;
} Entry;
typedef struct S_g8c4dbc80 {
    char unknown0[0x14];
    Entry *f14;
} S_g8c4dbc80;
typedef struct S_g8c4dc5a4 S_g8c4dc5a4;
typedef struct Object {
    char unknown0[0x4];
    char f04;
} Object;
extern S_g8c4dbc80 *g_8c4dbc80;
extern S_g8c4dc5a4 *g_8c4dc5a4;
extern int operation_8c18b904(S_g8c4dc5a4 *);
extern int rand(void);
extern char call_8c163370(int);
static inline void bag_push(Bag *b, int v)
{
    if (b->count < 100) {
        b->items[b->count++] = v;
    }
}
static inline void bag_shuffle(Bag *b, int times)
{
    int j;
    int t;
    int n;
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
static inline int bag_pop(Bag *b)
{
    if (b->count > 0) {
        return (unsigned char)b->items[--b->count];
    }
    return -1;
}
void operation_8c18b310(Object *o)
{
    Bag bag;
    Entry *tab;
    int three;
    int idx;
    int i;
    int n;
    int off;
    bag.count = 0;
    tab = g_8c4dbc80->f14;
    idx = operation_8c18b904(g_8c4dc5a4);
    three = 3;
    idx *= three;
    i = 0;
    while (i++ < three) {
        n = *(int *)((char *)(int *)((char *)tab + 4) + (idx << 3));
        off = idx << 3;
        for (; n != 0; n--) {
            bag_push(&bag, *(int *)((char *)tab + off));
        }
        idx++;
    }
    bag_shuffle(&bag, three);
    switch (bag_pop(&bag)) {
    case 1:
        o->f04 = call_8c163370(0);
        break;
    case 2:
        o->f04 = call_8c163370(1);
        break;
    case 0:
    default:
        o->f04 = 0;
        break;
    }
}
