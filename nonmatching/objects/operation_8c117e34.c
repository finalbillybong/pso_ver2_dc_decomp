/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c117e34
 * function: operation_8c117e34
 * language: c
 * reference size: 440 bytes
 * compiled size: 440 bytes (+0.0%)
 * differing lines: 126 of 200 reference instruction lines
 * differing bytes: 108
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Partial {
    float amp;
    int f04;
} Partial;
typedef struct Wave {
    int flags;
    char unknown04[0x10];
    unsigned int count;
    Partial p[4];
    char unknown38[0x2];
    struct {
        unsigned char a;
        unsigned char b;
    } h[8];
} Wave;
extern void call_8c1224c8(Wave *, float *);
extern float njSin_8c37eb0c(int);
extern int call_8c18e768(int, int);
static inline void clear(float *out)
{
    int i;
    for (i = 0; i < 0x100; i++) {
        *(float *)((char *)out + (i << 2)) = 0.0f;
    }
}
void operation_8c117e34(int a0, Wave *w, float *out)
{
    int flags;
    unsigned int k;
    int j;
    int state;
    int cnt;
    int phase;
    int step;
    float amp;
    float base;
    int n1;
    int n0;
    int per;
    int b;
    flags = w->flags;
    if (flags & 1) {
        call_8c1224c8(w, out);
        return;
    }
    if (flags & 2) {
        clear(out);
        b = -0x4000;
        for (k = 0; k < w->count; k++) {
            amp = *(float *)((char *)w->p + (k + 1 << 3)) * 0.5f;
            phase = b + (*(unsigned char *)((char *)&w->h[0].a + (k << 1)) << 9);
            step = (float)*(unsigned char *)((char *)&w->h[0].b + (k << 1)) / 32.0f * 65536.0f / 128.0f;
            for (j = 0x7f; j >= 0; j--) {
                *(float *)((char *)out + (j << 2)) += amp * (njSin_8c37eb0c(phase) + 1.0f);
                phase += step;
            }
        }
        return;
    }
    if (flags & 4) {
        clear(out);
        amp = w->p[2].amp * 0.5f;
        n1 = w->h[0].b;
        base = w->p[1].amp;
        per = call_8c18e768(0x10000, n1);
        n0 = w->h[0].a;
        state = 0;
        cnt = 0;
        for (j = 0x7f; j >= 0;) {
            if (state == 0) {
                *(float *)((char *)out + (j << 2)) = amp * (njSin_8c37eb0c(-0x4000 + cnt * per) + 1.0f) + base;
                cnt++;
                j--;
                if (cnt >= n1) {
                    cnt = 0;
                    state = 1;
                }
            } else {
                *(float *)((char *)out + (j << 2)) = base;
                cnt++;
                j--;
                if (cnt >= n0) {
                    cnt = 0;
                    state = 0;
                }
            }
        }
    }
}
