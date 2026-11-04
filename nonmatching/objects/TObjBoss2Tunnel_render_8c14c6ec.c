/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14c6ec
 * function: TObjBoss2Tunnel_render_8c14c6ec
 * language: c
 * reference size: 1188 bytes
 * compiled size: 1188 bytes (+0.0%)
 * differing lines: 6 of 468 reference instruction lines
 * differing bytes: 18
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjBoss2Tunnel.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct S_L8c4da288 S_L8c4da288;
typedef struct S_L8c4da288_10 S_L8c4da288_10;
typedef struct S_L8c4da288_18 S_L8c4da288_18;
typedef struct Frame Frame;
typedef struct S_g8c4da280 S_g8c4da280;
typedef struct S_g8c4da280_0 S_g8c4da280_0;
typedef struct S_g8c4da280_0_0 S_g8c4da280_0_0;
typedef struct S_g8c4da280_0_128 S_g8c4da280_0_128;
typedef struct S_g8c4da280_0_8 S_g8c4da280_0_8;
typedef struct S_g8c4da280_0_a8 S_g8c4da280_0_a8;
typedef struct S_g8c4da284 S_g8c4da284;
typedef struct S_g8c4da284_0 S_g8c4da284_0;
typedef struct S_g8c4da288 S_g8c4da288;
typedef struct Object Object;
typedef struct Arg0_a4 Arg0_a4;
typedef struct Arg0_ac Arg0_ac;
typedef struct S_vv5 S_vv5;
typedef struct Block_frame_10 {
    char unknown0[0x8];
    float f08;
} Block_frame_10;
struct Frame {
    Block16 f00;
    Block_frame_10 f10;
};
struct S_g8c4da284 {
    S_g8c4da284_0 *f00;
};
struct S_vv5 {
    char unknown0[0x8];
    int f08;
};
struct Object {
    char unknown0[0x20];
    float f20;
    char unknown24[0x4];
    int f28;
    char unknown2c[0x4];
    int f30;
    int f34;
    int f38;
    char unknown3c[0x24];
    int f60;
    float f64;
    char unknown68[0x34];
    float f9c;
    char unknowna0[0x4];
    Arg0_a4 *fa4;
    char unknowna8[0x4];
    Arg0_ac *fac;
    float fb0;
};
struct S_L8c4da288 {
    char unknown0[0x10];
    S_L8c4da288_10 *f10;
    char unknown14[0x4];
    S_L8c4da288_18 *f18;
};
struct S_g8c4da280_0 {
    char unknown0[0xa8];
    S_g8c4da280_0_a8 *fa8;
    char unknownac[0x7c];
    S_g8c4da280_0_128 *f128;
};
struct S_g8c4da284_0 {
    char unknown0[0x8];
    int f08;
};
extern Vector3 g_8c3155c4;
extern Block16 g_8c3155d0;
extern S_g8c4da280 *g_8c4da280;
extern S_g8c4da284 *g_8c4da284;
extern S_L8c4da288 g_8c4da288;
extern int operation_8c1692c0(void);
extern int render_flag_400_set(void);
extern void call_8c380c5a(int, Frame *);
extern void view_build_8c3c14a0(void);
extern void njPushMatrixEx_8c38ae68(void);
extern void call_8c3827d8(S_g8c4da284 *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c3c1f82(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateZ_8c37e02c(int, void *);
extern void call_8c3aa716(void *);
extern void call_8c3a944a(void *);
void TObjBoss2Tunnel_render_8c14c6ec(Object *o)
{
    S_vv5 *v5;
    int t2;
    float pm3;
    Arg0_a4 *pm6;
    float pm7;
    int v7;
    int v31;
    int pm4;
    char *v6;
    int v30;
    int v28;
    int v45;
    int v27;
    int v29;
    Frame frame;
    int t1;
    int v38;
    int pm11;
    S_g8c4da284_0 *pm13;
    char *pm9;
    int pm10;
    *(Vector3 *)&(&frame)->f10 = *(&g_8c3155c4);
    t1 = operation_8c1692c0();
    if (t1 != 0) {
        return;
    }
    t2 = render_flag_400_set();
    if (!(0 != t2)) {
        {
            Block16 *p_ = (Block16 *)&g_8c3155d0;
            *(Block16 *)&(&frame)->f00 = *p_;
        }
        call_8c380c5a(2, ((&frame)));
        view_build_8c3c14a0();
        call_8c380c5a(0, (Frame *)((&frame)));
    }
    njPushMatrixEx_8c38ae68();
    pm13 = g_8c4da284->f00;
    v5 = (S_vv5 *)pm13;
    v6 = (char *)v5->f08;
    if (!(o->f60 != 0)) {
        v7 = (int)0;
    } else {
        int pm5;
        pm5 = o->f60 + 0x1f;
        v7 = (int)(pm5);
    }
    pm10 = (int)(*(int *)((0xc * v7) + (char *)&v5->f08));
    v5->f08 = pm10;
    call_8c3827d8(g_8c4da284);
    if ((o->f28 != 0 && o->f28 != 1)) {
    } else {
        njPushMatrixEx_8c38ae68();
        pm7 = o->f64;
        njTranslate_8c3829bc(0, 0.0f, 0.0f, -pm7);
        call_8c3c1f82((void *)((&g_8c4da288)->f18));
        njPopMatrixEx_8c38ad10();
    }
    if (o->f28 == 3) {
        (&frame)->f10.f08 = -o->f20;
        if (!(6 != o->f30)) {
            (&frame)->f10.f08 -= 400.0f;
        } else {
            (&frame)->f10.f08 -= 300.0f;
        }
        if (!(o->f34 != 6)) {
            (&frame)->f10.f08 -= 800.0f;
        } else {
            (&frame)->f10.f08 -= 600.0f;
        }
        pm11 = o->f38;
        v7 = pm11;
        if (6 == v7) {
            (&frame)->f10.f08 = (&frame)->f10.f08 - 400.0f;
            goto L_8c14c8b6;
        }
        (&frame)->f10.f08 -= 300.0f;
    } else {
        (&frame)->f10.f08 = -(o->f20 + 1200.0f);
    }
L_8c14c8b6:
    ;
    translate_current_matrix_v_8c382a40((void *)(&(&frame)->f10));
    (&frame)->f10.f08 = 600.0f;
    v45 = (int)0;
    v27 = 0x42c;
    v28 = 0x158;
    v29 = (int)0x138;
    goto L_8c14cb24;
    v30 = 0;
    do {
        v31 = (*(int *)((char *)&o->f30 + (v30 << 2)));
        if (!(6 != v31)) {
            S_g8c4da280_0 *pm12;
            if (0 != v30) {
                njTranslate_8c3829bc(0, 0.0f, 0.0f, 100.0f);
            }
            njTranslate_8c3829bc(0, 0.0f, 0.0f, -300.0f);
            njPushMatrixEx_8c38ae68();
            njTranslate_8c3829bc(0, 0.0f, o->fb0, 0.0f);
            njRotateZ_8c37e02c(0, (void *)(o->fa4));
            njTranslate_8c3829bc(0, o->f9c, 0.0f, 0.0f);
            pm12 = *(S_g8c4da280_0 **)((v27) + (char *)((char *)g_8c4da280 + 0x0));
            call_8c3aa716((void *)((pm12)->f128));
            pm9 = (char *)g_8c4da280 + 0x0;
            call_8c3aa716((void *)(*(S_g8c4da280_0_0 **)((char *)((char *)*(S_g8c4da280_0 **)((v27) + (pm9)) + 0x0) + (v28))));
            njPopMatrixEx_8c38ad10();
            njPushMatrixEx_8c38ae68();
            njRotateZ_8c37e02c(0, (void *)(o->fac));
            njTranslate_8c3829bc(0, o->f9c, 0.0f, 0.0f);
            call_8c3a944a((void *)((*(S_g8c4da280_0 **)(((char *)g_8c4da280 + 0x0) + (v27)))->fa8));
            njPopMatrixEx_8c38ad10();
            njTranslate_8c3829bc(0, 0.0f, 0.0f, 400.0f);
            njPushMatrixEx_8c38ae68();
            njTranslate_8c3829bc(0, 0.0f, o->fb0, 0.0f);
            pm6 = o->fa4;
            njRotateZ_8c37e02c(0, (void *)(pm6));
            njTranslate_8c3829bc(0, o->f9c, 0.0f, 0.0f);
            call_8c3aa716((void *)(*(S_g8c4da280_0_0 **)((v29) + (0x0 + (char *)*(S_g8c4da280_0 **)((v27) + (char *)((char *)g_8c4da280 + 0x0))))));
            njPopMatrixEx_8c38ad10();
            njPushMatrixEx_8c38ae68();
            njRotateZ_8c37e02c(0, (void *)(o->fac));
            njTranslate_8c3829bc(0, o->f9c, 0.0f, 0.0f);
            call_8c3c1f82((void *)((&g_8c4da288)->f10));
            njPopMatrixEx_8c38ad10();
            translate_current_matrix_v_8c382a40((void *)(&(&frame)->f10));
            goto L_8c14cb22;
        } else {
        }
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, 0.0f, o->fb0, 0.0f);
        njRotateZ_8c37e02c(0, (void *)(o->fa4));
        njTranslate_8c3829bc(0, o->f9c, 0.0f, 0.0f);
        v38 = (v31 << 2);
        call_8c3aa716((void *)(*(S_g8c4da280_0_8 **)((char *)((char *)*(S_g8c4da280_0 **)((((char *)g_8c4da280 + 0x0)) + (v27)) + 0x8) + (*(int *)(((int)((void *)0x8c3153d0)) + (char *)(((char *)v38 + 0x0))) << 4))));
        njPopMatrixEx_8c38ad10();
        njPushMatrixEx_8c38ae68();
        njRotateZ_8c37e02c(0, (void *)(o->fac));
        pm3 = o->f9c;
        njTranslate_8c3829bc(0, pm3, 0.0f, 0.0f);
        call_8c3c1f82((void *)(*(S_g8c4da288 **)((*(int *)(((char *)v38 + 0x0) + ((int)((void *)0x8c315400))) << 2) + (char *)&g_8c4da288)));
        njPopMatrixEx_8c38ad10();
        translate_current_matrix_v_8c382a40((void *)(&(&frame)->f10));
    L_8c14cb22:
        ;
        v30 += 1;
        t2 = (int)v30;
        v45 = t2;
    L_8c14cb24:
        ;
        pm4 = v45;
        v30 = pm4;
    } while (6 > v45);
    g_8c4da284->f00->f08 = (int)(v6);
    njPopMatrixEx_8c38ad10();
}
