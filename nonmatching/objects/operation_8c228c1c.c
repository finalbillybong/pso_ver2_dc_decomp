/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c228c1c
 * function: operation_8c228c1c
 * language: c
 * reference size: 528 bytes
 * compiled size: 524 bytes (-0.8%)
 * differing lines: 72 of 201 reference instruction lines
 * differing bytes: 331
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03ef88 S_c8c03ef88;
typedef struct S_c8c03ef88_4 S_c8c03ef88_4;
typedef struct S_c8c03ef88_4_4 S_c8c03ef88_4_4;
typedef struct Object Object;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_ec Arg0_ec;
typedef struct Arg0_f0 Arg0_f0;
typedef struct Arg0_f4 Arg0_f4;
typedef struct Arg0_f8 Arg0_f8;
typedef struct S_vv30 S_vv30;
typedef struct S_vv30_4 S_vv30_4;
typedef struct S_vv7 S_vv7;
typedef struct S_x7312 S_x7312;
struct Object {
    char unknown0[0xf8];
    Arg0_f8 *ff8;
    char unknownfc[0x14];
    Arg0_110 *f110;
    int f114;
    char unknown118[0x4];
    float f11c;
};
struct S_c8c03ef88 {
    char unknown0[0x4];
    S_c8c03ef88_4 *f04;
};
struct S_c8c03ef88_4 {
    char unknown0[0x4];
    S_c8c03ef88_4_4 *f04;
};
struct S_vv7 {
    short f00;
};
struct S_vv30 {
    int f00;
    S_vv30_4 *f04;
    int f08;
};
struct S_x7312 {
    float f00;
};
extern int g_8c575570;
extern char g_8c337e8c[];
extern S_c8c03ef88 *call_8c03ef88(void *, int);
extern void set_effect_blend_state(float);
extern void call_8c397c90(void *, float, float);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void draw_tree_a702(void *, void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern void restore_effect_blend_state(void);
void operation_8c228c1c(Object *o)
{
    int v1;
    int v6;
    S_vv7 *v7;
    float v12;
    int v17;
    float v22;
    int v27;
    int v29;
    S_vv30 *v30;
    int v28;
    float v2;
    int v35;
    int v36;
    int v34;
    S_c8c03ef88 *t1;
    S_c8c03ef88 *t2;
    v1 = (int)o->f114;
    v2 = (float)1.0f;
    if (0x7c >= v1) {
        return;
    }
    if (0x88 > v1) {
        v2 = (float)((float)(v1 + -0x7c) / 12.0f);
    }
    t1 = call_8c03ef88((void *)(o->ff8), 0x6a);
    v6 = (int)o->f114;
    v7 = (S_vv7 *)((int)t1->f04->f04 + 6);
    v12 = 0.0f;
    if (v6 >= 0xf0) {
        v12 = 1.0f;
    } else if (v6 > 0xe6) {
        v12 = (float)(v6 + -0xe6) / 10.0f;
    }
    v7->f00 = (unsigned char)v7->f00 | (int)(v12 * 255.0f) << 8;
    v17 = (int)o->f114;
    if (v17 >= 0x104) {
        v22 = (float)1.0f;
    } else {
        v22 = (float)0.0f;
        if (v17 > 0xf0) {
            v22 = (float)((float)(v17 + -0xf0) / 20.0f);
        }
    }
    v27 = (int)(int)(v22 * 255.0f);
    v28 = (int)(v27 << 8);
    v29 = (int)0;
    while (3 > v29) {
        v30 = (S_vv30 *)(v29 * 0xc + g_8c337e8c);
        t2 = call_8c03ef88((void *)(*(Arg0_ec **)((char *)((char *)o + 0xec) + (v30->f00 * 0xc))), (int)(v30->f04));
        *(short *)((char *)((char *)t2->f04->f04 + 0x0) + (v30->f08 << 1)) = (unsigned char)*(short *)((char *)((char *)t2->f04->f04 + 0x0) + (v30->f08 << 1)) | v28;
        v29 = (int)(v29 + 1);
    }
    if (1.0f > v2) {
        set_effect_blend_state(v2);
    }
    g_8c575570 |= 0x20000;
    call_8c397c90((void *)((void *)&g_8c575570), 0.0f, o->f11c);
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x104)));
    njRotateY_8c37df90(0, (void *)(o->f110));
    v35 = (int)0;
    v34 = (int)0x118;
    while (2 > v35) {
        v36 = (int)(v35 * 0xc);
        call_8c3827d8((void *)(*(Arg0_f0 **)((char *)((char *)o + 0xf0) + (v36))));
        draw_tree_a702((void *)(*(Arg0_ec **)((char *)((char *)o + 0xec) + (v36))), (void *)(*(Arg0_f4 **)((char *)((char *)o + 0xf4) + (v36))), ((S_x7312 *)((int)o + v34))->f00);
        v35 = (int)(v35 + 1);
    }
    njPopMatrixEx_8c38ad10();
    g_8c575570 &= -0x20001;
    if (1.0f > v2) {
        restore_effect_blend_state();
    }
}
