/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c282604
 * function: operation_8c282604
 * language: c
 * reference size: 108 bytes
 * compiled size: 108 bytes (+0.0%)
 * differing lines: 0 of 44 reference instruction lines
 * differing bytes: 10
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
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
extern char g_8c4d7d38[];
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
void operation_8c282604(void)
{
    int v2;
    S_vv3 *v3;
    int v1;
    operation_8c1acbc0((void *)((0x3c0 + g_8c4d7d38)));
    operation_8c1acbc0((void *)((g_8c4d7d38 + 0x3e4)));
    v2 = (int)0;
    v1 = (int)-1;
    while (0x1e > v2) {
        v3 = (S_vv3 *)((char *)(v2 * 0x1c + g_8c4d7d38) + 4);
        v3->f00 = 0;
        v3->f01 = v1;
        v3->f04 = 0;
        v3->f03 = 0;
        v3->f02 = 0;
        operation_1c7dd4((void *)((int)v3 + 8));
        v2 = (int)(v2 + 1);
    }
}
