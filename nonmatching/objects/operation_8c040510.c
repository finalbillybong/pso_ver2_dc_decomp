/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c040510
 * function: operation_8c040510
 * language: c
 * reference size: 164 bytes
 * compiled size: 164 bytes (+0.0%)
 * differing lines: 44 of 71 reference instruction lines
 * differing bytes: 31
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct S_vv6 S_vv6;
struct S_vv6 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern char g_8c2efec8[];
void operation_8c040510(void)
{
    int v2;
    int v3;
    float v1;
    int v5;
    float v9;
    S_vv6 *v6;
    float v4;
    int v7;
    v1 = 0.0f;
    v6 = (S_vv6 *)0x8c466fd8;
    for (v2 = 0; 4 > v2; v2++) {
        v9 = v1;
        v4 = 0.0f;
        v1 += 0.25f;
        for (v5 = 0; 4 > v5; v5++) {
            v6->f00 = v4;
            v6->f04 = v9;
            v4 += 0.25f;
            v6->f08 = v4;
            v6->f0c = v1;
            v6++;
        }
    }
    for (v7 = 0; 0x6e > v7; v7++) {
        v3 = v7 * 0x28;
        *(int *)((char *)(int *)(g_8c2efec8 + 4) + v3) = *(int *)((char *)0x8c2f0ffc + (*(int *)((char *)(int *)(g_8c2efec8 + 0x20) + v3) << 2));
        *(int *)((char *)0x8c466e20 + (v7 << 2)) = 0;
    }
}
