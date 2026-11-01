/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18ec00
 * function: operation_8c18ec00
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 22 of 85 reference instruction lines
 * differing bytes: 18
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern char *g_8c4dbf40;
extern int call_8c18e8a0(int, int);
extern int call_8c18e768(int, int);
void operation_8c18ec00(int n, unsigned char w)
{
    unsigned int j;
    int pm2;
    unsigned int k;
    int pm3;
    int pm5;
    int pm6;
    unsigned char buf[16];
    int width;
    if (0 == n) {
        unsigned int i;
        for (i = 0; i < w; i++) {
            *g_8c4dbf40++ = '0';
        }
        *g_8c4dbf40 = (char)0;
        return;
    }
    if (!(0 <= n)) {
        n = -1 * n;
        *g_8c4dbf40++ = '-';
    }
    pm3 = 0;
    width = (int)w;
    j = (unsigned int)pm3;
    for (; j < width; ) {
        pm3 = call_8c18e8a0(n, 10);
        pm5 = pm3;
        buf[j] = pm5;
        pm2 = call_8c18e768(n, 10);
        pm6 = pm2;
        j++;
        n = pm6;
    }
    for (k = 0; k < width; k++) {
        pm3 = -1;
        pm5 = pm3;
        *g_8c4dbf40++ = *(unsigned char *)((char *)(width - k) + (int)(&buf[pm5])) + '0';
    }
    *g_8c4dbf40 = (unsigned char)(0);
}
