/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c060438
 * function: operation_8c060438
 * language: c
 * reference size: 124 bytes
 * compiled size: 120 bytes (-3.2%)
 * differing lines: 4 of 49 reference instruction lines
 * differing bytes: 48
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
typedef struct S_g8c467a20 S_g8c467a20;
extern void set_level_8c348844(void *, int, int);
extern void slot_request_8c348454(void *, int, int, int);
int operation_8c060438(int a0, int a1)
{
    int v1;
    int v2;
    int v3;
    int v5;
    if (*(char *)0x8c467a42 != 0) {
        v1 = (int)(a1 + *(int *)0x8c467a54);
        v2 = (int)(-0x7f > v1);
        if (v2 != 0) {
            v5 = (int)-0x7f;
        } else {
            if (0x7f > v1) {
                v3 = (int)v1;
            } else {
                v3 = (int)0x7f;
            }
            v5 = (int)v3;
        }
        set_level_8c348844((void *)(*(S_g8c467a20 **)0x8c467a20), v5, 0);
        {
            int v6 = (unsigned short)a0;
            a0 = (short)((unsigned int)a0 >> 0x10);
            slot_request_8c348454((void *)(*(S_g8c467a20 **)0x8c467a20), a0, v6, 0);
        }
        *(int *)0x8c468800 = 1;
        return 0;
    }
    return -1;
}
