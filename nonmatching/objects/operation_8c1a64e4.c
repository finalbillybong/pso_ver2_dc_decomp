/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a64e4
 * function: operation_8c1a64e4
 * language: c
 * reference size: 104 bytes
 * compiled size: 100 bytes (-3.8%)
 * differing lines: 4 of 45 reference instruction lines
 * differing bytes: 65
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    int f00;
};
extern void operation_8c1a6564(void *, int);
extern void call_8c1a65b8(int, unsigned short, int);
extern void call_8c1a67b8(int, void *, int);
void operation_8c1a64e4(int a0, Arg1 *a1)
{
    int v1;
    int v2;
    operation_8c1a6564((void *)a0, (int)(a1->f00));
    v1 = (int)0;
    while (4 > v1) {
        call_8c1a65b8(a0, *(unsigned short *)((char *)((char *)a1 + 0x4) + (v1 << 1)), v1);
        v1 = (int)(v1 + 1);
    }
    v2 = (int)0;
    while (0xc > v2) {
        call_8c1a67b8(a0, (void *)(((char *)a1 + (v2 << 2) + 0xc)), v2);
        v2 = (int)(v2 + 1);
    }
}
