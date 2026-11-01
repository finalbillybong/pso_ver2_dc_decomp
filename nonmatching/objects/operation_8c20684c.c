/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20684c
 * function: operation_8c20684c
 * language: c
 * reference size: 360 bytes
 * compiled size: 356 bytes (-1.1%)
 * differing lines: 192 of 164 reference instruction lines
 * differing bytes: 288
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Lz {
    unsigned char ring[0x7220];
    unsigned char *src;
    unsigned char *dst;
    unsigned char *end;
} Lz;
typedef struct Pack {
    int f00;
    int size;
    unsigned char data[1];
} Pack;
static inline int lz_eof(Lz *o)
{
    return o->src > o->end;
}
int operation_8c20684c(Lz *o, Pack *a1, int a2, unsigned char *a3)
{
    int i;
    unsigned int flags;
    int r;
    unsigned int c;
    unsigned int j;
    unsigned int k;
    unsigned int n;
    int e;
    unsigned char **ps;
    unsigned char **pd;
    n = a1->size;
    flags = 0;
    o->src = a1->data;
    r = 0xfee;
    o->dst = a3;
    o->end = a1->data + n;
    for (i = 0; i < r; i++) {
        o->ring[i] = 0;
    }
    ps = &o->src;
    pd = &o->dst;
    for (;;) {
        flags >>= 1;
        if ((flags & 0x100) == 0) {
            c = *(*ps)++;
            e = o->src > o->end;
            if (e) {
                break;
            }
            flags = (unsigned char)c | 0xff00;
        }
        if (flags & 1) {
            c = *(*ps)++;
            e = o->src > o->end;
            if (e) {
                break;
            }
            *(*pd)++ = c;
            o->ring[(short)r] = c;
            r = (r + 1) & 0xfff;
        } else {
            j = *(*ps)++;
            e = o->src > o->end;
            if (e) {
                break;
            }
            c = *(*ps)++;
            e = o->src > o->end;
            if (e) {
                break;
            }
            j |= (c & 0xf0) << 4;
            n = (c & 0xf) + 2;
            for (k = 0; k <= n; k++) {
                c = o->ring[(j + k) & 0xfff];
                *(*pd)++ = c;
                o->ring[(short)r] = c;
                r = (r + 1) & 0xfff;
            }
        }
    }
    return o->dst - a3;
}
