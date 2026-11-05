/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1334f0
 * function: operation_8c1334f0
 * language: c
 * reference size: 452 bytes
 * compiled size: 452 bytes (+0.0%)
 * differing lines: 150 of 210 reference instruction lines
 * differing bytes: 206
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, stack frame and spills, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern char *game_malloc_buffer_8c011e9c(int);
extern void call_8c3889a4(void *, void *, int);
char *operation_8c1334f0(char *base, int *pos, unsigned int *out, char *buf, int *sizep)
{
    char *h;
    char *p;
    char *dst;
    unsigned char *q;
    unsigned char *p1;
    unsigned char *p2;
    unsigned char *p3;
    int n;
    int off;
    unsigned int c;
    int *w;
    h = base + *pos;
    n = *(int *)(h + 4);
    off = 0;
    if (n & 3) {
        return 0;
    }
    *pos += 8;
    p = h + 8;
    *out = (*(unsigned int *)h & 0xff) << 24 | (*(unsigned int *)h & 0xff00) << 8 | (*(unsigned int *)h & 0xff0000) >> 8 | (*(unsigned int *)h & 0xff000000) >> 24;
    dst = buf == 0 ? game_malloc_buffer_8c011e9c(n) : buf;
    if (sizep != 0) {
        *sizep = n;
    }
    if (dst == 0) {
        return 0;
    }
    call_8c3889a4(dst, p, n);
    p += n;
    *pos += n;
    *pos += 4;
    if (*(int *)p == 0x30464f50) {
        call_8c3889a4(&n, p + 4, 4);
        *pos += 4;
        p += 8;
        while (n != 0) {
            (*pos)++;
            q = (unsigned char *)p++;
            n--;
            c = *q;
            switch (c & 0xc0) {
            case 0x40:
                off += (c & 0x3f) << 2;
                w = (int *)(dst + off);
                if (*w != 0) {
                    *w += (int)dst;
                }
                break;
            case 0x80:
                n--;
                (*pos)++;
                p1 = (unsigned char *)p++;
                off += ((*q & 0x3f) << 8 | *p1) << 2;
                w = (int *)(dst + off);
                if (*w != 0) {
                    *w += (int)dst;
                }
                break;
            case 0xc0:
                n -= 3;
                *pos += 3;
                p2 = (unsigned char *)p++;
                p3 = (unsigned char *)p++;
                off += ((*q & 0x3f) << 24 | *p1 << 16 | *p2 << 8 | *p3) << 2;
                w = (int *)(dst + off);
                if (*w != 0) {
                    *w += (int)dst;
                }
                break;
            }
        }
    }
    return dst;
}
