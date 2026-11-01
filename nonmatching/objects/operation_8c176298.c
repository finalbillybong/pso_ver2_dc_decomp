/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c176298
 * function: operation_8c176298
 * language: c
 * reference size: 416 bytes
 * compiled size: 416 bytes (+0.0%)
 * differing lines: 58 of 156 reference instruction lines
 * differing bytes: 38
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c4182cc S_g8c4182cc;
typedef struct S_g8c4da370 S_g8c4da370;
typedef struct S_g8c4da370_42c S_g8c4da370_42c;
typedef struct S_g8c4da370_42c_2c S_g8c4da370_42c_2c;
typedef struct S_g8c4da370_42c_68 S_g8c4da370_42c_68;
typedef struct S_vv2 S_vv2;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_30 S_vv7_30;
typedef struct S_vv7_4 S_vv7_4;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0xc];
} Block_frame_c;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct S_g8c4da370 {
    char unknown0[0x42c];
    S_g8c4da370_42c *f42c;
};
struct S_g8c4da370_42c {
    char unknown0[0x2c];
    S_g8c4da370_42c_2c *f2c;
    char unknown30[0x38];
    S_g8c4da370_42c_68 *f68;
};
struct S_g8c4da370_42c_68 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv2 {
    char unknown0[0x24];
    float f24;
    int f28;
};
struct S_vv7 {
    char unknown0[0x4];
    S_vv7_4 *f04;
    char unknown8[0x28];
    S_vv7_30 *f30;
};
extern float g_8c286290;
extern float g_8c286294;
extern Block16 g_8c319308;
extern Vector3 g_8c319318;
extern S_g8c4182cc *g_8c4182cc;
extern int g_8c46f560;
extern S_g8c4da370 *g_8c4da370;
extern int g_8c575570;
extern char g_8c418280[];
extern void call_8c3a9cec(float, float);
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(S_vv2 *);
extern void call_8c37dc90(void *, int);
extern void scale_current_matrix_v_8c37e390(Frame *);
extern void call_8c3aa702(void *);
extern void call_8c38c0f0(void *);
extern void call_8c38c0e6(int, int);
extern void call_8c37b566(int);
extern void njPopMatrixEx_8c38ad10(void);
extern void operation_8c0149c8(void *);
void operation_8c176298(int a0)
{
    Frame frame;
    char *v9;
    int v8;
    int v4;
    int v5;
    int v6;
    char *v1;
    S_vv7 *v7;
    S_vv2 *v2;
    int v3;
    float f;
    S_g8c4da370_42c_68 *p68;
    p68 = g_8c4da370->f42c->f68;
    *(Block16 *)&(&frame)->f0c = *(Block16 *)&g_8c319308;
    v9 = (char *)p68->f2c;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c319318;
    f = g_8c286290;
    (&frame)->f00.f00 = f;
    (&frame)->f00.f04 = f;
    (&frame)->f00.f08 = f;
    v1 = (char *)v9;
    call_8c3a9cec(*(float *)(g_8c418280 + 0x1c) * g_8c286294, *(float *)(g_8c418280 + 0x20) * g_8c286294);
    v2 = (S_vv2 *)(a0 + 0x24);
    call_8c3827d8((void *)(g_8c4da370->f42c->f2c));
    v3 = (int)0x8810;
    v4 = (int)0x800;
    v5 = (int)0xff00;
    v7 = (S_vv7 *)v1;
    v8 = (int)0;
    v6 = (int)0x2500;
    while (0x13 > v8) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40(v2);
        call_8c37dc90((void *)((int)v2 + 0x18), 0);
        scale_current_matrix_v_8c37e390((Frame *)((&frame)));
        switch (v2->f28) {
        case 0:
        case 1:
            call_8c3aa702((void *)(v7->f04));
            break;
        case 2:
            g_8c46f560 = (int)(g_8c575570);
            g_8c575570 |= v3;
            (&frame)->f0c.f00 = v2->f24;
            call_8c38c0f0((void *)(&(&frame)->f0c));
            call_8c38c0e6(v5, v4);
            call_8c37b566(v6);
            call_8c3aa702((void *)(v7->f04));
            call_8c38c0e6(v5, 0);
            g_8c575570 = (int)(g_8c46f560);
        }
        njPopMatrixEx_8c38ad10();
        v7 = (S_vv7 *)v7->f30;
        v2 = (S_vv2 *)((char *)v2 + 44);
        v8 = (int)(v8 + 1);
    }
    operation_8c0149c8(g_8c4182cc);
}
