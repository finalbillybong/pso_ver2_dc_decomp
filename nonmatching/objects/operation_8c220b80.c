/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c220b80
 * function: operation_8c220b80
 * language: c
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 6 of 35 reference instruction lines
 * differing bytes: 9
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
typedef struct S_g8c4dbc20 S_g8c4dbc20;
typedef struct S_g8c505c28 S_g8c505c28;
struct S_g8c4dbc20 {
    int f00;
};
extern void memset_8c12b880(void *, int, int);
extern void operation_8c220d04(int, int);
extern void operation_8c22ecd4(void *, int, int);
void operation_8c220b80(int a0, int a1)
{
    char *v24;
    char *v1;
    if (*(int *)0x8c505c28 != 0) {
        v24 = (char *)(*(S_g8c4dbc20 **)0x8c4dbc20)->f00;
        v1 = (char *)*(int *)((char *)((char *)v24 + 0x0) + (a0 << 2));
        memset_8c12b880((void *)((void *)0x8c505a20), 0, 0x200);
        operation_8c220d04((int)(v1), (int)((void *)0x8c505a20));
        a1 |= 0x80;
        operation_8c22ecd4((void *)(*(S_g8c505c28 **)0x8c505c28), (int)((void *)0x8c505a20), a1);
    }
}
