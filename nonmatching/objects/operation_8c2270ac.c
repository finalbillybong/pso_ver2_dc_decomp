/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2270ac
 * function: operation_8c2270ac
 * language: c
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 48 of 62 reference instruction lines
 * differing bytes: 38
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
extern char g_8c337834[];
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(int, void *, int, int);
extern void operation_8c15700c(int, float);
extern void operation_8c157138(void *);
int operation_8c2270ac(void)
{
    int t1;
    t1 = operation_8c156c24((int)((void *)0x8c2e19a8), 6);
    add_wrapper_8c156d30(t1, (void *)((g_8c337834 + 0x1b)), 6, 3);
    add_wrapper_8c156d30(t1, (void *)((g_8c337834 + 0x2b)), 6, 5);
    add_wrapper_8c156d30(t1, (void *)((g_8c337834 + 0x3b)), 6, 7);
    add_wrapper_8c156d30(t1, (void *)((g_8c337834 + 0x53)), 6, 9);
    add_wrapper_8c156d30(t1, (void *)((g_8c337834 + 0x6d)), 6, 0xb);
    add_wrapper_8c156d30(t1, (void *)((g_8c337834 + 0x83)), 6, 0xd);
    operation_8c15700c(t1, 480.0f);
    operation_8c157138((void *)t1);
    return (int)(t1);
}
