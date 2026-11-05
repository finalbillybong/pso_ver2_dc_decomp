/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fbc48
 * function: operation_8c0fbc48
 * language: c
 * reference size: 424 bytes
 * compiled size: 424 bytes (+0.0%)
 * differing lines: 72 of 159 reference instruction lines
 * differing bytes: 121
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
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct Arg2 {
    Vector3 f00;
};
struct Arg1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xcc];
    float ff8;
};
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern void vector_sub_in_place_8c37f6f0(void *);
extern float njScalor_8c37e480(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(Frame *, float);
extern float errno_wrap_8c130334(float, float);
extern void njRotateY_8c37df90(int, int);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c3827d8(void *);
extern void operation_8c0f7adc(float, float, float, float);
extern void operation_8c01cc90(void *);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c0fbc48(Object *o, Arg1 *a1, Arg2 *a2, float f0)
{
    Frame frame;
    float v2;
    float v3;
    float v1;
    float t1;
    float t2;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&a2->f00;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c));
    t2 = njScalor_8c37e480((void *)(&(&frame)->f0c));
    njPushMatrixEx_8c38ae68();
    v2 = (float)((f0 + 1.0f) * 0.5f);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&a1->f00;
    (&frame)->f00.f00 += v2 * (&frame)->f0c.f00;
    (&frame)->f00.f04 = v2 * (&frame)->f0c.f04 + -0.5f + (&frame)->f00.f04;
    v3 = (float)(v2 * (&frame)->f0c.f08 + (&frame)->f00.f08);
    (&frame)->f00.f08 = v3;
    translate_current_matrix_v_8c382a40((Frame *)((&frame)), v3);
    t1 = errno_wrap_8c130334((&frame)->f0c.f00, (&frame)->f0c.f08);
    njRotateY_8c37df90(0, (int)((int)(t1 * 65536.0f / 6.28318405f)));
    njScale_8c37e2e4(0, 1.0f, 0.5f, (1.0f - f0) * t2 / 10.0f);
    call_8c3827d8((void *)(o->f28));
    operation_8c0f7adc(f0 * 0.100000009f + 0.05f, 0.0f, 0.0f, 0.0f);
    v1 = (float)o->ff8;
    o->ff8 = 7.0f;
    operation_8c01cc90((void *)o);
    o->ff8 = v1;
    g_8c5755a4 = (int)(g_8c46f574);
    g_8c5755a8 = (int)(g_8c46f578);
    g_8c575570 = (int)(g_8c46f560);
    njPopMatrixEx_8c38ad10();
}
