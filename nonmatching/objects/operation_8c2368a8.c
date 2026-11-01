/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2368a8
 * function: operation_8c2368a8
 * language: c
 * reference size: 400 bytes
 * compiled size: 392 bytes (-2.0%)
 * differing lines: 82 of 161 reference instruction lines
 * differing bytes: 249
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_30 S_frame_30;
typedef struct S_frame_38 S_frame_38;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    int f24;
    int f28;
    void *f2c;
    S_frame_30 *f30;
    char unknown34[0x4];
    S_frame_38 *f38;
};
extern int g_8c4d8340;
extern void call_8c0c5094(int, void *, void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(int);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateZ_8c37e02c(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void njRotateY_8c37df90(int, int);
extern void scale_current_matrix_v_8c37e390(int);
extern void call_8c38c0f0(Frame *);
extern void reset_state_8c391c94(void);
extern void call_8c37ebdc(void *, int, int);
extern void reset_state_8c391cc4(void);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c2368a8(int a0, int a1, int a2, int a3, register int a4, float f0)
{
    Frame frame;
    if (g_8c4d8340 == 0) {
        return;
    }
    call_8c0c5094(a2, (void *)(&(&frame)->f30), (void *)(&(&frame)->f38));
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40(a1);
    njTranslate_8c3829bc(0, 0.0f, 0.3f, 0.0f);
    njRotateZ_8c37e02c(0, (void *)((&frame)->f38));
    njRotateX_8c37dd28(0, (void *)((&frame)->f30));
    njRotateY_8c37df90(0, a3);
    if (a4 != 0) {
        scale_current_matrix_v_8c37e390(a4);
    }
    njRotateX_8c37dd28(0, (void *)-0x4000);
    (&frame)->f10 = -5.0f;
    (&frame)->f14 = 0.0f;
    (&frame)->f00 = f0;
    (&frame)->f18 = 0.0f;
    (&frame)->f04 = 1.0f;
    (&frame)->f1c = 1.0f;
    (&frame)->f20 = 1.0f;
    (&frame)->f08 = 1.0f;
    (&frame)->f24 = 0;
    (&frame)->f28 = (int)(g_8c4d8340);
    (&frame)->f0c = 1.0f;
    (&frame)->f2c = (void *)0x8c3395fc;
    call_8c38c0f0((Frame *)((&frame)));
    reset_state_8c391c94();
    call_8c37ebdc((void *)(&(&frame)->f10), 0, 0x22);
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = 0.0f;
    call_8c37ebdc((void *)(&(&frame)->f10), 0, 0x26);
    (&frame)->f10 = -5.0f;
    (&frame)->f14 = -5.0f;
    call_8c37ebdc((void *)(&(&frame)->f10), 0, 0x2a);
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = -5.0f;
    call_8c37ebdc((void *)(&(&frame)->f10), 0, 0x2e);
    reset_state_8c391cc4();
    call_8c38c0f0((Frame *)((void *)0x8c305fd8));
    njPopMatrixEx_8c38ad10();
}
