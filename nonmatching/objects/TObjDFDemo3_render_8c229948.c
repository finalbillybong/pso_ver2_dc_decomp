/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c229948
 * function: TObjDFDemo3_render_8c229948
 * language: c
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 10 of 87 reference instruction lines
 * differing bytes: 21
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjDFDemo3.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_98 Arg0_98;
typedef struct Arg0_9c Arg0_9c;
typedef struct Arg0_a0 Arg0_a0;
typedef struct Arg0_b0 Arg0_b0;
typedef struct Arg0_bc Arg0_bc;
struct Object {
    char unknown0[0x98];
    Arg0_98 *f98;
    Arg0_9c *f9c;
    Arg0_a0 *fa0;
    char unknowna4[0xc];
    Arg0_b0 *fb0;
    int fb4;
    float fb8;
    Arg0_bc *fbc;
};
extern void set_effect_blend_state(float);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void operation_8c161c78(void *);
extern void draw_tree_a702(void *, void *, float);
extern void set_transform_node_callback_wrapper_2_8c161ce4(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void restore_effect_blend_state(void);
void TObjDFDemo3_render_8c229948(Object *o)
{
    int v1;
    float v5;
    v1 = (int)o->fb4;
    v5 = (float)1.0f;
    if (5 > v1) {
        v5 = (float)((float)v1 / 5.0f);
    } else {
        if (v1 > 0x86) {
            v5 = (float)((float)(0x8b - v1) / 5.0f);
        }
    }
    if (v5 > 0.0f) {
        if (1.0f > v5) {
            set_effect_blend_state(v5);
        }
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0xa4)));
        njRotateY_8c37df90(0, (void *)(o->fb0));
        call_8c3827d8((void *)(o->f9c));
        operation_8c161c78((void *)(o->fbc));
        draw_tree_a702((void *)(o->f98), (void *)(o->fa0), o->fb8);
        set_transform_node_callback_wrapper_2_8c161ce4((void *)(o->fbc));
        njPopMatrixEx_8c38ad10();
        if (1.0f > v5) {
            restore_effect_blend_state();
        }
    }
}
