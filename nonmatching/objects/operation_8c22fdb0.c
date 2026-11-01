/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22fdb0
 * function: operation_8c22fdb0
 * language: c
 * reference size: 564 bytes
 * compiled size: 576 bytes (+2.1%)
 * differing lines: 152 of 248 reference instruction lines
 * differing bytes: 457
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4[8];
    int f104;
};
extern char g_8c506528;
extern int call_8c18e8a0(int, int);
extern int call_8c18e768(int, int);
extern float call_8c12c714(float);
extern void play_se_8c05fbf8(int, int, int, int);
static inline int sqdist(int y1, int x1, int y0, int x0)
{
    int dy;
    int dx;
    dy = (char)y0 - (unsigned char)y1;
    dx = (unsigned char)x1 - (unsigned char)x0;
    return dy * dy + dx * dx;
}
void operation_8c22fdb0(Object *o, unsigned char *a1, int a2)
{
    int i;
    unsigned char c;
    int best;
    int best_id;
    int sum;
    int idx;
    char saved;
    int mode;
    int n;
    int x0;
    char g0;
    int x;
    int x1;
    char g1;
    mode = (unsigned char)a2;
    best = 0xff;
    best_id = 0xff;
    for (i = 0; (c = a1[idx = (unsigned char)i]) != 0xff; i++) {
        n = c;
        if (*(int *)((char *)(int *)((char *)o + 0xe4) + (n << 2)) == 0) {
            continue;
        }
        switch (mode) {
        case 0:
            x0 = call_8c18e8a0(n, 2);
            g0 = g_8c506528;
            sum = sqdist(call_8c18e768(n, 2), call_8c18e8a0((int)call_8c12c714((float)g0), 2), call_8c18e768(g0, 2), x0);
            if ((unsigned char)best > (unsigned char)sum) {
                best_id = a1[idx];
                best = sum;
            }
            break;
        case 1:
            saved = g_8c506528;
            switch (saved) {
            case 0:
            case 1:
                g_8c506528 += 8;
                break;
            case 2:
            case 3:
                if (o->f104 != 0) {
                    g_8c506528 += 6;
                } else {
                    g_8c506528 -= 4;
                }
                break;
            case 4:
            case 5:
                if (o->f104 != 0) {
                    g_8c506528 += 4;
                } else {
                    g_8c506528 -= 6;
                }
                break;
            case 6:
            case 7:
                g_8c506528 -= 8;
                break;
            }
            x = a1[idx];
            x1 = call_8c18e8a0(x, 2);
            g1 = g_8c506528;
            sum = sqdist(call_8c18e768(x, 2), call_8c18e8a0((int)call_8c12c714((float)g1), 2), call_8c18e768(g1, 2), x1);
            g_8c506528 = saved;
            if ((unsigned char)best > (unsigned char)sum) {
                best_id = a1[idx];
                best = sum;
            }
            break;
        }
    }
    if ((unsigned char)best_id != 0xff) {
        play_se_8c05fbf8(0x50000, 0, 0, 0);
        g_8c506528 = best_id;
    }
}
