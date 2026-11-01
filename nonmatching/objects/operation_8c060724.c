/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c060724
 * function: operation_8c060724
 * language: c
 * reference size: 76 bytes
 * compiled size: 76 bytes (+0.0%)
 * differing lines: 16 of 23 reference instruction lines
 * differing bytes: 39
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
extern int g_8c467a44;
extern int g_8c467a48;
extern int g_8c467a4c;
extern int g_8c467a50;
extern int g_8c467a54;
extern void operation_8c100aec(int);
void operation_8c060724(int a0)
{
    int v1;
    int t1;
    v1 = g_8c467a44;
    t1 = a0 + (g_8c467a48 + v1);
    g_8c467a50 = t1;
    g_8c467a4c = a0;
    g_8c467a48 = g_8c467a48;
    g_8c467a54 = (int)((float)t1 * 0.423333317f);
    operation_8c100aec(t1);
}
