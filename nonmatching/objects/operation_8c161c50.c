/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c161c50
 * function: operation_8c161c50
 * language: c
 * reference size: 40 bytes
 * compiled size: 38 bytes (-5.0%)
 * differing lines: 0 of 19 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -2 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv8 S_vv8;
struct S_vv8 {
    int f00;
};
int operation_8c161c50(int a0)
{
    int v7;
    S_vv8 *v8;
    int v1;
    if (a0 == 0) {
        return 0;
    }
    v7 = (int)0;
    v1 = (int)-1;
    v8 = (S_vv8 *)a0;
    while (v8->f00 != v1) {
        if (v7 >= 8) {
            return 0;
        }
        v7 = (int)(v7 + 1);
        v8 = (S_vv8 *)((char *)v8 + 16);
    }
    return 1;
}
