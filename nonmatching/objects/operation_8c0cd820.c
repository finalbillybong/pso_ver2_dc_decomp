/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cd820
 * function: operation_8c0cd820
 * language: c
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 16 of 116 reference instruction lines
 * differing bytes: 111
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
void operation_8c0cd820(int a0, int a1, int a2)
{
    short *p;
    short c;
    int k;
    unsigned int n;
    unsigned short h;
    short *q;
    unsigned int m;
    unsigned int i;
    int j;
    int cnt;
    short s;
    short *v;
    int mask;
    mask = 0x3fff;
    p = (short *)a1;
    while ((c = *p++) != 0xff) {
        k = (short)(unsigned char)c;
        if (k < 8) {
            continue;
        }
        if (k < 0x10) {
            if ((*p++ & 0x1fff) == a2) {
                *(int *)0x8c46fa88 = 1;
            } else {
                *(int *)0x8c46fa88 = 0;
            }
            continue;
        }
        if (k < 0x40) {
            n = (unsigned short)*p++;
            p = (short *)((char *)p + (n << 1));
            continue;
        }
        h = *p;
        q = p + 1;
        p = q;
        if (*(int *)0x8c46fa88 != 0 && k == 0x41) {
            p++;
            **(int **)0x8c46fa80 = (int)q;
            (*(int **)0x8c46fa80)[1] = *(int *)0x8c46fa84;
            *(int *)0x8c46fa80 += 8;
            m = *q & mask;
            for (i = 0; i < m; i++) {
                s = *p++;
                if (s < 0) {
                    s = -s;
                }
                cnt = s;
                for (j = 0; j < cnt; j++) {
                    p++;
                    v = *(short **)0x8c46fa84;
                    *(short **)0x8c46fa84 = v + 1;
                    *v = *p++;
                    v = *(short **)0x8c46fa84;
                    *(short **)0x8c46fa84 = v + 1;
                    *v = *p++;
                }
            }
            continue;
        }
        p = (short *)((char *)p + (h << 1));
    }
}
