/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c222728
 * function: operation_8c222728
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 8 of 77 reference instruction lines
 * differing bytes: 68
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
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x10];
    char f10;
    char f11;
    short f12;
};
struct Object {
    char unknown0[0x22ac];
    int f22ac;
};
extern int g_8c467188;
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
int operation_8c222728(Object *o, Arg1 *a1)
{
    int v1;
    int v5;
    v1 = a1->f10;
    if (v1 == -1 || a1->f12 == -1) {
        return 0;
    }
    if (v1 != g_8c467188) {
        return 0;
    }
    if (a1->f11 != 0 && a1->f11 != 2) {
        return 0;
    }
    for (v5 = 0; v5 < o->f22ac; v5++) {
        if (icmp((unsigned char *)o + v5 * 0xb8 + 0x39, (unsigned char *)a1 + 0x14) == 0) {
            return 0;
        }
    }
    return 1;
}
