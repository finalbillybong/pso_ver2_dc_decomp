/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c229fa0
 * function: operation_8c229fa0
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 8 of 87 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_9c Arg0_9c;
typedef struct Arg0_a0 Arg0_a0;
typedef struct Arg0_a4 Arg0_a4;
typedef struct Arg0_e4 Arg0_e4;
struct Object {
    char unknown0[0xe4];
    Arg0_e4 *fe4;
    int fe8;
};
extern void set_effect_blend_state(float);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void draw_tree_a702(void *, void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern void restore_effect_blend_state(void);
void operation_8c229fa0(Object *o)
{
    float v1;
    int v12;
    int v11;
    float pm1;
    float v2;
    v1 = (float)1.0f;
    if (!(o->fe8 > 0x4c)) {
        if (o->fe8 > 0x44) {
            float pm2;
            pm2 = (float)(0x4c - (int)o->fe8) / 8.0f;
            pm1 = (pm2);
            v2 = pm1;
            v1 = (float)v2;
        }
        if (1.0f > v1) {
            set_effect_blend_state(v1);
        }
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0xd8)));
        njRotateY_8c37df90(0, (void *)(o->fe4));
        v11 = (int)0;
        while (2 > v11) {
            v12 = (int)(v11 * 0xc);
            call_8c3827d8((void *)(*(Arg0_a0 **)((char *)((char *)o + 0xa0) + (v12))));
            draw_tree_a702((void *)(*(Arg0_9c **)((char *)((char *)o + 0x9c) + (v12))), (void *)(*(Arg0_a4 **)(((char *)o + 0xa4) + (v12))), 120.0f);
            v11 = (int)(1 + v11);
        }
        njPopMatrixEx_8c38ad10();
        if (1.0f > v1) {
            restore_effect_blend_state();
        }
    }
}
