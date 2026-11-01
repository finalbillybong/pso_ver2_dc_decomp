/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fad14
 * function: operation_8c0fad14
 * language: c
 * reference size: 600 bytes
 * compiled size: 600 bytes (+0.0%)
 * differing lines: 82 of 228 reference instruction lines
 * differing bytes: 323
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_39c Arg0_39c;
typedef struct Arg0_39c_42c Arg0_39c_42c;
typedef struct Arg0_39c_42c_8 Arg0_39c_42c_8;
typedef struct Arg0_39c_42c_c Arg0_39c_42c_c;
typedef struct Block_frame_10 {
    float f00;
    float f04;
    float f08;
} Block_frame_10;
typedef struct Block_frame_28 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_28;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x348];
    Vector3 f390;
    Arg0_39c *f39c;
    char unknown3a0[0x1c];
    float f3bc;
    char unknown3c0[0x50];
    int f410;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    Block_frame_10 f10;
    float f1c;
    float f20;
    float f24;
    Block_frame_28 f28;
};
struct Arg0_39c {
    char unknown0[0x42c];
    Arg0_39c_42c *f42c;
};
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern void call_8c3bdf60(void *, void *);
extern float call_8c130334(float, float);
extern float njScalor_8c37e480(void *);
extern void call_8c38c0e6(int, int);
extern void call_8c38c0f0(Frame *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, int);
extern void njScaleV_8c37e3d0(int, void *);
extern void call_8c3827d8(void *);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c0fad14(Object *o)
{
    Frame frame;
    float v1;
    int v2;
    int v4;
    float t1;
    float t2;
    v1 = (float)o->f3bc;
    v1 = (float)(v1 * 0.5f);
    *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&o->f3c;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f10), (void *)(&o->f390));
    (&frame)->f10.f00 *= 0.5f;
    (&frame)->f10.f04 *= 0.5f;
    (&frame)->f10.f08 *= 0.5f;
    *(Vector3 *)&(&frame)->f28 = *(Vector3 *)&o->f390;
    call_8c3bdf60((void *)(&(&frame)->f28), (void *)(&(&frame)->f10));
    (&frame)->f28.f04 += -1.125f;
    t2 = call_8c130334((&frame)->f10.f00, (&frame)->f10.f08);
    v2 = (int)(int)(t2 * 65536.0f / 6.28318405f);
    (&frame)->f1c = 1.25f;
    (&frame)->f20 = 0.214285716f;
    t1 = njScalor_8c37e480((void *)(&(&frame)->f10));
    (&frame)->f24 = t1 * 1.25f / 11.0f;
    if ((&frame)->f24 < (&frame)->f1c) {
        (&frame)->f1c = (&frame)->f24;
    }
    if (0.05f > v1 || 0.05f > (&frame)->f1c) {
        return;
    }
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x20;
    g_8c46f574 = (int)(g_8c5755a4);
    g_8c46f578 = (int)(g_8c5755a8);
    call_8c38c0e6(0xff00, 0x800);
    (&frame)->f00 = v1 + -1.0f;
    (&frame)->f04 = -1.0f;
    (&frame)->f08 = 0.0f;
    (&frame)->f0c = 1.0f;
    call_8c38c0f0((Frame *)((&frame)));
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(&(&frame)->f28));
    njRotateY_8c37df90(0, v2);
    njScaleV_8c37e3d0(0, (void *)(&(&frame)->f1c));
    v4 = (int)(*(int *)((char *)0x8c30a5f4 + (o->f410 << 2)) << 4);
    call_8c3827d8((void *)(*(Arg0_39c_42c_c **)((char *)((char *)o->f39c->f42c + 0xc) + (v4))));
    call_8c3aa716((void *)(*(Arg0_39c_42c_8 **)((char *)((char *)o->f39c->f42c + 0x8) + (v4))));
    njPopMatrixEx_8c38ad10();
    g_8c5755a4 = (int)(g_8c46f574);
    g_8c5755a8 = (int)(g_8c46f578);
    g_8c575570 = (int)(g_8c46f560);
}
