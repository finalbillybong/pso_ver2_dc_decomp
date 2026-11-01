/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16e298
 * function: quest_op_p_move_8c16e298
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 60 of 56 reference instruction lines
 * differing bytes: 98
 * provenance: generator draft (mode retflip2)
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
typedef struct Frame Frame;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern void operation_8c1112d4(int, void *, int);
void quest_op_p_move_8c16e298(int a0)
{
    Frame frame;
    (&frame)->f00 = (float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 << 2));
    (&frame)->f04 = (float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 + 1 << 2));
    (&frame)->f08 = (float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 + 2 << 2));
    operation_8c1112d4((int)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 + 4 << 2))), (void *)(&frame), (int)((int)((float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 + 3 << 2)) * 65536.0f / 360.0f)));
}
