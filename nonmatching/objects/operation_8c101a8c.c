/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c101a8c
 * function: operation_8c101a8c
 * language: c
 * reference size: 796 bytes
 * compiled size: 792 bytes (-0.5%)
 * differing lines: 130 of 291 reference instruction lines
 * differing bytes: 704
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
typedef struct S_L8c46f564 S_L8c46f564;
typedef struct S_L8c5755ac S_L8c5755ac;
typedef struct Frame Frame;
typedef struct S_g8c4182c8 S_g8c4182c8;
typedef struct S_g8c4d53a0 S_g8c4d53a0;
typedef struct S_g8c4d53a0_0 S_g8c4d53a0_0;
typedef struct S_g8c4d53a0_4 S_g8c4d53a0_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_10 S_vv5_10;
typedef struct S_vv5_14 S_vv5_14;
typedef struct S_vv5_18 S_vv5_18;
typedef struct S_vv5_24 S_vv5_24;
typedef struct S_vv5_24_4 S_vv5_24_4;
typedef struct Block_frame_10 {
    float f00;
    float f04;
    float f08;
} Block_frame_10;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0xc];
} Block_frame_0;
typedef struct Block_L8c46f564_0 {
    Vector3 f00;
    int f0c;
} Block_L8c46f564_0;
typedef struct Block_L8c5755ac_0 {
    Vector3 f00;
    int f0c;
} Block_L8c5755ac_0;
struct Frame {
    Block_frame_0 f00;
    Block_frame_10 f10;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    Block16 f30;
};
struct S_L8c5755ac {
    Block_L8c5755ac_0 f00;
};
struct S_L8c46f564 {
    Block_L8c46f564_0 f00;
};
struct S_g8c4d53a0 {
    S_g8c4d53a0_0 *f00;
    S_g8c4d53a0_4 *f04;
    int f08;
};
struct S_vv5 {
    char unknown0[0x2];
    short f02;
    float f04;
    float f08;
    float f0c;
    S_vv5_10 *f10;
    S_vv5_14 *f14;
    S_vv5_18 *f18;
    float f1c;
    char unknown20[0x4];
    S_vv5_24 *f24;
};
struct S_vv5_24 {
    char unknown0[0x4];
    S_vv5_24_4 *f04;
};
extern float g_8c30b050;
extern Block16 g_8c30b054;
extern Block16 g_8c30b0b8;
extern Vector3 g_8c30b0c8;
extern S_g8c4182c8 *g_8c4182c8;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern S_g8c4d53a0 *g_8c4d53a0;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern S_L8c46f564 g_8c46f564;
extern S_L8c5755ac g_8c5755ac;
extern void copy_vector_8c37e990(void *);
extern void call_8c37e4c0(void *);
extern void call_8c380c5a(int, void *);
extern void call_8c3a8b38(float, float, float);
extern void call_8c3a8b7e(float, float, float);
extern void call_8c3a8b70(float, float);
extern void reset_state_8c391c94(void);
extern void call_8c38c0e6(int, int);
extern void call_8c3827d8(void *);
extern void operation_8c100e40(float);
extern void call_8c38c0f0(Frame *);
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c37ddbc(int, void *, void *, void *);
extern void call_8c100e4c(void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c101f44(int);
extern void call_8c1020a0(int);
extern void reset_state_8c391cc4(void);
extern int get_render_state(void);
extern void operation_8c0148ac(void *);
extern void operation_8c0148cc(void *);
extern void operation_8c014894(void *);
void operation_8c101a8c(int a0)
{
    Frame frame;
    char *v1;
    int v4;
    S_vv5 *v5;
    float v6;
    int t1;
    *(Block16 *)&(&frame)->f30 = *(Block16 *)&g_8c30b0b8;
    (&frame)->f28 = 256.0f;
    (&frame)->f2c = 352.0f;
    (&frame)->f20 = 640.0f;
    (&frame)->f24 = 480.0f;
    (&frame)->f1c = 500.0f;
    copy_vector_8c37e990((void *)(&(&frame)->f1c));
    call_8c37e4c0((void *)((void *)0x8c4d5998));
    call_8c380c5a(2, (void *)(&(&frame)->f30));
    *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&g_8c30b0c8;
    call_8c3a8b38((&frame)->f10.f00, (&frame)->f10.f04, (&frame)->f10.f08);
    call_8c3a8b7e(1.0f, 1.0f, 1.0f);
    call_8c3a8b70(0.0f, 1.0f);
    reset_state_8c391c94();
    g_8c46f560 = (int)(g_8c575570);
    *(Vector3 *)&(&g_8c46f564)->f00.f00 = *(Vector3 *)&(&g_8c5755ac)->f00.f00;
    v1 = (char *)(&g_8c5755ac)->f00.f0c;
    (&g_8c46f564)->f00.f0c = (int)(v1);
    g_8c46f574 = (int)(g_8c5755a4);
    g_8c46f578 = (int)(g_8c5755a8);
    g_8c575570 |= 0x810;
    call_8c38c0e6(-0xff01, 0x900);
    if (g_8c4d53a0->f04 != 0) {
        call_8c3827d8((void *)(g_8c4d53a0->f04));
    }
    operation_8c100e40(0.7f);
    *(Block16 *)&(&frame)->f00 = *(Block16 *)&g_8c30b054;
    v4 = (int)0;
    v5 = (S_vv5 *)g_8c4d53a0->f00;
    while (g_8c4d53a0->f08 > v4) {
        if (((v5->f02 & 1)) == 0) {
            v5->f1c += 0.08f;
            v6 = (float)g_8c30b050;
            if (v5->f1c > v6) {
                v5->f1c = v6;
            }
            (&frame)->f00.f00 = v5->f1c;
            call_8c38c0f0((Frame *)((&frame)));
            njPushMatrixEx_8c38ae68();
            njTranslate_8c3829bc(0, v5->f04, v5->f08, v5->f0c);
            call_8c37ddbc(0, (void *)(v5->f10), (void *)(v5->f14), (void *)(v5->f18));
            call_8c100e4c((void *)(v5->f24->f04), -0.00055f);
            njPopMatrixEx_8c38ad10();
            call_8c38c0f0((Frame *)((void *)0x8c305fd8));
        }
        v4 = (int)(v4 + 1);
        v5 = (S_vv5 *)((char *)v5 + 40);
    }
    g_8c5755a4 = (int)(g_8c46f574);
    g_8c5755a8 = (int)(g_8c46f578);
    *(Block16 *)&(&g_8c5755ac)->f00 = *(Block16 *)&(&g_8c46f564)->f00;
    g_8c575570 = (int)(g_8c46f560);
    ((void (*)(float, void *))operation_8c100e40)(0.8f, (void *)&g_8c575570);
    call_8c101f44(a0);
    operation_8c100e40(0.75f);
    call_8c1020a0(a0);
    reset_state_8c391cc4();
    t1 = get_render_state();
    copy_vector_8c37e990((void *)t1);
    call_8c37e4c0((void *)((void *)0x8c46ee84));
    call_8c380c5a(2, (void *)(t1 + 0x14));
    operation_8c0148ac(g_8c4182c8);
    operation_8c0148cc(g_8c4182c8);
    operation_8c014894(g_8c4182c8);
}
