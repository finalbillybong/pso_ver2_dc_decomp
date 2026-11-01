/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16fa98
 * function: quest_op_leti_fixed_camera_8c16fa98
 * language: c
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 66 of 66 reference instruction lines
 * differing bytes: 118
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
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
extern void configure_render_mode_six(void *, void *);
void quest_op_leti_fixed_camera_8c16fa98(int a0)
{
    Frame frame;
    (&frame)->f0c = (float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 << 2));
    (&frame)->f10 = (float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 + 1 << 2));
    (&frame)->f14 = (float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 + 2 << 2));
    (&frame)->f00 = (float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 + 3 << 2));
    (&frame)->f04 = (float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 + 4 << 2));
    (&frame)->f08 = (float)*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (a0 + 5 << 2));
    configure_render_mode_six((void *)(&(&frame)->f0c), (void *)(&frame));
}
