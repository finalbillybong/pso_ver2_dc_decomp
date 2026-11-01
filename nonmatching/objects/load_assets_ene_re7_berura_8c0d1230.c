/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d1230
 * function: load_assets_ene_re7_berura_8c0d1230
 * language: c
 * reference size: 940 bytes
 * compiled size: 936 bytes (-0.4%)
 * differing lines: 88 of 363 reference instruction lines
 * differing bytes: 702
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c306ec4 S_L8c306ec4;
typedef struct S_L8c46fc60 S_L8c46fc60;
typedef struct S_L8c46fc9c S_L8c46fc9c;
typedef struct S_c8c03ef88 S_c8c03ef88;
typedef struct S_c8c03ef88_4 S_c8c03ef88_4;
typedef struct Frame Frame;
typedef struct S_g8c46fc80 S_g8c46fc80;
typedef struct S_g8c46fc80_0 S_g8c46fc80_0;
typedef struct S_g8c46fc80_0_4 S_g8c46fc80_0_4;
typedef struct S_g8c46fc80_42c S_g8c46fc80_42c;
typedef struct S_g8c46fc80_42c_8 S_g8c46fc80_42c_8;
typedef struct S_vv14 S_vv14;
typedef struct S_vv14_42c S_vv14_42c;
typedef struct S_vv14_42c_8 S_vv14_42c_8;
typedef struct S_vv14_430 S_vv14_430;
typedef struct S_vv14_430_4 S_vv14_430_4;
typedef struct S_vv16_0 S_vv16_0;
typedef struct S_vv18_0 S_vv18_0;
typedef struct S_vv20_0 S_vv20_0;
typedef struct S_vv22_0 S_vv22_0;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_18 S_vv7_18;
typedef struct S_vv7_4 S_vv7_4;
typedef struct S_vv7_8 S_vv7_8;
typedef struct S_vv7_s20 S_vv7_s20;
typedef struct S_vv8 S_vv8;
typedef struct S_x1008 S_x1008;
typedef struct S_x2096 S_x2096;
typedef struct S_x752 S_x752;
struct S_L8c46fc60 {
    float f00;
    float f04;
    float f08;
};
struct S_g8c46fc80 {
    char unknown0[0x42c];
    S_g8c46fc80_42c *f42c;
};
struct S_g8c46fc80_42c {
    char unknown0[0x8];
    S_g8c46fc80_42c_8 *f08;
};
struct S_L8c46fc9c {
    char unknown0[0x4];
    int f04;
    int f08;
    int f0c;
    float f10;
    float f14;
    char unknown18[0x48];
    int f60;
    int f64;
    int f68;
    int f6c;
    float f70;
    float f74;
};
struct S_L8c306ec4 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x1c];
    int f24;
};
struct S_vv7 {
    char unknown0[0x4];
    S_vv7_4 *f04;
    S_vv7_8 *f08;
    int f0c;
    char unknown10[0x4];
    float f14;
    S_vv7_18 *f18;
    S_c8c03ef88 *f1c;
    int f20;
    char unknown24[0x4];
    float f28;
    float f2c;
    float f30;
    char unknown34[0xc];
    float f40;
    float f44;
};
struct S_vv7_s20 {
    char unknown0[0x4];
    int f04;
    char unknown8[0xc];
    int f14;
    int f18;
    int f1c;
};
struct S_vv7_18 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x24];
    int f2c;
};
struct S_vv8 {
    char unknown0[0x28];
    float f28;
    int f2c;
    int f30;
};
struct S_c8c03ef88 {
    char unknown0[0x4];
    S_c8c03ef88_4 *f04;
};
struct S_c8c03ef88_4 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    float f00;
    int f04;
    int f08;
    char unknownc[0xc];
    float f18;
    char unknown1c[0x14];
    int f30;
    int f34;
    int f38;
    int f3c;
};
struct S_x752 {
    float f00;
};
struct S_x1008 {
    float f00;
};
struct S_x2096 {
    float f00;
};
struct S_vv14 {
    char unknown0[0x42c];
    S_vv14_42c *f42c;
    S_vv14_430 *f430;
};
struct S_vv14_42c {
    char unknown0[0x8];
    S_vv14_42c_8 *f08;
};
extern S_g8c46fc80 *g_8c46fc80;
extern int g_8c46fc84;
extern int g_8c46fc88;
extern int g_8c46fc8c;
extern int g_8c46fc90;
extern int g_8c46fc94;
extern int g_8c46fc98;
extern int g_8c46fd5c;
extern int g_8c46fd60;
extern int g_8c46fd64;
extern int g_8c46fd68;
extern int g_8c46fd7c;
extern S_L8c306ec4 g_8c306ec4;
extern S_L8c46fc60 g_8c46fc60;
extern S_L8c46fc9c g_8c46fc9c;
extern char g_8c306f64[];
extern char gc_8c46fc9c[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, int);
extern int operation_8c059f04(int);
extern int operator_new_8c18de4c(int);
extern void set_stream_mode_8c3ab8f8(void *, float);
extern void operation_8c0d1f28(int, void *);
extern S_c8c03ef88 *call_8c03ef88(int, void *);
extern int game_malloc_8c011ecc(int);
extern void call_8c0cd588(int, void *, int);
extern void call_8c118ea4(int, int, float, float, float);
extern void call_8c118f94(int, void *, void *, void *, Frame *);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void load_assets_ene_re7_berura_8c0d1230(void)
{
    Frame frame;
    S_vv7 *v7;
    int v4;
    int v13;
    int v6;
    S_vv8 *v8;
    int v15;
    S_vv14 *v14;
    int v17;
    int v19;
    int v21;
    int t9;
    int t10;
    int v5;
    int v16;
    int v18;
    int t1;
    int t2;
    int t3;
    int t4;
    S_c8c03ef88 *t5;
    S_c8c03ef88 *t6;
    S_c8c03ef88 *t7;
    S_c8c03ef88 *t8;
    int v20;
    int v22;
    int t11;
    int t12;
    int t13;
    int t14;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c306eb4), (int)(g_8c306f64 + 0xe4));
        g_8c46fc80 = (S_g8c46fc80 *)(int)(t2);
    } else {
        t3 = operation_8c059f04((int)((void *)0x8c306eb4));
        g_8c46fc80 = (S_g8c46fc80 *)(int)(t3);
    }
    (&g_8c46fc60)->f00 = 0.0f;
    (&g_8c46fc60)->f04 = 0.0f;
    (&g_8c46fc60)->f08 = 0.0f;
    g_8c46fc84 = 0;
    g_8c46fc88 = 0;
    g_8c46fc8c = 0;
    g_8c46fc90 = 0;
    g_8c46fc94 = 0;
    g_8c46fc98 = 0;
    v4 = (int)g_8c46fc80->f42c->f08;
    t4 = operator_new_8c18de4c(0x880);
    g_8c46fd5c = (int)(t4);
    *(int *)(gc_8c46fc9c + 0x0) = (int)(t4);
    *(int *)(gc_8c46fc9c + 0x60) = t4 + 0x440;
    *(int *)(gc_8c46fc9c + 0x4) = 0x21;
    *(int *)(gc_8c46fc9c + 0x8) = 0x31;
    *(int *)(gc_8c46fc9c + 0x64) = 0x38;
    *(int *)(gc_8c46fc9c + 0x68) = 0x48;
    *(int *)(gc_8c46fc9c + 0xc) = 3;
    *(float *)(gc_8c46fc9c + 0x10) = 20.0f;
    *(float *)(gc_8c46fc9c + 0x14) = 30.0f;
    *(int *)(gc_8c46fc9c + 0x6c) = 4;
    v5 = (int)0x430;
    *(float *)(gc_8c46fc9c + 0x70) = 19.0f;
    *(float *)(gc_8c46fc9c + 0x74) = 29.0f;
    v6 = (int)0;
    while (2 > v6) {
        v7 = (S_vv7 *)(v6 * 0x60 + gc_8c46fc9c);
        set_stream_mode_8c3ab8f8((void *)(*(S_g8c46fc80_0_4 **)((char *)((char *)*(S_g8c46fc80_0 **)((char *)((char *)g_8c46fc80 + 0x0) + (v5)) + 0x4) + (*(int *)((char *)&g_8c306ec4.f04 + (v7->f0c << 4)) << 3))), v7->f14);
        operation_8c0d1f28(v4, (void *)v7);
        t5 = call_8c03ef88(v4, (void *)(v7->f04));
        v7->f18 = (S_vv7_18 *)t5;
        t6 = call_8c03ef88(v4, (void *)(v7->f08));
        v7->f1c = t6;
        v7->f20 = 7;
        ((S_vv7_s20 *)((char *)v7 + 0x20))->f04 = (int)(v7->f18->f04);
        v7->f28 = 0.0f;
        v7->f2c = 0.0f;
        v7->f30 = 0.0f;
        ((S_vv7_s20 *)((char *)v7 + 0x20))->f14 = 0;
        ((S_vv7_s20 *)((char *)v7 + 0x20))->f18 = 0;
        ((S_vv7_s20 *)((char *)v7 + 0x20))->f1c = 0;
        v7->f40 = 1.0f;
        v7->f44 = 1.0f;
        v8 = (S_vv8 *)((int)v7 + 0x20);
        v8->f28 = 1.0f;
        v8->f2c = (int)(v7->f18->f2c);
        v8->f30 = 0;
        v6 = (int)(v6 + 1);
    }
    t7 = call_8c03ef88(v4, (void *)2);
    g_8c46fd60 = t7->f04->f04 + 8;
    t8 = call_8c03ef88(v4, (void *)1);
    g_8c46fd64 = t8->f04->f04 + 8;
    t9 = game_malloc_8c011ecc(0x14);
    if (t9 != 0) {
        call_8c0cd588(t9, (void *)(g_8c46fc80->f42c->f08), 2);
    }
    g_8c46fd68 = (int)(t9);
    t10 = game_malloc_8c011ecc(0x18);
    if (t10 != 0) {
        call_8c118ea4(t10, 4, 14.0f, 17.0f, 0.8f);
    }
    (&frame)->f30 = 0x2e;
    (&frame)->f34 = 0x2e;
    g_8c46fd7c = (int)(t10);
    (&frame)->f38 = 0x45;
    (&frame)->f3c = 0x45;
    v13 = (int)0;
    while (4 > v13) {
        ((S_x752 *)(v13 * 0xc + (int)(&frame)))->f00 = 0.0f;
        ((S_x1008 *)(v13 * 0xc + (char *)&(&frame)->f04))->f00 = 0.0f;
        ((S_x2096 *)(v13 * 0xc + (char *)&(&frame)->f08))->f00 = 0.0f;
        v13 = (int)(v13 + 1);
    }
    (&frame)->f00 = 10.0f;
    (&frame)->f18 = 10.0f;
    v14 = (S_vv14 *)g_8c46fc80;
    call_8c118f94(t10, (void *)(v14->f42c->f08), (void *)(*(S_vv14_430_4 **)((char *)((char *)v14->f430 + 0x4) + ((&g_8c306ec4)->f24 << 3))), (void *)(&(&frame)->f30), (Frame *)((&frame)));
    v15 = (int)0;
    while (1 > v15) {
        v16 = (int)(v15 << 2);
        t11 = record24_8c17948c((int)(*(S_vv16_0 **)((char *)((char *)v16 + 0x0) + ((int)((void *)0x8c285808)))));
        *(int *)((char *)((char *)v16 + 0x0) + ((int)((void *)0x8c46fc6c))) = (int)(t11);
        v15 = (int)(v15 + 1);
    }
    v17 = (int)0;
    while (2 > v17) {
        v18 = (int)(v17 << 2);
        t12 = record30_8c1794a0((int)(*(S_vv18_0 **)((char *)((char *)v18 + 0x0) + ((int)((void *)0x8c28580c)))));
        *(int *)((char *)((char *)v18 + 0x0) + ((int)((void *)0x8c46fc70))) = (int)(t12);
        v17 = (int)(v17 + 1);
    }
    v19 = (int)0;
    while (1 > v19) {
        v20 = (int)(v19 << 2);
        t13 = block32_8c1794b4((int)(*(S_vv20_0 **)((char *)((char *)v20 + 0x0) + ((int)((void *)0x8c285814)))));
        *(int *)((char *)((char *)v20 + 0x0) + ((int)((void *)0x8c46fc78))) = (int)(t13);
        v19 = (int)(v19 + 1);
    }
    v21 = (int)0;
    while (1 > v21) {
        v22 = (int)(v21 << 2);
        t14 = record30_8c1794c8((int)(*(S_vv22_0 **)((char *)((char *)v22 + 0x0) + ((int)((void *)0x8c285818)))));
        *(int *)((char *)((char *)v22 + 0x0) + ((int)((void *)0x8c46fc7c))) = (int)(t14);
        v21 = (int)(v21 + 1);
    }
}
