/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24ea94
 * function: TDuelEffectNumber_render_8c24ea94
 * language: c
 * reference size: 124 bytes
 * compiled size: 124 bytes (+0.0%)
 * differing lines: 4 of 41 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Frame {
    char unknown0[0x20];
};
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
};
extern S_g8c46fe00 *g_8c46fe00;
extern void controller_child_coordinates(Object *, Frame *, void *);
extern void set_child_blend(void);
extern void sq_select_8c38aeb4(int);
extern void hs_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void draw_child_primary_layer(Object *, Frame *);
extern void draw_child_secondary_layer(Object *, Frame *);
extern void sq_flush_8c38af12(void);
extern void restore_child_blend(void);
void TDuelEffectNumber_render_8c24ea94(Object *o)
{
    Frame frame;
    controller_child_coordinates(o, (&frame), o->f2c);
    set_child_blend();
    sq_select_8c38aeb4(1);
    hs_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(5, -1);
    draw_child_primary_layer(o, (&frame));
    draw_child_secondary_layer(o, (&frame));
    sq_flush_8c38af12();
    restore_child_blend();
}
