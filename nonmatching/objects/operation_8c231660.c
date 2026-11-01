/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c231660
 * function: operation_8c231660
 * language: c
 * reference size: 140 bytes
 * compiled size: 116 bytes (-17.1%)
 * differing lines: 58 of 46 reference instruction lines
 * differing bytes: 122
 * provenance: generator draft (experimental generator, mode retflip2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -24 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv6 S_vv6;
struct S_vv6 {
    int f00;
};
extern void call_8c3dae20(void);
extern void call_8c3f2f88(void *, void *);
void operation_8c231660(void)
{
    int v7;
    S_vv6 *v6;
    *(int *)0x8c338b98 += 1;
    if (*(int *)0x8c338b90 == 1) {
        call_8c3dae20();
    }
    v7 = (int)0;
    v6 = (S_vv6 *)(void *)0x8c5108b4;
    while (!(v7 >= v6->f00)) {
        call_8c3f2f88((void *)((void *)0x8c508864), (void *)((void *)0x8c5087c4));
        call_8c3f2f88((void *)((void *)0x8c508814), (void *)((void *)0x8c5087c4));
        v7 = (int)(v7 + 1);
    }
    if (*(int *)0x8c338b90 == 1) {
        call_8c3dae20();
    }
}
