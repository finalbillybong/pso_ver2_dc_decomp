/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c102448
 * function: operation_8c102448
 * language: c
 * reference size: 668 bytes
 * compiled size: 664 bytes (-0.6%)
 * differing lines: 10 of 287 reference instruction lines
 * differing bytes: 201
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d59e4 S_g8c4d59e4;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
extern S_g8c4d59e4 *g_8c4d59e4;
extern void backup_render_state(void);
extern void hs_8c3827d8(void *);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
extern void restore_render_state(void);
void operation_8c102448(void)
{
    Frame frame;
    int v1;
    backup_render_state();
    if (g_8c4d59e4 != 0) {
        hs_8c3827d8(g_8c4d59e4);
        v1 = (int)1;
    } else {
        v1 = (int)-1;
    }
    if (v1 == 0) {
    } else {
        sq_select_8c38aeb4(1);
        sq_header_8c38af22(0, -1);
        (&frame)->f00 = 30.0f;
        (&frame)->f04 = 286.0f;
        (&frame)->f08 = 482.0f;
        (&frame)->f0c = 288.0f;
        (&frame)->f10 = 0.0f;
        (&frame)->f14 = 0.0f;
        (&frame)->f18 = 0.75f;
        (&frame)->f1c = 0.0625f;
        sq_quad_8c38b09e((&frame), 0.8f);
        (&frame)->f00 = 30.0f;
        (&frame)->f04 = 416.0f;
        (&frame)->f08 = 482.0f;
        (&frame)->f0c = 418.0f;
        (&frame)->f10 = 0.0f;
        (&frame)->f14 = 0.0f;
        (&frame)->f18 = 0.75f;
        (&frame)->f1c = 0.0625f;
        sq_quad_8c38b09e((&frame), 0.8f);
        (&frame)->f00 = 30.0f;
        (&frame)->f04 = 286.0f;
        (&frame)->f08 = 32.0f;
        (&frame)->f0c = 418.0f;
        (&frame)->f10 = 0.0f;
        (&frame)->f14 = 0.0f;
        (&frame)->f18 = 0.0625f;
        (&frame)->f1c = 0.75f;
        sq_quad_8c38b09e((&frame), 0.8f);
        (&frame)->f00 = 480.0f;
        (&frame)->f04 = 286.0f;
        (&frame)->f08 = 482.0f;
        (&frame)->f0c = 418.0f;
        (&frame)->f10 = 0.0f;
        (&frame)->f14 = 0.0f;
        (&frame)->f18 = 0.0625f;
        (&frame)->f1c = 0.75f;
        sq_quad_8c38b09e((&frame), 0.8f);
        sq_header_8c38af22(1, -1);
        (&frame)->f00 = 482.0f;
        (&frame)->f04 = 383.0f;
        (&frame)->f08 = (&frame)->f00 + 40.0f;
        (&frame)->f0c = (&frame)->f04 + 32.0f;
        (&frame)->f10 = 0.0f;
        (&frame)->f14 = 0.0f;
        (&frame)->f18 = 0.625f;
        (&frame)->f1c = 0.5f;
        sq_quad_8c38b09e((&frame), 0.8f);
        (&frame)->f00 = 482.0f;
        (&frame)->f04 = 383.0f;
        (&frame)->f08 = (&frame)->f00 + 40.0f;
        (&frame)->f0c = (&frame)->f04 + 32.0f;
        (&frame)->f10 = 0.0f;
        (&frame)->f14 = 0.5f;
        (&frame)->f18 = 0.625f;
        (&frame)->f1c = 1.0f;
        sq_quad_8c38b09e((&frame), 0.8f);
        sq_flush_8c38af12();
    }
    restore_render_state();
}
