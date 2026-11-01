/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c207b68
 * function: operation_8c207b68
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 2 of 39 reference instruction lines
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
extern int game_malloc_buffer_8c011e9c(int);
extern void memset_8c12b880(void *, int, int);
extern int g_8c504964;
extern int g_8c5049e8;
extern int g_8c5049ec;
void operation_8c207b68(void)
{
    int t1;
    int t2;
    t1 = game_malloc_buffer_8c011e9c(0x11d4);
    *(int *)0x8c504960 = (int)(t1);
    t2 = game_malloc_buffer_8c011e9c(0x124);
    g_8c504964 = (int)(t2);
    g_8c5049e8 = 0;
    g_8c5049ec = 0;
    *(int *)0x8c5049f0 = 0;
    memset_8c12b880((void *)((void *)0x8c504968), 0, 0x3c);
    memset_8c12b880((void *)((void *)0x8c5049a4), 0, 0x3c);
    *(int *)0x8c5049e0 = 0;
    *(int *)0x8c5049e4 = 0;
    *(int *)0x8c505960 = 0;
}
