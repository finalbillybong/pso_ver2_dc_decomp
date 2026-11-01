/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c244b78
 * function: operation_8c244b78
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 2 of 42 reference instruction lines
 * differing bytes: 59
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Rec {
    unsigned short f00;
    short f02;
    int f04;
} Rec;
extern Rec g_8c510c9c;
extern int lookup_low_id(int);
static inline int id_live(unsigned short id)
{
    return lookup_low_id(id);
}
int operation_8c244b78(void)
{
    int v2;
    int v5;
    int v4;
    v2 = 0;
    v5 = 1;
    for (; v2 < 4; v2++) {
        v4 = v2 << 3;
        if (id_live(*(unsigned short *)((char *)&g_8c510c9c.f00 + v4)) != 0 && *(short *)((char *)&g_8c510c9c.f02 + v4) != 0) {
            v5 = 0;
            break;
        }
    }
    if (v5 != 0) {
        return 0;
    }
    return *(int *)0x8c510ccc;
}
