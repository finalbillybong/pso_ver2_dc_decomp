/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03ef88
 * function: operation_8c03ef88
 * language: c
 * reference size: 56 bytes
 * compiled size: 56 bytes (+0.0%)
 * differing lines: 6 of 19 reference instruction lines
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
extern void call_8c03efc0(int);
int operation_8c03ef88(int a0, int a1)
{
    if (a0 == 0) {
        return 0;
    }
    *(int *)0x8c466d84 = a1;
    *(int *)0x8c466d88 = 0;
    *(int *)0x8c466d80 = 0;
    call_8c03efc0(a0);
    return (int)(*(int *)0x8c466d88);
}
