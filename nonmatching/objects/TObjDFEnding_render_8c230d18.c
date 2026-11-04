/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c230d18
 * function: TObjDFEnding_render_8c230d18
 * language: c
 * reference size: 500 bytes
 * compiled size: 504 bytes (+0.8%)
 * differing lines: 90 of 190 reference instruction lines
 * differing bytes: 351
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TObjDFEnding.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_98 Arg0_98;
typedef struct Arg0_9c Arg0_9c;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_18 S_vv9_18;
typedef struct S_vv9_1c S_vv9_1c;
typedef struct S_vv9_24 S_vv9_24;
typedef struct Block_frame_0 {
    float f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x94];
    Arg0_94 *f94;
    Arg0_98 *f98;
    Arg0_9c *f9c;
    char unknowna0[0xac];
    float f14c;
};
struct S_vv9 {
    int f00;
    short f04;
    char unknown6[0x12];
    S_vv9_18 *f18;
    S_vv9_1c *f1c;
    float f20;
    S_vv9_24 *f24;
};
struct Frame {
    Block_frame_0 f00;
};
extern float g_8c3387e4;
extern float g_8c3387e8;
extern float g_8c3387ec;
extern char g_8c506540;
extern char g_8c506541;
extern char g_8c338b40[];
extern char g_8c338b4c[];
extern void reset_state_8c391c94(void);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c3827d8(void *);
extern void draw_tree_a702(void *, void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern int operation_8c04b8dc(int);
extern void operation_8c04b244(int, int, float, float, float);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c21abd0(short, void *, float, float);
extern void reset_state_8c391cc4(void);
void TObjDFEnding_render_8c230d18(Object *o)
{
    Frame frame;
    int v7;
    int v5;
    int v6;
    int v14;
    char *v8;
    S_vv9 *v9;
    int t1;
    if (g_8c506540 == 0) {
        *(float *)(g_8c338b40 + 0x8) = g_8c3387e4 + -100.0f;
        g_8c506540 = 1;
    }
    reset_state_8c391c94();
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)((void *)g_8c338b40));
    njScale_8c37e2e4(0, g_8c3387e8, 1.0f, 1.0f);
    call_8c3827d8((void *)(o->f98));
    draw_tree_a702((void *)(o->f94), (void *)(o->f9c), o->f14c);
    njPopMatrixEx_8c38ad10();
    v5 = (int)0x144;
    v6 = (int)0;
    v7 = (int)-1;
    goto L_8c230e74;
    v8 = (char *)v6;
L_8c230d96:;
    v9 = (S_vv9 *)((int)o + (int)(v8) * 0x28 + 0xa4);
    if (v9->f00 != 0) {
        if (g_8c506541 == 0) {
            *(float *)(g_8c338b4c + 0x4) = g_8c3387ec + 63.0f;
            *(float *)(g_8c338b4c + 0x14) = *(float *)(g_8c338b4c + 0xc) = g_8c3387ec + 343.0f;
            *(float *)(g_8c338b4c + 0x1c) = g_8c3387ec + 63.0f;
            g_8c506541 = 1;
        }
        v14 = (int)((int)v9 + 6);
        t1 = operation_8c04b8dc(v14);
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)((char *)g_8c338b4c + ((int)(v8) << 3));
        (&frame)->f00.f00 -= (float)(unsigned int)((unsigned int)t1 >> 1);
        operation_8c04b244(v14, v7, (&frame)->f00.f00, (&frame)->f00.f04, 0.1f);
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)((void *)g_8c338b40));
        translate_current_matrix_v_8c382a40((void *)(v9->f18));
        njRotateY_8c37df90(0, (void *)(v9->f1c));
        njScale_8c37e2e4(0, v9->f20, v9->f20, v9->f20);
        call_8c21abd0(v9->f04, (void *)(v9->f24), 0.0f, 1.0f);
        njPopMatrixEx_8c38ad10();
    }
    v6 = (int)(v8 + 1);
L_8c230e74:;
    v8 = (char *)v6;
    if (*(int *)((char *)((char *)o + 0x0) + (v5)) > v6) {
        goto L_8c230d96;
    }
    reset_state_8c391cc4();
}
