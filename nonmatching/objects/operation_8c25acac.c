/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25acac
 * function: operation_8c25acac
 * language: c
 * reference size: 92 bytes
 * compiled size: 92 bytes (+0.0%)
 * differing lines: 4 of 36 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern Block8 g_8c340394;
extern Block8 g_8c34039c;
extern int create_fitted_pair_grid_view(void *, void *);
extern void call_8c25ae30(int);
extern void operation_8c119764(int, int, int);
int operation_8c25acac(int a0)
{
    Frame frame;
    int t1;
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c340394;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c34039c;
    t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&frame));
    call_8c25ae30(a0);
    operation_8c119764(t1, (int)(a0 + 0x34), 1);
    return (int)(t1);
}
