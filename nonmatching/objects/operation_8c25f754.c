/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25f754
 * function: operation_8c25f754
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 12 of 50 reference instruction lines
 * differing bytes: 16
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_84 S_g8c467180_84;
typedef struct S_g8c467180_84_4 S_g8c467180_84_4;
typedef struct S_g8c467180_84_8 S_g8c467180_84_8;
struct Frame {
    Block8 f00;
};
struct S_g8c467180 {
    char unknown0[0x84];
    S_g8c467180_84 *f84;
};
struct S_g8c467180_84 {
    char unknown0[0x4];
    S_g8c467180_84_4 *f04;
    S_g8c467180_84_8 *f08;
};
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(int, void *, int, int);
extern void operation_8c15700c(int, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
int operation_8c25f754(void)
{
    Frame frame;
    int t1;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c3406a4;
    t1 = operation_8c156c24((int)(&frame), 2);
    add_wrapper_8c156d30(t1, (void *)((*(S_g8c467180 **)0x8c467180)->f84->f04), 6, 0);
    add_wrapper_8c156d30(t1, (void *)((*(S_g8c467180 **)0x8c467180)->f84->f08), 6, 1);
    operation_8c15700c(t1, 442.0f);
    operation_8c1571d4((void *)t1, 0);
    operation_8c157138((void *)t1);
    return (int)(t1);
}
