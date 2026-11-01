/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09bc54
 * function: operation_8c09bc54
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 2 of 66 reference instruction lines
 * differing bytes: 109
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
typedef struct Arg1 Arg1;
extern void operation_8c034cfc(void *);
extern int operation_8c09bb80(void *);
void operation_8c09bc54(int a0, Arg1 *a1)
{
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v9;
    int v8;
    int t1;
    operation_8c034cfc((void *)a0);
    t1 = operation_8c09bb80((void *)a0);
    if (t1 >= 0) {
    }
    v2 = t1 * 3;
    v1 = 0;
    while (3 > v1) {
        v3 = *(int *)((char *)0x8c30179c + ((v1 + v2) << 2));
        if (v3 == 7) {
            v3 = 4;
        } else if (v3 == 8) {
            v3 = 0;
        }
        *(int *)((char *)((char *)a1 + 0x0) + (v1 << 2)) = v3;
        v1++;
    }
    v6 = (int)0;
    while (2 > v6) {
        v7 = (int)2;
        while (v7 > v6) {
            v8 = (int)*(int *)((char *)((char *)a1 + 0x0) + (v7 << 2));
            v9 = (int)*(int *)((char *)((char *)a1 - 0x4) + (v7 << 2));
            if (v8 < v9) {
                *(int *)((char *)((char *)a1 - 0x4) + (v7 << 2)) = (int)(v8);
                *(int *)((char *)((char *)a1 + 0x0) + (v7 << 2)) = (int)(v9);
            }
            v7 = (int)(v7 + -1);
        }
        v6 = (int)(v6 + 1);
    }
}
