/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bc9a0
 * function: load_assets_ene_df1_saver_8c0bc9a0
 * language: c
 * reference size: 588 bytes
 * compiled size: 588 bytes (+0.0%)
 * differing lines: 78 of 225 reference instruction lines
 * differing bytes: 106
 * provenance: generator draft (experimental generator, mode bgotoext)
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
typedef struct S_L8c305a00 S_L8c305a00;
typedef struct S_L8c46f3c4 S_L8c46f3c4;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_42c S_c8c011ecc_42c;
typedef struct S_c8c011ecc_42c_8 S_c8c011ecc_42c_8;
typedef struct S_c8c011ecc_42c_8_2c S_c8c011ecc_42c_8_2c;
typedef struct S_c8c011ecc_42c_8_2c_4 S_c8c011ecc_42c_8_2c_4;
typedef struct Frame Frame;
typedef struct S_g8c46f3a4 S_g8c46f3a4;
typedef struct S_vv24 S_vv24;
typedef struct S_vv24_42c S_vv24_42c;
typedef struct S_vv24_42c_8 S_vv24_42c_8;
typedef struct S_vv24_430 S_vv24_430;
typedef struct S_vv24_430_4 S_vv24_430_4;
typedef struct S_vv25 S_vv25;
typedef struct S_vv25_42c S_vv25_42c;
typedef struct S_vv25_42c_8 S_vv25_42c_8;
typedef struct S_vv25_430 S_vv25_430;
typedef struct S_vv25_430_4 S_vv25_430_4;
typedef struct S_vv26 S_vv26;
typedef struct S_vv26_42c S_vv26_42c;
typedef struct S_vv26_42c_8 S_vv26_42c_8;
typedef struct S_vv26_430 S_vv26_430;
typedef struct S_vv26_430_4 S_vv26_430_4;
struct S_c8c011ecc {
    char unknown0[0x42c];
    S_c8c011ecc_42c *f42c;
};
struct S_c8c011ecc_42c {
    char unknown0[0x8];
    S_c8c011ecc_42c_8 *f08;
};
struct S_c8c011ecc_42c_8 {
    char unknown0[0x2c];
    S_c8c011ecc_42c_8_2c *f2c;
};
struct S_c8c011ecc_42c_8_2c {
    char unknown0[0x4];
    S_c8c011ecc_42c_8_2c_4 *f04;
};
struct S_c8c011ecc_42c_8_2c_4 {
    char unknown0[0x4];
    int f04;
};
struct S_vv24 {
    char unknown0[0x42c];
    S_vv24_42c *f42c;
    S_vv24_430 *f430;
};
struct S_vv24_42c {
    char unknown0[0x8];
    S_vv24_42c_8 *f08;
};
struct S_L8c305a00 {
    char unknown0[0x24];
    int f24;
    char unknown28[0xc];
    int f34;
    char unknown38[0xc];
    int f44;
};
struct S_vv25 {
    char unknown0[0x42c];
    S_vv25_42c *f42c;
    S_vv25_430 *f430;
};
struct S_vv25_42c {
    char unknown0[0x8];
    S_vv25_42c_8 *f08;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct S_vv26 {
    char unknown0[0x42c];
    S_vv26_42c *f42c;
    S_vv26_430 *f430;
};
struct S_vv26_42c {
    char unknown0[0x8];
    S_vv26_42c_8 *f08;
};
struct S_g8c46f3a4 {
    int f00;
    int f04;
    int f08;
};
extern int g_8c46f3a0;
extern S_g8c46f3a4 *g_8c46f3a4;
extern int g_8c46f3a8;
extern int g_8c46f3ac;
extern S_c8c011ecc *g_8c46f3b0;
extern int g_8c46f3b4;
extern int g_8c46f3b8;
extern int g_8c46f3bc;
extern int g_8c46f3c0;
extern S_c8c011ecc *g_8c46f3d0;
extern S_c8c011ecc *g_8c46f3d4;
extern S_c8c011ecc *g_8c46f3d8;
extern S_L8c305a00 g_8c305a00;
extern S_L8c46f3c4 g_8c46f3c4;
extern char gc_8c46f3c4[];
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
extern void call_8c118ea4(S_c8c011ecc *, int, float, float, float);
extern void draw_grid_selected_rows(void *, void *, void *, int, int);
extern void draw_grid_offset_rows(void *, void *, void *, int, void *, void *);
extern int operator_new_8c18de4c(int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void load_assets_ene_df1_saver_8c0bc9a0(void)
{
    Frame frame;
    char *v6;
    int v7;
    float v8;
    int v14;
    float v15;
    S_vv24 *v24;
    S_vv25 *v25;
    S_vv26 *v26;
    S_c8c011ecc *t1;
    S_c8c011ecc *t2;
    S_c8c011ecc *t3;
    S_c8c011ecc *t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    t1 = game_malloc_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c3059f0), 0, 0, 0);
    }
    g_8c46f3b0 = t1;
    g_8c46f3c0 = 0;
    v6 = (char *)t1->f42c->f08->f2c->f04->f04;
    g_8c46f3b4 = (int)(v6);
    g_8c46f3b8 = 0;
    g_8c46f3bc = 0;
    *(float *)(gc_8c46f3c4 + 0x8) = 0.0f;
    *(float *)(gc_8c46f3c4 + 0x4) = 0.0f;
    *(float *)(gc_8c46f3c4 + 0x0) = 0.0f;
    t2 = ((S_c8c011ecc * (*)(int, void *, int))game_malloc_8c011ecc)(0x18, (void *)&g_8c46f3bc, 0);
    if (t2 != 0) {
        v7 = (int)2;
        v8 = (float)1.0f;
        call_8c118ea4(t2, v7, 15.0f, 60.0f, v8);
    }
    g_8c46f3d0 = t2;
    t3 = game_malloc_8c011ecc(0x18);
    if (t3 != 0) {
        v14 = (int)2;
        v15 = (float)1.0f;
        call_8c118ea4(t3, v14, 11.0f, 27.0f, v15);
    }
    g_8c46f3d4 = t3;
    t4 = game_malloc_8c011ecc(0x18);
    if (t4 != 0) {
        call_8c118ea4(t4, 2, 0.0f, 7.0f, 1.0f);
    }
    g_8c46f3d8 = t4;
    v24 = (S_vv24 *)g_8c46f3b0;
    draw_grid_selected_rows(g_8c46f3d0, (void *)(v24->f42c->f08), (void *)(*(S_vv24_430_4 **)((char *)((char *)v24->f430 + 0x4) + ((&g_8c305a00)->f24 << 3))), 0x23, 0x24);
    v25 = (S_vv25 *)g_8c46f3b0;
    draw_grid_selected_rows(g_8c46f3d4, (void *)(v25->f42c->f08), (void *)(*(S_vv25_430_4 **)((char *)((char *)v25->f430 + 0x4) + ((&g_8c305a00)->f44 << 3))), 0x23, 0x24);
    (&frame)->f14 = 0.0f;
    (&frame)->f10 = 0.0f;
    (&frame)->f0c = 0.0f;
    (&frame)->f00 = -10.0f;
    (&frame)->f08 = 0.0f;
    (&frame)->f04 = 0.0f;
    v26 = (S_vv26 *)g_8c46f3b0;
    draw_grid_offset_rows(g_8c46f3d8, (void *)(v26->f42c->f08), (void *)(*(S_vv26_430_4 **)((char *)((char *)v26->f430 + 0x4) + ((&g_8c305a00)->f34 << 3))), 0x1c, (void *)(&(&frame)->f0c), (void *)(&frame));
    t5 = operator_new_8c18de4c(0xc);
    g_8c46f3a4 = (S_g8c46f3a4 *)(int)(t5);
    t6 = record24_8c17948c(0x52);
    g_8c46f3a0 = (int)(t6);
    t7 = record30_8c1794a0(0x57);
    g_8c46f3a4->f00 = (int)(t7);
    t8 = record30_8c1794a0(0x58);
    g_8c46f3a4->f08 = (int)(t8);
    t9 = record30_8c1794a0(0x59);
    g_8c46f3a4->f04 = (int)(t9);
    t10 = block32_8c1794b4(0x51);
    g_8c46f3a8 = (int)(t10);
    t11 = record30_8c1794c8(0x51);
    g_8c46f3ac = (int)(t11);
}
