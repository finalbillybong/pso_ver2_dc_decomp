/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11b270
 * function: operation_8c11b270
 * language: c
 * reference size: 364 bytes
 * compiled size: 364 bytes (+0.0%)
 * differing lines: 18 of 135 reference instruction lines
 * differing bytes: 30
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
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x338];
    float f3a0;
    char unknown3a4[0x18];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
};
struct Frame {
    S_frame_0 *f00;
    int f04;
    float f08;
    float f0c;
    float f10;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslate_8c3829bc(int, float, float, float, float);
extern void call_8c0c5094(void *, void *, Frame *);
extern void njRotateZ_8c37e02c(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern void njRotateX_8c37dd28(int, int);
extern void scale_current_matrix_v_8c37e390(void *, float);
extern void call_8c11a920(void);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c11b270(Object *o)
{
    Frame frame;
    float v1;
    float v2;
    if (!(o->f3a0 > (o->f40 + 19.8f))) {
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, o->f3c * 0.25f + o->f3bc * 0.75f, o->f3a0 + 0.2f, o->f44 * 0.25f + o->f3c4 * 0.75f, 0.25f);
        call_8c0c5094((void *)(((char *)o + 0x170)), (void *)(&(&frame)->f04), (Frame *)((&frame)));
        njRotateZ_8c37e02c(0, (void *)((&frame)->f00));
        njRotateY_8c37df90(0, (void *)(o->f64));
        njRotateX_8c37dd28(0, (int)((&frame)->f04 + 0x4000));
        v2 = o->f40 - o->f3a0;
        if (v2 > 40.0f) {
            v2 = 40.0f;
        } else if (0.0f > v2) {
            v2 = 0.0f;
        }
        (&frame)->f08 = ((1.0f - v2 / 40.0f) * 0.65f + 0.1f) * 5.0f;
        (&frame)->f0c = ((1.0f - v2 / 40.0f) * 0.65f + 0.1f) * 2.0f;
        (&frame)->f10 = 1.0f;
        scale_current_matrix_v_8c37e390((void *)(&(&frame)->f08), v2 / 40.0f);
        call_8c11a920();
        njPopMatrixEx_8c38ad10();
    }
}
