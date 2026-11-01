/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d9ea0
 * function: operation_8c0d9ea0
 * language: c
 * reference size: 648 bytes
 * compiled size: 636 bytes (-1.9%)
 * differing lines: 383 of 319 reference instruction lines
 * differing bytes: 580
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in stack
 *   frame and spills; review found and fixed behaviour defects of the generator draft; not proven
 *   equivalent to the original; compiled size differs from the reference by -12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern int call_8c0da128(int, int, int, int);
void operation_8c0d9ea0(int a0, int a1, int lo, int hi)
{
    int p;
    int q;
    int h;
    int l;
    if (lo >= hi) {
        return;
    }
    p = call_8c0da128(a0, a1, lo, hi);
    h = p - 1;
    if (lo < h) {
        q = call_8c0da128(a0, a1, lo, h);
        operation_8c0d9ea0(a0, a1, lo, q - 1);
        operation_8c0d9ea0(a0, a1, q + 1, h);
    }
    l = p + 1;
    if (l < hi) {
        q = call_8c0da128(a0, a1, l, hi);
        operation_8c0d9ea0(a0, a1, l, q - 1);
        operation_8c0d9ea0(a0, a1, q + 1, hi);
    }
}
