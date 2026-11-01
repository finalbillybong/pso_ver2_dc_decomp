/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c244b24
 * function: operation_8c244b24
 * language: c
 * reference size: 84 bytes
 * compiled size: 80 bytes (-4.8%)
 * differing lines: 2 of 37 reference instruction lines
 * differing bytes: 59
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern char g_8c510c9c[];
extern int lookup_low_id(int);
int operation_8c244b24(void)
{
    int v5;
    int v2;
    int v4;
    v5 = 1;
    for (v2 = 0; v2 < 4; v2++) {
        v4 = (v2 << 2) << 1;
        if (lookup_low_id(*(unsigned short *)(g_8c510c9c + v4)) != 0 && *(short *)((char *)(int *)(g_8c510c9c + 2) + v4) != 0) {
            v5 = 0;
            break;
        }
    }
    return v5;
}
