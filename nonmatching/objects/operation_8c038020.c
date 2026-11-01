/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c038020
 * function: operation_8c038020
 * language: c
 * reference size: 124 bytes
 * compiled size: 124 bytes (+0.0%)
 * differing lines: 32 of 54 reference instruction lines
 * differing bytes: 21
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
extern void memcpy_8c12b77c(int, int, int);
extern int call_8c18e808(int, int);
void operation_8c038020(int a0, int a1, int a2, int a3)
{
    int v3;
    unsigned int v2;
    int v1;
    memcpy_8c12b77c(a2, a1, a3);
    a3 = call_8c18e808(a3, 0x100);
    v1 = 0x100;
    for (v2 = 0; (unsigned int)a3 > v2; v2++) {
        for (v3 = 0; v1 > v3; v3++) {
            *(char *)((char *)(a2 + (unsigned char)*(unsigned char *)((char *)0x8c462900 + v3)) + (v2 << 8)) = *(unsigned char *)((char *)(a1 + v3) + (v2 << 8));
        }
    }
}
