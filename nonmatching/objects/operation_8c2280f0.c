/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2280f0
 * function: operation_8c2280f0
 * language: c
 * reference size: 176 bytes
 * compiled size: 180 bytes (+2.3%)
 * differing lines: 22 of 61 reference instruction lines
 * differing bytes: 114
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c506288 S_g8c506288;
extern S_g8c506288 *g_8c506288;
extern char g_8c50628c;
extern void call_8c227e10(int, void *, float, float);
static inline void draw_mark(int c, float x, float y)
{
    call_8c227e10(c, g_8c506288, x, y);
}
void operation_8c2280f0(void)
{
    if (g_8c50628c == 0) {
        g_8c506288 = (S_g8c506288 *)0;
        g_8c50628c = 1;
    }
    call_8c227e10(-0xff5db3, g_8c506288, 544.0f, 365.0f);
    call_8c227e10(-0x675a00, g_8c506288, 499.0f, 390.0f);
    draw_mark(-0x3cbcb8, 544.0f, 415.0f);
    draw_mark(-0xba9114, 589.0f, 390.0f);
    if ((int)(g_8c506288) == -1) {
        g_8c506288 = (S_g8c506288 *)-1;
        return;
    }
    g_8c506288 = (S_g8c506288 *)((int)g_8c506288 + 1);
}
