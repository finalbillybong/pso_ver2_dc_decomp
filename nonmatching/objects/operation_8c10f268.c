/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10f268
 * function: operation_8c10f268
 * language: c
 * reference size: 220 bytes
 * compiled size: 224 bytes (+1.8%)
 * differing lines: 94 of 110 reference instruction lines
 * differing bytes: 148
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c10f268(int a0, Vector3 *a1, int a2, int a3)
{
    Vector3 t;
    Vector3 u;
    float v27;
    int lim;
    int hi;
    hi = a3;
    v27 = a1[hi].z;
    lim = 10;
    a2 = a2 - 1;
    for (;;) {
        do {
            a2++;
        } while (v27 > a1[a2].z);
        do {
            a3--;
        } while (a3 > a2 && a1[a3].z > v27);
        if (a2 >= a3 || a2 >= lim || a3 >= lim) {
            break;
        }
        u = a1[a2];
        a1[a2] = a1[a3];
        a1[a3] = u;
    }
    t = a1[a2];
    a1[a2] = a1[hi];
    a1[hi] = t;
    return a2;
}
