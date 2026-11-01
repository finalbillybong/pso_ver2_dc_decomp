/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c218c94
 * function: operation_8c218c94
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 4 of 62 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern int operation_8c219834(void *, int, unsigned int);
int operation_8c218c94(int a0, unsigned short *a1, int a2, int a3, register int a4)
{
    int i;
    int sum;
    unsigned int r;
    int c;
    int j;
    int n;
    int k;
    sum = 0;
    for (i = 0; a3 != (j = (unsigned char)i); i++) {
        sum += *(unsigned short *)((char *)a1 + ((j * a4 + a2) << 1)) & 0xffff;
    }
    if (sum == 0) {
        return 0xff;
    }
    r = operation_8c219834((void *)a0, sum, 3);
    for (n = 0; a3 != (k = (unsigned char)n); n++) {
        c = *(unsigned short *)((char *)a1 + ((k * a4 + a2) << 1)) & 0xffff;
        if (c != 0) {
            if ((unsigned int)c > r) {
                return n;
            }
            r -= c;
        }
    }
    return 0xff;
}
