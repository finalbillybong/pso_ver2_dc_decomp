/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b31bc
 * function: TBoss4Zanzo_render_8c1b31bc
 * language: c
 * reference size: 160 bytes
 * compiled size: 188 bytes (+17.5%)
 * differing lines: 82 of 62 reference instruction lines
 * differing bytes: 173
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +28 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
    float f3c;
    float f40;
    float f44;
    int f48;
    int f4c;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void set_effect_blend_state(float);
extern void draw_tree_a702(void *, void *, float);
extern void restore_effect_blend_state(void);
extern void njPopMatrixEx_8c38ad10(void);
void TBoss4Zanzo_render_8c1b31bc(Object *o)
{
    char *v21;
    int v22;
    float v24;
    float v23;
    v21 = (char *)o->f4c;
    v22 = (int)o->f48;
    v23 = (float)o->f40;
    v24 = (float)o->f44;
    if (((float)(int)v21 / (float)v22 * (v24 - v23) + v23) > 0.01f) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x20)));
        njRotateY_8c37df90(0, (void *)(o->f2c));
        call_8c3827d8((void *)(o->f30));
        set_effect_blend_state((float)(int)v21 / (float)v22 * (v24 - v23) + v23);
        draw_tree_a702((void *)(o->f34), (void *)(o->f38), o->f3c);
        restore_effect_blend_state();
        njPopMatrixEx_8c38ad10();
    }
}
