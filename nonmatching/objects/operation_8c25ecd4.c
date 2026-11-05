/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25ecd4
 * function: operation_8c25ecd4
 * language: c
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 6 of 66 reference instruction lines
 * differing bytes: 5
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_558 S_g8c467180_2c_558;
typedef struct S_g8c467180_2c_55c S_g8c467180_2c_55c;
typedef struct S_g8c467180_2c_560 S_g8c467180_2c_560;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
struct S_vv1 {
    S_vv1_0 *f00;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x558];
    S_g8c467180_2c_558 *f558;
    S_g8c467180_2c_55c *f55c;
    S_g8c467180_2c_560 *f560;
};
struct S_vv1_0 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void request_resource_release(void *);
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(S_vv1_0 *, void *, int, int);
extern void operation_8c156f50(S_vv1_0 *);
extern void operation_8c1571d4(void *, int);
void operation_8c25ecd4(int a0)
{
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)(a0 + 0x30);
    if (v1->f00 != 0) {
        request_resource_release((void *)(v1->f00));
        v1->f00 = (S_vv1_0 *)0;
    }
    t1 = operation_8c156c24((int)((void *)0x8c340620), 3);
    v1->f00 = (S_vv1_0 *)t1;
    if (v1->f00 != 0) {
        add_wrapper_8c156d30((S_vv1_0 *)(v1->f00), (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f558), 5, 0);
        add_wrapper_8c156d30((S_vv1_0 *)(v1->f00), (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f55c), 5, 1);
        add_wrapper_8c156d30((S_vv1_0 *)(v1->f00), (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f560), 5, 2);
        operation_8c156f50((S_vv1_0 *)(v1->f00));
        v1->f00->f80 = (v1->f00->f80 & 0xffff) | 0x200;
        operation_8c1571d4((void *)(v1->f00), 2);
    }
}
