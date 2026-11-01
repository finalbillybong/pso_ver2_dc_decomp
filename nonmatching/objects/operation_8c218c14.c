/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c218c14
 * function: operation_8c218c14
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 6 of 59 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c219834(void *, int, unsigned int);
int operation_8c218c14(int a0, int a1, int a2, int a3, int a4)
{
    int stride = a4;
    int i;
    int sum;
    unsigned int r;
    int c;
    int j;
    sum = 0;
    for (i = 0; (j = (unsigned char)i) != a3; i++) {
        sum += *(unsigned char *)((char *)(a1 + a2) + j * stride);
    }
    if (sum == 0) {
        return 0xff;
    }
    r = operation_8c219834((void *)a0, sum, 2);
    for (i = 0; (j = (unsigned char)i) != a3; i++) {
        c = *(unsigned char *)((char *)(a1 + a2) + j * stride);
        if (c != 0) {
            if ((unsigned int)c > r) {
                return i;
            }
            r -= c;
        }
    }
    return 0xff;
}
