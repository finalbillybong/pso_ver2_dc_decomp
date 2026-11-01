/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09f060
 * function: operation_8c09f060
 * language: c
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 8 of 83 reference instruction lines
 * differing bytes: 5
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ed68 S_g8c46ed68;
typedef struct S_g8c46ed6c S_g8c46ed6c;
typedef struct S_vv28 S_vv28;
struct S_vv28 {
    int f00;
};
extern int g_8c46ed60;
extern int g_8c46ed64;
extern S_g8c46ed68 *g_8c46ed68;
extern S_g8c46ed6c *g_8c46ed6c;
extern int g_8c4703c0;
extern char g_8c302018[];
extern int get_game_mode_8c01c25c(void);
extern int operation_8c105380(void *, void *);
void operation_8c09f060(void)
{
    S_vv28 *v28;
    char *v27;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    g_8c46ed64 = 0;
    g_8c46ed68 = (S_g8c46ed68 *)0;
    if (g_8c46ed6c != 0) {
        t1 = get_game_mode_8c01c25c();
        switch (t1) {
        case 16:
            if (g_8c4703c0 == 3) {
                t2 = operation_8c105380((void *)((void *)g_8c302018), g_8c46ed6c);
                g_8c46ed68 = (S_g8c46ed68 *)(int)(t2);
                goto L_8c09f0ee;
            }
            t3 = operation_8c105380((void *)((g_8c302018 + 0x17)), g_8c46ed6c);
            g_8c46ed68 = (S_g8c46ed68 *)(int)(t3);
            break;
        case 15:
            if (g_8c4703c0 == 3) {
                t4 = operation_8c105380((void *)((g_8c302018 + 0x2a)), g_8c46ed6c);
                g_8c46ed68 = (S_g8c46ed68 *)(int)(t4);
                goto L_8c09f0ee;
            }
            t5 = operation_8c105380((void *)((g_8c302018 + 0x42)), g_8c46ed6c);
            g_8c46ed68 = (S_g8c46ed68 *)(int)(t5);
            break;
        default:
            t6 = operation_8c105380((void *)((void *)g_8c302018), g_8c46ed6c);
            g_8c46ed68 = (S_g8c46ed68 *)(int)(t6);
            break;
        }
L_8c09f0ee:;
        v28 = (S_vv28 *)g_8c46ed68;
        if (v28 != 0) {
            g_8c46ed60 = g_8c46ed64 = (int)v28->f00;
        }
    }
}
