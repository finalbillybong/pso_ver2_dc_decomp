/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09ec40
 * function: operation_8c09ec40
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 14 of 54 reference instruction lines
 * differing bytes: 7
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
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_vv12 S_vv12;
struct S_vv12 {
    char unknown0[0xa];
    short f0a;
};
struct S_c8c053d84 {
    char unknown0[0x34];
    int f34;
};
extern int g_8c44be04;
extern int g_8c46ec54;
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
static inline int sum_counts(int n)
{
    int i;
    int s;
    s = 0;
    for (i = 0; i < n; i++) {
        s += *(int *)((char *)0x8c46eca0 + (i << 2));
    }
    return s;
}
void operation_8c09ec40(void)
{
    int v3;
    int v2;
    int v1;
    int v13;
    int v11;
    int v10;
    S_vv12 *v12;
    int v9;
    v1 = g_8c44be04;
    if (0x11 < v1) {
        v9 = 0;
    } else {
        v2 = 0;
        for (v3 = 0; v3 < v1; v3++) {
            v2 += *(int *)((char *)0x8c46eca0 + (v3 << 2));
        }
        v9 = g_8c46ec54 + v2 * 0x48;
    }
    v11 = *(int *)((char *)0x8c46eca0 + (v1 << 2));
    v12 = (S_vv12 *)v9;
    v10 = 0x800;
    v13 = 0;
    while (v13 < v11) {
        S_c8c053d84 *t1;
        t1 = lookup_object_by_id(v12->f0a);
        if (t1 != 0) {
            t1->f34 |= v10;
        }
        v13++;
        v12 = (S_vv12 *)((char *)v12 + 72);
    }
}
