/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c2470
 * function: operation_8c1c2470
 * language: c
 * reference size: 600 bytes
 * compiled size: 628 bytes (+4.7%)
 * differing lines: 312 of 265 reference instruction lines
 * differing bytes: 593
 * provenance: generator draft (mode movcseext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +28 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2890ec S_L8c2890ec;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv2 S_vv2;
typedef struct S_vv8 S_vv8;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct S_vv1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
};
struct S_L8c2890ec {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct S_vv2 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    Vector3 f24;
    char unknown30[0x14];
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    char unknown60[0x8];
    Vector3 f68;
};
struct S_vv8 {
    char unknown0[0x1c];
    float f1c;
    float f20;
};
struct S_vv10 {
    float f00;
    char unknown4[0x4];
    float f08;
    char unknownc[0x24];
    Vector3 f30;
    float f3c;
    int f40;
};
extern S_L8c2890ec g_8c2890ec;
extern void njPushMatrixEx_8c38ae68(void);
extern void njUnitMatrix_8c37b5c4(int);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void normalize_vector_checked(void *);
extern void call_8c3be38c(int, Frame *, Frame *);
extern void call_8c3be2dc(int, S_vv10 *, S_vv10 *, int);
extern void call_8c3bdf60(void *, int);
extern float signed_sqrt_8c37f6c0(float);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c1c2470(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    S_vv10 *v10;
    float v4;
    float v6;
    float v5;
    float v7;
    S_vv2 *v2;
    S_vv8 *v8;
    int v12;
    int v3;
    int v13;
    int v9;
    float t1;
    v1 = (S_vv1 *)((char *)o + 0x98);
    *(Vector3 *)&v1->f00 = *(Vector3 *)&o->f3c;
    njPushMatrixEx_8c38ae68();
    njUnitMatrix_8c37b5c4(0);
    translate_current_matrix_v_8c382a40((void *)(&o->f3c));
    njRotateY_8c37df90(0, (void *)(o->f64));
    v2 = (S_vv2 *)((char *)o + 0xb4);
    v3 = (int)0;
    while (4 > v3) {
        v4 = (float)*(float *)((char *)&g_8c2890ec.f0c + (v3 << 3));
        v5 = (float)*(float *)((char *)&g_8c2890ec.f08 + (v3 << 3));
        v6 = (float)*(float *)((char *)&g_8c2890ec.f04 + (v3 << 3));
        v7 = (float)*(float *)((char *)&g_8c2890ec + (v3 << 3));
        (&frame)->f00.f00 = -(v4 - v6);
        (&frame)->f00.f04 = 0.0f;
        (&frame)->f00.f08 = v5 - v7;
        normalize_vector_checked((void *)(&frame));
        call_8c3be38c(0, (Frame *)((&frame)), (Frame *)((&frame)));
        *(Vector3 *)&v2->f24 = *(Vector3 *)&(&frame)->f00;
        v2->f00 = v7;
        v2->f04 = 40.0f;
        v2->f08 = v6;
        v2->f0c = v7;
        v2->f10 = 0.0f;
        v2->f14 = v6;
        v2->f18 = v5;
        v2->f1c = 40.0f;
        v2->f20 = v4;
        *(Vector3 *)&v2->f68 = *(Vector3 *)&(&frame)->f00;
        v2->f44 = v5;
        v2->f48 = 40.0f;
        v2->f4c = v4;
        v2->f50 = v7;
        v2->f54 = 0.0f;
        v2->f58 = v6;
        v2->f5c = v5;
        v8 = (S_vv8 *)((int)v2 + 0x44);
        v8->f1c = 0.0f;
        v8->f20 = v4;
        v3 = (int)(v3 + 1);
        v2 = (S_vv2 *)((char *)v2 + 136);
    }
    v10 = (S_vv10 *)((char *)o + 0xb4);
    v3 = (int)0;
    v9 = (int)0xde0;
    while (8 > v3) {
        call_8c3be2dc(0, v10, v10, 3);
        (&frame)->f0c.f00 = 0.0f;
        (&frame)->f0c.f04 = 0.0f;
        (&frame)->f0c.f08 = 0.0f;
        v12 = (int)0;
        while (3 > v12) {
            v13 = (int)v10;
            v13 = (int)(v13 + v12 * 0xc);
            call_8c3bdf60((void *)(&(&frame)->f0c), v13);
            v12 = (int)(v12 + 1);
        }
        (&frame)->f0c.f00 = (&frame)->f0c.f00 / 3.0f;
        (&frame)->f0c.f04 = (&frame)->f0c.f04 / 3.0f;
        (&frame)->f0c.f08 = (&frame)->f0c.f08 / 3.0f;
        *(Vector3 *)&v10->f30 = *(Vector3 *)&(&frame)->f0c;
        t1 = signed_sqrt_8c37f6c0((v10->f00 - (&frame)->f0c.f00) * (v10->f00 - (&frame)->f0c.f00) + (v10->f08 - (&frame)->f0c.f08) * (v10->f08 - (&frame)->f0c.f08));
        v10->f3c = t1;
        v10->f40 = (int)(v9);
        v3 = (int)(v3 + 1);
        v10 = (S_vv10 *)((char *)v10 + 68);
    }
    njPopMatrixEx_8c38ad10();
}
