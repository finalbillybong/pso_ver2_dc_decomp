/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2284c0
 * function: TObjDFDemo2_render_8c2284c0
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 26 of 96 reference instruction lines
 * differing bytes: 64
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjDFDemo2.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_98 Arg0_98;
typedef struct Arg0_9c Arg0_9c;
typedef struct Arg0_bc Arg0_bc;
struct Object {
    char unknown0[0xac];
    int fac;
    char unknownb0[0xc];
    Arg0_bc *fbc;
    int fc0;
    float fc4;
};
extern void set_effect_blend_state(float);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void draw_tree_a702(void *, void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern void restore_effect_blend_state(void);
void TObjDFDemo2_render_8c2284c0(Object *o)
{
    float v2;
    float v1;
    int v15;
    int v14;
    v1 = (float)1.0f;
    if (o->fac == 0) {
        if (o->fc0 >= 0xf0) {
            return;
        }
        if (o->fc0 > 0xc8) {
            v2 = (float)((float)(0xf0 - (int)o->fc0) / 40.0f);
            v1 = (float)v2;
        }
    }
    if (v1 > 0.0f) {
        if (1.0f > v1) {
            set_effect_blend_state(v1);
        }
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0xb0)));
        njRotateY_8c37df90(0, (void *)(o->fbc));
        v14 = (int)0;
        while (2 > v14) {
            v15 = (int)(v14 * 0xc);
            call_8c3827d8((void *)(*(Arg0_98 **)((char *)((char *)o + 0x98) + (v15))));
            v2 = o->fc4;
            draw_tree_a702((void *)(*(Arg0_94 **)((char *)((char *)o + 0x94) + (v15))), (void *)(*(Arg0_9c **)((char *)((char *)o + 0x9c) + (v15))), v2);
            v14 = (int)(v14 + 1);
        }
        njPopMatrixEx_8c38ad10();
        if (1.0f > v1) {
            restore_effect_blend_state();
        }
    }
}
