/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a438c
 * function: operation_8c0a438c
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 82 of 100 reference instruction lines
 * differing bytes: 71
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
struct Arg1 {
    float f00;
};
struct S_vv6 {
    char unknown0[0x2c];
    float f2c;
    float f30;
    float f34;
};
struct S_vv4 {
    float f00;
};
struct S_vv5 {
    float f00;
};
extern int g_8c46ed4c;
extern char g_8c3034f8[];
extern int operation_8c09e050(void);
extern void debug_error_stub_8c03ef80(void *, ...);
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
int operation_8c0a438c(int a0, Arg1 *a1)
{
    float best;
    int found;
    char *p;
    char *end;
    float d;
    S_vv4 *v4;
    S_vv5 *v5;
    best = 1000000000.0f;
    found = 0;
    p = (char *)operation_8c09e050();
    if (p == 0) {
        debug_error_stub_8c03ef80((void *)((g_8c3034f8 + 0x166)));
        return found;
    }
    end = p + g_8c46ed4c * 0x60;
    v4 = (S_vv4 *)((char *)a1 + 0x4);
    v5 = (S_vv5 *)((char *)a1 + 0x8);
    for (; (unsigned int)end > (unsigned int)p; p += 0x60) {
        if (icmp((unsigned char *)p, (unsigned char *)(g_8c3034f8 + 0x186)) != 0) {
            d = (a1->f00 - ((S_vv6 *)p)->f2c) * (a1->f00 - ((S_vv6 *)p)->f2c)
              + (v4->f00 - ((S_vv6 *)p)->f30) * (v4->f00 - ((S_vv6 *)p)->f30)
              + (v5->f00 - ((S_vv6 *)p)->f34) * (v5->f00 - ((S_vv6 *)p)->f34);
            if (best > d) {
                best = d;
                found = (int)p;
            }
        }
    }
    return found;
}
