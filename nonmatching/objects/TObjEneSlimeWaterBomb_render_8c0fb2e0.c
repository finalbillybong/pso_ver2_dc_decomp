/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fb2e0
 * function: TObjEneSlimeWaterBomb_render_8c0fb2e0
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 8 of 92 reference instruction lines
 * differing bytes: 14
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
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x354];
    float f39c;
};
struct Frame {
    S_frame_0 *f00;
    int f04;
    float f08;
    float f0c;
    float f10;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c0c5094(void *, void *, Frame *);
extern void njRotateZ_8c37e02c(int, void *);
extern void njRotateX_8c37dd28(int, int);
extern void scale_current_matrix_v_8c37e390(void *, float);
extern void call_8c11a920(void);
extern void njPopMatrixEx_8c38ad10(void);
void TObjEneSlimeWaterBomb_render_8c0fb2e0(Object *o)
{
    Frame frame;
    float v1;
    float v2;
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, o->f3c, o->f39c + 0.1f, o->f44);
    call_8c0c5094((void *)(((char *)o + 0x170)), (void *)(&(&frame)->f04), (Frame *)((&frame)));
    njRotateZ_8c37e02c(0, (void *)((&frame)->f00));
    njRotateX_8c37dd28(0, (int)((&frame)->f04 + 0x4000));
    v1 = o->f40 - o->f39c;
    if (v1 > 40.0f) {
        v1 = 40.0f;
    } else if (0.0f > v1) {
        v1 = 0.0f;
    }
    v1 = v1 / 40.0f;
    v2 = (1.0f - v1) * 0.65f + 0.1f;
    (&frame)->f0c = v2;
    (&frame)->f08 = v2;
    (&frame)->f10 = 1.0f;
    scale_current_matrix_v_8c37e390((void *)(&(&frame)->f08), v1);
    call_8c11a920();
    njPopMatrixEx_8c38ad10();
}
