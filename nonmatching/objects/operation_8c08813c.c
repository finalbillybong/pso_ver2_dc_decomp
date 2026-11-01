/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08813c
 * function: operation_8c08813c
 * language: c
 * reference size: 1044 bytes
 * compiled size: 1048 bytes (+0.4%)
 * differing lines: 258 of 385 reference instruction lines
 * differing bytes: 912
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct Arg0_68 Arg0_68;
typedef struct Arg0_6c Arg0_6c;
typedef struct Arg0_74 Arg0_74;
typedef struct S_vv1 S_vv1;
typedef struct S_vv12 S_vv12;
typedef struct S_vv12_18 S_vv12_18;
typedef struct S_vv12_1c S_vv12_1c;
typedef struct S_vv12_20 S_vv12_20;
typedef struct S_vv25 S_vv25;
typedef struct S_vv25_18 S_vv25_18;
typedef struct S_vv25_1c S_vv25_1c;
typedef struct S_vv25_20 S_vv25_20;
typedef struct S_vv32 S_vv32;
typedef struct S_vv32_18 S_vv32_18;
typedef struct S_vv32_1c S_vv32_1c;
typedef struct S_vv32_20 S_vv32_20;
typedef struct S_vv41 S_vv41;
typedef struct S_vv41_18 S_vv41_18;
typedef struct S_vv41_1c S_vv41_1c;
typedef struct S_vv41_20 S_vv41_20;
typedef struct Block_frame_24 {
    float f00;
    char unknown4[0xc];
} Block_frame_24;
typedef struct Block_frame_14 {
    float f00;
    char unknown4[0xc];
} Block_frame_14;
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    char unknown28[0x30];
    int f58;
    char unknown5c[0x8];
    float f64;
    Arg0_68 *f68;
    Arg0_6c *f6c;
    unsigned short f70;
    char unknown72[0x2];
    Arg0_74 *f74;
};
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
    Block_frame_14 f14;
    Block_frame_24 f24;
};
struct S_vv1 {
    float f00;
    float f04;
    float f08;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
};
struct S_vv12 {
    char unknown0[0x18];
    S_vv12_18 *f18;
    S_vv12_1c *f1c;
    S_vv12_20 *f20;
    char unknown24[0xc];
    float f30;
};
struct S_vv25 {
    char unknown0[0x18];
    S_vv25_18 *f18;
    S_vv25_1c *f1c;
    S_vv25_20 *f20;
};
struct S_vv32 {
    char unknown0[0x18];
    S_vv32_18 *f18;
    S_vv32_1c *f1c;
    S_vv32_20 *f20;
    char unknown24[0xc];
    float f30;
};
struct S_vv41 {
    char unknown0[0x18];
    S_vv41_18 *f18;
    S_vv41_1c *f1c;
    S_vv41_20 *f20;
};
extern Block16 g_8c2ffedc;
extern Block16 g_8c2ffeec;
extern S_g8c46ee80 *g_8c46ee80;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern void call_8c3827d8(void *);
extern void call_8c3be38c(int, void *, void *);
extern void project_point_to_screen_8c38ad50(int, S_vv1 *, Frame *);
extern void call_8c38c0e6(int, int);
extern void call_8c38c0f0(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(S_vv12 *);
extern void call_8c37e0c8(int, void *, void *, void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c3a944a(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3aa716(void *);
void operation_8c08813c(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    float v3;
    float v2;
    int v7;
    unsigned short v11;
    S_vv12 *v12;
    int v16;
    int v21;
    S_vv25 *v25;
    int v29;
    S_vv32 *v32;
    S_vv41 *v41;
    int v27;
    int v13;
    int v15;
    int v24;
    int v33;
    int v35;
    int v40;
    v1 = (S_vv1 *)o->f74;
    call_8c3827d8((void *)(o->f6c));
    v2 = (float)o->f24;
    v3 = (float)o->f20;
    (&frame)->f08 = v1->f00 - g_8c46ee80->f90;
    (&frame)->f0c = v1->f04 - g_8c46ee80->f94;
    (&frame)->f10 = v1->f08 - g_8c46ee80->f98;
    call_8c3be38c(0, (void *)(&(&frame)->f08), (void *)(&(&frame)->f08));
    if (0.0f > (&frame)->f10 || (&frame)->f10 > v3) {
        v7 = (int)0;
        goto L_8c08820a;
    }
    project_point_to_screen_8c38ad50(0, v1, (Frame *)((&frame)));
    if (!((&frame)->f00 < -v2) && !((&frame)->f00 > (v2 + 640.0f))) {
        v7 = (int)1;
        goto L_8c08820a;
    }
    v7 = (int)0;
L_8c08820a:;
    if (v7 == 0) {
        return;
    }
    v11 = (unsigned short)o->f70;
    if (((v11 & 8)) == 0) {
        v27 = (int)v11;
        v29 = (int)v1;
    } else {
        if (((v11 & 4)) == 0) {
            v21 = (int)v1;
        } else {
            g_8c46f560 = (int)(g_8c575570);
            g_8c46f574 = (int)(g_8c5755a4);
            g_8c46f578 = (int)(g_8c5755a8);
            g_8c575570 |= 0x810;
            call_8c38c0e6(-1, 0x800);
            v15 = (int)0;
            v16 = (int)v1;
            goto L_8c0882ec;
            v12 = (S_vv12 *)v1;
            v13 = (int)0;
            do {
                {
                    Block16 *p_ = (Block16 *)&g_8c2ffedc;
                    *(Block16 *)&(&frame)->f24 = *p_;
                }
                (&frame)->f24.f00 = v12->f30;
                call_8c38c0f0((void *)(&(&frame)->f24));
                njPushMatrixEx_8c38ae68();
                translate_current_matrix_v_8c382a40(v12);
                call_8c37e0c8(0, (void *)(v12->f18), (void *)(v12->f1c), (void *)(v12->f20));
                njScale_8c37e2e4(0, o->f64, o->f64, o->f64);
                call_8c3a944a((void *)(o->f68));
                njPopMatrixEx_8c38ad10();
                call_8c38c0f0((void *)((void *)0x8c305fd8));
                v15 = (int)(v13 + 1);
                v16 = (int)((int)v12 + 0x38);
L_8c0882ec:;
                v12 = (S_vv12 *)v16;
                v13 = (int)v15;
            } while (o->f58 > v15);
            g_8c575570 = (int)(g_8c46f560);
            g_8c5755a4 = (int)(g_8c46f574);
            g_8c5755a8 = (int)(g_8c46f578);
            return;
        }
        v24 = (int)0;
        v25 = (S_vv25 *)v21;
        while (o->f58 > v24) {
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((S_vv12 *)v25);
            call_8c37e0c8(0, (void *)(v25->f18), (void *)(v25->f1c), (void *)(v25->f20));
            njScale_8c37e2e4(0, o->f64, o->f64, o->f64);
            call_8c3a944a((void *)(o->f68));
            njPopMatrixEx_8c38ad10();
            v24 = (int)(v24 + 1);
            v25 = (S_vv25 *)((char *)v25 + 56);
        }
        return;
    }
    if (((v27 & 4)) == 0) {
    } else {
        g_8c46f560 = (int)(g_8c575570);
        g_8c46f574 = (int)(g_8c5755a4);
        g_8c46f578 = (int)(g_8c5755a8);
        g_8c575570 |= 0x810;
        call_8c38c0e6(-1, 0x800);
        v35 = (int)0;
        goto L_8c08847c;
        v32 = (S_vv32 *)v29;
        v33 = (int)0;
        do {
            {
                Block16 *p_ = (Block16 *)&g_8c2ffeec;
                *(Block16 *)&(&frame)->f14 = *p_;
            }
            (&frame)->f14.f00 = v32->f30;
            call_8c38c0f0((void *)(&(&frame)->f14));
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((S_vv12 *)v32);
            call_8c37e0c8(0, (void *)(v32->f18), (void *)(v32->f1c), (void *)(v32->f20));
            njScale_8c37e2e4(0, o->f64, o->f64, o->f64);
            call_8c3aa716((void *)(o->f68));
            njPopMatrixEx_8c38ad10();
            call_8c38c0f0((void *)((void *)0x8c305fd8));
            v35 = (int)(v33 + 1);
            v29 = (int)((int)v32 + 0x38);
L_8c08847c:;
            v32 = (S_vv32 *)v29;
            v33 = (int)v35;
        } while (o->f58 > v35);
        g_8c575570 = (int)(g_8c46f560);
        g_8c5755a4 = (int)(g_8c46f574);
        g_8c5755a8 = (int)(g_8c46f578);
        return;
    }
    v40 = (int)0;
    v41 = (S_vv41 *)v29;
    while (o->f58 > v40) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((S_vv12 *)v41);
        call_8c37e0c8(0, (void *)(v41->f18), (void *)(v41->f1c), (void *)(v41->f20));
        njScale_8c37e2e4(0, o->f64, o->f64, o->f64);
        call_8c3aa716((void *)(o->f68));
        njPopMatrixEx_8c38ad10();
        v40 = (int)(v40 + 1);
        v41 = (S_vv41 *)((char *)v41 + 56);
    }
}
