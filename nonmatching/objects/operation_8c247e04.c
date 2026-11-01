/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c247e04
 * function: operation_8c247e04
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 22 of 59 reference instruction lines
 * differing bytes: 23
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
typedef struct S_x69936 S_x69936;
struct S_x69936 {
    int f00;
};
extern int lookup_low_id(int);
int operation_8c247e04(void)
{
    int v1;
    int v2;
    int v4;
    int v8;
    int v3;
    int t1;
    v1 = (int)9;
    v2 = (int)0x274;
    v3 = (int)0;
    while (4 > v3) {
        t1 = lookup_low_id(v3);
        if (t1 != 0) {
            if (*(int *)((char *)((char *)(v2 + 0x8c339ca0) + 0x0) + (v3 * 0xa4)) == 0) {
                return -1;
            }
            if (((S_x69936 *)(v3 * 0xa4 + 0x8c339ca0 + v2))->f00 == 0) {
                v8 = (int)0;
            } else {
                v4 = (int)0;
                while (9 > v4) {
                    if (*(int *)((char *)((char *)(int *)((char *)(v3 * 0xa4 + 0x8c339ca0 + v2) + 4) + 0x78) + (v4 << 2)) == 0) {
                        goto L_8c247e60;
                    }
                    v4 = (int)(v4 + 1);
                }
                v8 = (int)v4;
            }
            v4 = (int)v8;
L_8c247e60:;
            if (v1 > v4) {
                v1 = (int)v4;
            }
        }
        v3 = (int)(v3 + 1);
    }
    return (int)(v1);
}
