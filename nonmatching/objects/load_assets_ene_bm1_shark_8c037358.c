/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c037358
 * function: load_assets_ene_bm1_shark_8c037358
 * language: c
 * reference size: 540 bytes
 * compiled size: 532 bytes (-1.5%)
 * differing lines: 48 of 213 reference instruction lines
 * differing bytes: 506
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2ed924 S_L8c2ed924;
typedef struct S_g8c4627e0 S_g8c4627e0;
typedef struct S_g8c4627e4 S_g8c4627e4;
typedef struct S_g8c4627e8 S_g8c4627e8;
typedef struct S_g8c4627ec S_g8c4627ec;
typedef struct S_g8c4627f0 S_g8c4627f0;
typedef struct S_g8c4627f4 S_g8c4627f4;
typedef struct S_g8c4627f8 S_g8c4627f8;
typedef struct S_vv15 S_vv15;
typedef struct S_vv15_42c S_vv15_42c;
typedef struct S_vv15_42c_8 S_vv15_42c_8;
typedef struct S_vv15_430 S_vv15_430;
typedef struct S_vv15_430_4 S_vv15_430_4;
typedef struct S_vv16 S_vv16;
typedef struct S_vv16_42c S_vv16_42c;
typedef struct S_vv16_42c_8 S_vv16_42c_8;
typedef struct S_vv16_430 S_vv16_430;
typedef struct S_vv16_430_4 S_vv16_430_4;
struct S_vv15 {
    char unknown0[0x42c];
    S_vv15_42c *f42c;
    S_vv15_430 *f430;
};
struct S_vv15_42c {
    char unknown0[0x8];
    S_vv15_42c_8 *f08;
};
struct S_L8c2ed924 {
    char unknown0[0x34];
    int f34;
    char unknown38[0xc];
    int f44;
};
struct S_vv16 {
    char unknown0[0x42c];
    S_vv16_42c *f42c;
    S_vv16_430 *f430;
};
struct S_vv16_42c {
    char unknown0[0x8];
    S_vv16_42c_8 *f08;
};
struct S_g8c4627e0 {
    int f00;
    int f04;
    int f08;
};
struct S_g8c4627e4 {
    int f00;
    int f04;
    int f08;
};
struct S_g8c4627e8 {
    int f00;
    int f04;
    int f08;
};
struct S_g8c4627ec {
    int f00;
    int f04;
    int f08;
};
extern S_g8c4627e0 *g_8c4627e0;
extern S_g8c4627e4 *g_8c4627e4;
extern S_g8c4627e8 *g_8c4627e8;
extern S_g8c4627ec *g_8c4627ec;
extern S_g8c4627f0 *g_8c4627f0;
extern S_g8c4627f4 *g_8c4627f4;
extern S_g8c4627f8 *g_8c4627f8;
extern int g_8c4627fc;
extern S_L8c2ed924 g_8c2ed924;
extern char g_8c2edab0[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, int);
extern int game_malloc_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern void call_8c118ea4(int, int, float, float, float);
extern void draw_grid_selected_rows(void *, void *, void *, int, int);
extern int operator_new_8c18de4c(int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void load_assets_ene_bm1_shark_8c037358(void)
{
    int v6;
    float v7;
    int v11;
    float v12;
    S_vv15 *v15;
    S_vv16 *v16;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c2ed914), (int)(g_8c2edab0 + 0x199));
        g_8c4627f0 = (S_g8c4627f0 *)(int)(t2);
    } else {
        t3 = game_malloc_8c011ecc(0x440);
        if (t3 != 0) {
            call_8c03d610(t3, 1, (void *)((void *)0x8c2ed914), 0, 0, 0);
        }
        g_8c4627f0 = (S_g8c4627f0 *)(int)(t3);
    }
    t4 = game_malloc_8c011ecc(0x18);
    if (t4 != 0) {
        v6 = (int)2;
        v7 = (float)1.0f;
        call_8c118ea4(t4, v6, 7.0f, 12.0f, v7);
    }
    g_8c4627f4 = (S_g8c4627f4 *)(int)(t4);
    t5 = game_malloc_8c011ecc(0x18);
    if (t5 != 0) {
        v11 = (int)2;
        v12 = (float)1.0f;
        call_8c118ea4(t5, v11, 7.0f, 12.0f, v12);
    }
    g_8c4627f8 = (S_g8c4627f8 *)(int)(t5);
    v15 = (S_vv15 *)g_8c4627f0;
    draw_grid_selected_rows(g_8c4627f4, (void *)(v15->f42c->f08), (void *)(*(S_vv15_430_4 **)((char *)((char *)v15->f430 + 0x4) + ((&g_8c2ed924)->f34 << 3))), 5, 8);
    v16 = (S_vv16 *)g_8c4627f0;
    draw_grid_selected_rows(g_8c4627f8, (void *)(v16->f42c->f08), (void *)(*(S_vv16_430_4 **)((char *)((char *)v16->f430 + 0x4) + ((&g_8c2ed924)->f44 << 3))), 0xa, 0xd);
    t6 = operator_new_8c18de4c(0xc);
    g_8c4627e0 = (S_g8c4627e0 *)(int)(t6);
    t7 = operator_new_8c18de4c(0xc);
    g_8c4627e4 = (S_g8c4627e4 *)(int)(t7);
    t8 = operator_new_8c18de4c(0xc);
    g_8c4627e8 = (S_g8c4627e8 *)(int)(t8);
    t9 = operator_new_8c18de4c(0xc);
    g_8c4627ec = (S_g8c4627ec *)(int)(t9);
    t10 = record24_8c17948c(0x4f);
    g_8c4627e0->f00 = (int)(t10);
    t11 = record24_8c17948c(0x50);
    g_8c4627e0->f04 = (int)(t11);
    t12 = record24_8c17948c(0x51);
    g_8c4627e0->f08 = (int)(t12);
    t13 = record30_8c1794a0(0x54);
    g_8c4627e4->f00 = (int)(t13);
    t14 = record30_8c1794a0(0x55);
    g_8c4627e4->f04 = (int)(t14);
    t15 = record30_8c1794a0(0x56);
    g_8c4627e4->f08 = (int)(t15);
    t16 = block32_8c1794b4(0x4e);
    g_8c4627e8->f00 = (int)(t16);
    t17 = block32_8c1794b4(0x4f);
    g_8c4627e8->f04 = (int)(t17);
    t18 = block32_8c1794b4(0x50);
    g_8c4627e8->f08 = (int)(t18);
    t19 = record30_8c1794c8(0x4e);
    g_8c4627ec->f00 = (int)(t19);
    t20 = record30_8c1794c8(0x4f);
    g_8c4627ec->f04 = (int)(t20);
    t21 = record30_8c1794c8(0x50);
    g_8c4627ec->f08 = (int)(t21);
    g_8c4627fc = 0;
}
