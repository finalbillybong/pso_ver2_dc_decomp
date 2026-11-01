/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a42c0
 * function: operation_8c0a42c0
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 28 of 67 reference instruction lines
 * differing bytes: 19
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
struct Object {
    char unknown0[0x3c];
    int f3c;
};
extern int g_8c46ed4c;
extern char g_8c3034f8[];
extern int operation_8c09e050(void);
extern void debug_error_stub_8c03ef80(void *, ...);
static inline int icmp(const unsigned char *b, const unsigned char *a)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
int operation_8c0a42c0(Object *o)
{
    int v1;
    int v3;
    int v2;
    int t1;
    int t2;
    t1 = operation_8c09e050();
    if (t1 == 0) {
        debug_error_stub_8c03ef80((void *)((g_8c3034f8 + 0x166)));
        return 0;
    }
    v1 = (int)g_8c46ed4c;
    v2 = (int)t1;
    v3 = (int)0;
    while (v1 > v3) {
        t2 = icmp((unsigned char *)(g_8c3034f8 + 0x186), (unsigned char *)v2);
        if (t2 == 0) {
            goto L_8c0a432c;
        }
        v3 = (int)(v3 + 1);
        v2 = (int)(v2 + 0x60);
    }
L_8c0a432c:;
    if (v3 == v1) {
        return 0;
    }
    o->f3c += 1;
    return (int)(v2);
}
