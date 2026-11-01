/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0422d4
 * function: operation_8c0422d4
 * language: c
 * reference size: 436 bytes
 * compiled size: 432 bytes (-0.9%)
 * differing lines: 268 of 207 reference instruction lines
 * differing bytes: 349
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, stack frame and spills; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Rgb {
    unsigned char lo;
    unsigned char mid;
    unsigned char hi;
} Rgb;
static inline void decode(int px, unsigned char *c)
{
    *c++ = px & 0x1f & 0xff;
    *c++ = (px & 0x7e0) >> 5 & 0xff;
    *c = (px & 0xf800) >> 11 & 0xff;
}
void operation_8c0422d4(unsigned short *p, unsigned short *out)
{
    Rgb c;
    unsigned int hi;
    unsigned int mid;
    unsigned int lo;
    decode(p[0], &c.lo);
    hi = c.hi << 2;
    mid = c.mid << 2;
    lo = c.lo << 2;
    decode(p[-0x280], &c.lo);
    hi += c.hi;
    mid += c.mid;
    lo += c.lo;
    decode(p[-1], &c.lo);
    hi += c.hi;
    mid += c.mid;
    lo += c.lo;
    decode(p[1], &c.lo);
    hi += c.hi;
    mid += c.mid;
    lo += c.lo;
    decode(p[0x280], &c.lo);
    hi += c.hi;
    mid += c.mid;
    lo += c.lo;
    *out = ((hi >> 3) & 0x1f) << 11 | ((mid >> 3) & 0x3f) << 5 | (lo >> 3) & 0x1f;
}
