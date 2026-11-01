/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c242284
 * function: operation_8c242284
 * language: c
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 18 of 100 reference instruction lines
 * differing bytes: 126
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
typedef struct Frame Frame;
struct Frame {
    short f00;
    char unknown2[0x16];
};
static inline int lookup_8c242284(unsigned short id)
{
    if (id == 0xffff) {
        return 0;
    }
    if (id >= 0xc) {
        return 0;
    }
    return *(int *)((char *)0x8c510c40 + (id << 2));
}
int operation_8c242284(int a0)
{
    unsigned short buf[12];
    int v1;
    int i;
    int j;
    int k;
    int n;
    unsigned short c;
    v1 = 0xffff;
    i = 0;
    if ((unsigned short)a0 == (unsigned short)v1) {
        return 0;
    }
    for (j = 0; j < 0xc; j++) {
        *(short *)((char *)buf + (j << 1)) = v1;
    }
    buf[0] = lookup_8c242284(a0);
    for (;;) {
        c = *(unsigned short *)((char *)buf + (i << 1)) & 0xffff;
        if (c == 0xffff) {
            break;
        }
        n = lookup_8c242284(c);
        if ((unsigned short)n == (unsigned short)a0) {
            return 1;
        }
        for (k = 0; k < i; k++) {
            if ((unsigned short)n == (*(unsigned short *)((char *)buf + (k << 1)) & 0xffff)) {
                return 0;
            }
        }
        if (++i >= 0xc) {
            break;
        }
        *(short *)((char *)buf + (i << 1)) = n;
    }
    return 0;
}
