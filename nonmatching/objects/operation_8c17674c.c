/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17674c
 * function: operation_8c17674c
 * language: c
 * reference size: 456 bytes
 * compiled size: 456 bytes (+0.0%)
 * differing lines: 76 of 168 reference instruction lines
 * differing bytes: 68
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
typedef struct S_g8c4da370_42c_58 S_g8c4da370_42c_58;
typedef struct Object Object;
typedef struct Arg0_4f4 Arg0_4f4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_18 S_vv2_18;
typedef struct S_vv2_20 S_vv2_20;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_30 S_vv6_30;
typedef struct S_vv6_4 S_vv6_4;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0xc];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c4da370 {
    char unknown0[0x42c];
    S_g8c4da370_42c *f42c;
};
struct S_g8c4da370_42c {
    char unknown0[0x2c];
    S_g8c4da370_42c_2c *f2c;
    char unknown30[0x28];
    S_g8c4da370_42c_58 *f58;
};
struct S_g8c4da370_42c_58 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv2 {
    char unknown0[0x18];
    S_vv2_18 *f18;
    char unknown1c[0x4];
    S_vv2_20 *f20;
    float f24;
    int f28;
};
struct Object {
    char unknown0[0x4f4];
    Arg0_4f4 *f4f4;
    float f4f8;
    float f4fc;
    float f500;
};
struct S_vv6 {
    char unknown0[0x4];
    S_vv6_4 *f04;
    char unknown8[0x28];
    S_vv6_30 *f30;
};
extern float g_8c286294;
extern Block16 g_8c319324;
extern S_g8c4182cc *g_8c4182cc;
extern int g_8c46f560;
extern S_g8c4da370 *g_8c4da370;
extern int g_8c575570;
extern char g_8c418280[];
extern void call_8c3a9cec(float, float);
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(S_vv2 *);
extern void njRotateZ_8c37e02c(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c38a714(int, void *);
extern void call_8c3aa702(void *);
extern void call_8c38c0f0(Frame *);
extern void call_8c38c0e6(int, int);
extern void call_8c37b566(int);
extern void njPopMatrixEx_8c38ad10(void);
extern void operation_8c0149c8(void *);
void operation_8c17674c(Object *o)
{
    Frame frame;
    char *v8;
    S_vv2 *v2;
    int v7;
    int v4;
    int v5;
    char *v1;
    int v3;
    S_vv6 *v6;
    v8 = (char *)g_8c4da370->f42c->f58->f2c;
    *(Block16 *)&(&frame)->f00 = *(Block16 *)&g_8c319324;
    v1 = (char *)v8;
    call_8c3a9cec(*(float *)(g_8c418280 + 0x1c) * g_8c286294, *(float *)(g_8c418280 + 0x20) * g_8c286294);
    v2 = (S_vv2 *)((char *)o + 0x24);
    call_8c3827d8((void *)(g_8c4da370->f42c->f2c));
    njPushMatrixEx_8c38ae68();
    v3 = (int)0x800;
    v4 = (int)0xff00;
    v6 = (S_vv6 *)v1;
    v7 = (int)0;
    v5 = (int)0x2500;
    while (0x1c > v7) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40(v2);
        njRotateZ_8c37e02c(0, (void *)(v2->f20));
        njRotateX_8c37dd28(0, (void *)(v2->f18));
        njTranslate_8c3829bc(0, -o->f4f8, -o->f4fc, -o->f500);
        call_8c38a714(0, (void *)(o->f4f4));
        switch (v2->f28) {
        case 0:
        case 1:
            call_8c3aa702((void *)(v6->f04));
            break;
        case 2:
            g_8c46f560 = (int)(g_8c575570);
            g_8c575570 |= 0x8810;
            (&frame)->f00.f00 = v2->f24;
            call_8c38c0f0((Frame *)((&frame)));
            call_8c38c0e6(v4, v3);
            call_8c37b566(v5);
            call_8c3aa702((void *)(v6->f04));
            call_8c38c0e6(v4, 0);
            g_8c575570 = (int)(g_8c46f560);
        }
        njPopMatrixEx_8c38ad10();
        v6 = (S_vv6 *)v6->f30;
        v2 = (S_vv2 *)((char *)v2 + 44);
        v7 = (int)(v7 + 1);
    }
    njPopMatrixEx_8c38ad10();
    operation_8c0149c8(g_8c4182cc);
}
