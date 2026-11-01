/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12b184
 * function: operation_8c12b184
 * language: c
 * reference size: 64 bytes
 * compiled size: 64 bytes (+0.0%)
 * differing lines: 44 of 32 reference instruction lines
 * differing bytes: 59
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
typedef struct S_x91920 S_x91920;
struct S_x91920 {
    char f00;
};
int operation_8c12b184(int a0, int a1)
{
    int v2;
    int v1;
    v1 = (int)0;
    while (*(char *)((char *)((char *)v1 + 0x0) + (a0)) != 0) {
        v2 = (int)0;
        while (*(char *)((char *)((char *)v2 + 0x0) + (a1)) != 0 && *(char *)((char *)((char *)v2 + 0x0) + (a1)) != ((S_x91920 *)(a0 + v1))->f00) {
            v2 = (int)(v2 + 1);
        }
        if (*(char *)((char *)((char *)v2 + 0x0) + (a1)) != 0) {
            return a0 + v1;
        }
        v1 = (int)(v1 + 1);
    }
    return 0;
}
