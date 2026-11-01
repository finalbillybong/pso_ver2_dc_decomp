/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e0a34
 * function: operation_8c1e0a34
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 56 of 61 reference instruction lines
 * differing bytes: 75
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object {
    char unknown0[0x74];
    unsigned int f74;
    int f78;
} Object;
extern unsigned char *g_8c32b268;
extern unsigned char g_8c32b26c[];
extern unsigned char g_8c32b29d[];
int operation_8c1e0a34(Object *o, int a1)
{
    unsigned int idx;
    unsigned int i;
    unsigned char *p;
    unsigned char c;
    unsigned int row;
    int v;
    idx = o->f74;
    if (idx >= 7) {
        return a1;
    }
    o->f74 = 7;
    for (i = 0, p = g_8c32b268; (c = *p) != 0; i++, p++) {
        if ((unsigned char)a1 == c) {
            row = (i >> 1) * 7;
            if (((unsigned char)(g_8c32b26c + row)[idx] & 1 << o->f78) == 0) {
                return a1;
            }
            v = (g_8c32b29d + row)[idx];
            if (i & 1) {
                v += 0x20;
            }
            return v;
        }
    }
    return a1;
}
