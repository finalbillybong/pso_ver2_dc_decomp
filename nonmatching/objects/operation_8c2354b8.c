/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2354b8
 * function: operation_8c2354b8
 * language: c
 * reference size: 100 bytes
 * compiled size: 100 bytes (+0.0%)
 * differing lines: 8 of 39 reference instruction lines
 * differing bytes: 6
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
typedef struct S_c8c156c24 S_c8c156c24;
struct S_c8c156c24 {
    char unknown0[0x64];
    int f64;
    char unknown68[0x18];
    unsigned short f80;
};
extern S_c8c156c24 *operation_8c156c24(int, int);
extern void operation_8c23551c(int, S_c8c156c24 *, int);
S_c8c156c24 *operation_8c2354b8(int a0, int a1, int a2)
{
    S_c8c156c24 *t1;
    t1 = operation_8c156c24(a1, 0x13);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    t1->f64 = 0x1000000;
    t1->f80 = (t1->f80 & 0xffff) | 0x100;
    operation_8c23551c(a0, t1, a2);
    return t1;
}
