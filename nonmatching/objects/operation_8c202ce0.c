/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c202ce0
 * function: operation_8c202ce0
 * language: c
 * reference size: 10 bytes
 * compiled size: 10 bytes (+0.0%)
 * differing lines: 8 of 5 reference instruction lines
 * differing bytes: 7
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Arg2_30 {
    int f00;
    int f04;
} Arg2_30;
typedef struct Arg2 {
    char unknown0[0x30];
    Arg2_30 *f30;
} Arg2;
int operation_8c202ce0(int a0, int a1, Arg2 *a2)
{
    Arg2_30 *v1;
    v1 = a2->f30;
    v1->f00 = a0;
    v1->f04 = a1;
    return 0;
}
