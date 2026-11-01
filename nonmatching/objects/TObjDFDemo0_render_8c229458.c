/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c229458
 * function: TObjDFDemo0_render_8c229458
 * language: c
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 6 of 83 reference instruction lines
 * differing bytes: 9
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   constant loading; review found and fixed behaviour defects of the generator draft; not proven
 *   equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_ac Arg0_ac;
typedef struct Arg0_c4 Arg0_c4;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0xac];
    void *fac[6];
    void *fc4[6];
    void *fdc[6];
    float ff4;
    float ff8;
    float ffc;
};
extern void set_effect_blend_state(float);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c3827d8(void *);
extern void draw_tree_a702(void *, void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern void restore_effect_blend_state(void);
void TObjDFDemo0_render_8c229458(Object *o)
{
    float v1;
    float s;
    int i;
    int off;
    v1 = o->ffc;
    if (v1 != 0.0f) {
        if (1.0f > v1) {
            set_effect_blend_state(v1);
        }
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)0x8c337fb4);
        for (i = 0; i < 6; i++) {
            s = o->ff8;
            if ((unsigned int)i <= 1) {
                s = o->ff4;
            }
            off = i << 2;
            call_8c3827d8(*(void **)((char *)o->fc4 + off));
            draw_tree_a702(*(void **)((char *)o->fac + off), *(void **)((char *)o->fdc + off), s);
        }
        njPopMatrixEx_8c38ad10();
        if (1.0f > o->ffc) {
            restore_effect_blend_state();
        }
    }
}
