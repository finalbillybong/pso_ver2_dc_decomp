/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09c5d8
 * function: operation_8c09c5d8
 * language: c
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 40 of 152 reference instruction lines
 * differing bytes: 20
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct State {
    int f00;
    char unknown4[0x34];
    short f38[12];
} State;
typedef struct Rec {
    int f00;
    char unknown4[0x3a8];
} Rec;
extern char g_8c2f5b38[];
extern Rec g_8c46b06c[16];
extern int operation_8c034c7c(State *);
extern int call_8c0356ac(int, int);
extern int operation_8c09c964(Rec *, State *);
static inline int conflict(State *s)
{
    Rec *r = g_8c46b06c;
    Rec *end = g_8c46b06c + 16;
    for (; end > r; r++) {
        if (r->f00 != 0 && operation_8c09c964(r, s) != 0) {
            return 1;
        }
    }
    return 0;
}
int operation_8c09c5d8(State *o, int a1)
{
    State s;
    int n;
    int cur;
    int i;
    int off;
    int j;
    int m;
    int t;
    s = *o;
    t = operation_8c034c7c(&s) * 0x2c;
    off = a1 << 1;
    n = *(short *)((char *)(t + g_8c2f5b38) + off);
    cur = *(short *)((char *)s.f38 + off);
    i = cur;
    do {
        i++;
        if (i >= n) {
            i = 0;
        }
        if (i == cur) {
            break;
        }
    } while (call_8c0356ac(a1, i) == 0);
    if (i != cur) {
        *(short *)((char *)s.f38 + off) = i;
        if (conflict(&s) == 0) {
            goto done;
        }
    }
    m = -1;
    j = cur;
    do {
        j--;
        if (!(j >= 0)) {
            j = n + m;
        }
        if (j == cur) {
            break;
        }
    } while (call_8c0356ac(a1, j) == 0);
    if (j != cur) {
        *(short *)((char *)s.f38 + off) = j;
        if (conflict(&s) == 0) {
            goto done;
        }
    }
    return 0;
done:
    *o = s;
    return 1;
}
