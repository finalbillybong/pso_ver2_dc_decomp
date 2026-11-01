/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c139da8
 * function: operation_8c139da8
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 44 of 85 reference instruction lines
 * differing bytes: 27
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
extern int lookup_object_by_id(int);
extern float object_random_fraction(void *);
int operation_8c139da8(int a0)
{
    int v2;
    int v6;
    int v10;
    int v4;
    int v9;
    int v1;
    int v3;
    int v11;
    int v13;
    int n;
    int t1;
    float t2;
    float t3;
    v1 = (int)0x3a4;
    v2 = (int)0;
    v3 = (int)0x40000;
    v4 = (int)0;
    while (6 > v4) {
        t1 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)0x8c31311c + (v4 << 1))));
        if (t1 != 0) {
            v6 = (int)(((*(int *)((char *)((char *)t1 + 0x0) + (v1)) & v3)) != 0);
            if (v6 == 0) {
                *(char *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4d9ba4))) = v4;
                v2 = (int)(v2 + 1);
            }
        }
        v4 = (int)(v4 + 1);
    }
    if (1 >= v2) {
        return (int)(v2);
    }
    n = v2 * 5;
    v9 = (int)0;
    while (n > v9) {
        t2 = object_random_fraction((void *)a0);
        v10 = (int)(int)((float)v2 * t2);
        t3 = object_random_fraction((void *)a0);
        v11 = (int)(int)((float)v2 * t3);
        if (v10 != v11) {
            v13 = *(char *)((char *)((char *)v10 + 0x0) + ((int)((void *)0x8c4d9ba4)));
            *(char *)((char *)((char *)v10 + 0x0) + ((int)((void *)0x8c4d9ba4))) = *(char *)((char *)((char *)v11 + 0x0) + ((int)((void *)0x8c4d9ba4)));
            *(char *)((char *)((char *)v11 + 0x0) + ((int)((void *)0x8c4d9ba4))) = (char)v13;
        }
        v9 = (int)(v9 + 1);
    }
    return (int)(v2);
}
