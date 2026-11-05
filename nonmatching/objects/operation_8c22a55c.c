/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22a55c
 * function: operation_8c22a55c
 * language: c
 * reference size: 336 bytes
 * compiled size: 336 bytes (+0.0%)
 * differing lines: 10 of 113 reference instruction lines
 * differing bytes: 24
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
typedef struct Object Object;
typedef struct Arg0_a8 Arg0_a8;
typedef struct Arg0_ac Arg0_ac;
typedef struct Arg0_b0 Arg0_b0;
typedef struct Arg0_b4 Arg0_b4;
typedef struct Arg0_b8 Arg0_b8;
typedef struct Arg0_bc Arg0_bc;
typedef struct Arg0_c0 Arg0_c0;
typedef struct Arg0_c4 Arg0_c4;
typedef struct Arg0_c8 Arg0_c8;
typedef struct Arg0_e4 Arg0_e4;
typedef struct Arg0_f0 Arg0_f0;
struct Object {
    char unknown0[0xa8];
    Arg0_a8 *fa8;
    Arg0_ac *fac;
    Arg0_b0 *fb0;
    Arg0_b4 *fb4;
    Arg0_b8 *fb8;
    Arg0_bc *fbc;
    Arg0_c0 *fc0;
    Arg0_c4 *fc4;
    Arg0_c8 *fc8;
    char unknowncc[0x18];
    Arg0_e4 *fe4;
    int fe8;
    float fec;
    Arg0_f0 *ff0;
};
extern void set_effect_blend_state(float);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void hs_8c3827d8(void *);
extern void operation_8c161c78(void *);
extern void draw_tree_a702(void *, void *, float);
extern void set_transform_node_callback_wrapper_2_8c161ce4(void *);
extern int hs_8c18e8a0(int, int);
extern void njPopMatrixEx_8c38ad10(void);
extern void restore_effect_blend_state(void);
void operation_8c22a55c(Object *o)
{
    float v2;
    float v1;
    float v11;
    int t1;
    v1 = (float)1.0f;
    if (!(o->fe8 >= 0xf0)) {
        if (o->fe8 > 0xa0) {
            v2 = (float)((float)(0xf0 - (int)o->fe8) / 80.0f);
            v1 = (float)v2;
        }
        if (1.0f > v1) {
            set_effect_blend_state(v1);
        }
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40(((char *)o + 0xd8));
        njRotateY_8c37df90(0, o->fe4);
        hs_8c3827d8(o->fac);
        operation_8c161c78(o->ff0);
        draw_tree_a702(o->fa8, o->fb0, o->fec);
        set_transform_node_callback_wrapper_2_8c161ce4(o->ff0);
        t1 = hs_8c18e8a0((int)o->fec, 0x1e);
        v11 = (float)(float)t1;
        hs_8c3827d8(o->fb8);
        draw_tree_a702(o->fb4, o->fbc, v11);
        hs_8c3827d8(o->fc4);
        draw_tree_a702(o->fc0, o->fc8, v11);
        njPopMatrixEx_8c38ad10();
        if (1.0f > v1) {
            restore_effect_blend_state();
        }
    }
}
