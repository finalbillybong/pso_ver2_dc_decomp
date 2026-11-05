/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c060538
 * function: operation_8c060538
 * language: c
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 4 of 31 reference instruction lines
 * differing bytes: 9
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c467a58;
extern int g_8c467a5c;
extern int g_8c467a60;
extern int g_8c467a64;
extern int g_8c467a68;
extern int g_8c467a6c;
extern int g_8c467a70;
extern int g_8c467a74;
extern void operation_8c100b20(int);
void operation_8c060538(int a0)
{
    int v1;
    int v2;
    int v3;
    g_8c467a5c = a0;
    v1 = (int)g_8c467a58;
    v2 = (int)g_8c467a60;
    g_8c467a64 = v1 + a0 + v2;
    g_8c467a68 = v1 + v2;
    v2 = (int)((float)a0 * 2.36220479f);
    v3 = g_8c467a6c + v2;
    *(int *)0x8c467a70 = v2;
    g_8c467a74 = v3;
    operation_8c100b20(v3);
}
