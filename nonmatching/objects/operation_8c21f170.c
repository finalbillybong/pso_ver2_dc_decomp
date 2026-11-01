/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21f170
 * function: operation_8c21f170
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 4 of 39 reference instruction lines
 * differing bytes: 4
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
typedef struct S_c8c1a7550 S_c8c1a7550;
typedef struct Frame Frame;
struct S_c8c1a7550 {
    short f00;
    short f02;
};
struct Frame {
    char f00;
    char f01;
    char f02;
    char unknown3[0x11];
};
extern S_c8c1a7550 *operation_8c1a7550(int, int);
extern void operation_1c7dd4(void *);
extern void call_8c21f064(int, Frame *);
extern void call_8c01c838(int, int);
void operation_8c21f170(int a0, int a1)
{
    Frame frame;
    short v1;
    short v2;
    S_c8c1a7550 *t1;
    t1 = operation_8c1a7550(a0, a1);
    v2 = t1->f02;
    v1 = t1->f00;
    operation_1c7dd4((void *)(&frame));
    (&frame)->f00 = 0;
    (&frame)->f01 = v1;
    (&frame)->f02 = v2;
    call_8c21f064(a0, (Frame *)((&frame)));
    call_8c01c838(a0, a1);
}
