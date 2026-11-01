/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c082dc8
 * function: operation_8c082dc8
 * language: c
 * reference size: 316 bytes
 * compiled size: 312 bytes (-1.3%)
 * differing lines: 46 of 117 reference instruction lines
 * differing bytes: 246
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c469c2c S_L8c469c2c;
typedef struct S_L8c469c2c_10 S_L8c469c2c_10;
typedef struct S_L8c469c2c_10_4 S_L8c469c2c_10_4;
typedef struct S_L8c469c2c_10_4_4 S_L8c469c2c_10_4_4;
typedef struct S_L8c469c2c_8 S_L8c469c2c_8;
typedef struct S_L8c469c2c_8_4 S_L8c469c2c_8_4;
typedef struct S_L8c469c2c_8_4_4 S_L8c469c2c_8_4_4;
typedef struct S_L8c469c2c_c S_L8c469c2c_c;
typedef struct S_L8c469c2c_c_4 S_L8c469c2c_c_4;
typedef struct S_L8c469c2c_c_4_4 S_L8c469c2c_c_4_4;
typedef struct Frame Frame;
typedef struct S_g8c469c20 S_g8c469c20;
typedef struct S_g8c469c24 S_g8c469c24;
typedef struct S_g8c469c2c S_g8c469c2c;
typedef struct Object Object;
typedef struct Arg0_108 Arg0_108;
typedef struct Arg0_64 Arg0_64;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0xc];
} Block_frame_0;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x84];
    float fec;
    char unknownf0[0xc];
    float ffc;
    char unknown100[0x8];
    Arg0_108 *f108;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_L8c469c2c {
    S_g8c469c2c *f00;
    char unknown4[0x4];
    S_L8c469c2c_8 *f08;
    S_L8c469c2c_c *f0c;
    S_L8c469c2c_10 *f10;
};
struct S_L8c469c2c_8 {
    char unknown0[0x4];
    S_L8c469c2c_8_4 *f04;
};
struct S_L8c469c2c_8_4 {
    char unknown0[0x4];
    S_L8c469c2c_8_4_4 *f04;
};
struct S_L8c469c2c_c {
    char unknown0[0x4];
    S_L8c469c2c_c_4 *f04;
};
struct S_L8c469c2c_c_4 {
    char unknown0[0x4];
    S_L8c469c2c_c_4_4 *f04;
};
struct S_L8c469c2c_10 {
    char unknown0[0x4];
    S_L8c469c2c_10_4 *f04;
};
struct S_L8c469c2c_10_4 {
    char unknown0[0x4];
    S_L8c469c2c_10_4_4 *f04;
};
extern S_g8c469c20 *g_8c469c20;
extern S_g8c469c24 *g_8c469c24;
extern int g_8c46f560;
extern int g_8c575570;
extern S_L8c469c2c g_8c469c2c;
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3ac53a(void *, void *, float);
extern void reset_state_8c391c94(void);
extern void call_8c38c0f0(Frame *);
extern void call_8c0345cc(void *, void *);
extern void call_8c3aa716(S_L8c469c2c_8 *);
extern void reset_state_8c391cc4(void);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c082dc8(Object *o)
{
    Frame frame;
    call_8c3827d8(g_8c469c20);
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3ac53a((void *)((&g_8c469c2c)->f00), g_8c469c24, o->fec);
    reset_state_8c391c94();
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x10;
    *(Block16 *)&(&frame)->f00 = *(Block16 *)&*(Block16 *)((char *)0x8c2ff128 + ((int)(o->f108) << 4));
    (&frame)->f00.f00 = o->ffc;
    call_8c38c0f0((Frame *)((&frame)));
    call_8c0345cc((void *)((&g_8c469c2c)->f08->f04->f04), (void *)(o->f108));
    call_8c3aa716((S_L8c469c2c_8 *)((&g_8c469c2c)->f08));
    g_8c575570 = (int)(g_8c46f560);
    call_8c0345cc((void *)((&g_8c469c2c)->f0c->f04->f04), (void *)0xa);
    call_8c0345cc((void *)((&g_8c469c2c)->f10->f04->f04), (void *)0xa);
    call_8c3aa716((S_L8c469c2c_8 *)((&g_8c469c2c)->f0c));
    call_8c3aa716((S_L8c469c2c_8 *)((&g_8c469c2c)->f10));
    reset_state_8c391cc4();
    njPopMatrixEx_8c38ad10();
}
