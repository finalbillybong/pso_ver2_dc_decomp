/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c126480
 * function: operation_8c126480
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 68 of 54 reference instruction lines
 * differing bytes: 42
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern char g_8c4d83a8[];
void operation_8c126480(int a0, int a1)
{
    int i;
    for (i = 0; i < a1; i++) {
        int j;
        int *p;
        for (j = 0; (p = *(int **)((char *)(i * 0x2c + g_8c4d83a8) + (j << 2))) != 0; j++) {
            *p &= -9;
        }
    }
    for (; i < 4; i++) {
        int j;
        int *p;
        for (j = 0; (p = *(int **)((char *)(i * 0x2c + g_8c4d83a8) + (j << 2))) != 0; j++) {
            *p |= 8;
        }
    }
}
