/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e5584
 * function: load_assets_ene_re8_b_beast_8c0e5584
 * language: c
 * reference size: 596 bytes
 * compiled size: 592 bytes (-0.7%)
 * differing lines: 40 of 236 reference instruction lines
 * differing bytes: 360
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
typedef struct S_L8c3078c4 S_L8c3078c4;
typedef struct S_g8c46fe60 S_g8c46fe60;
typedef struct S_g8c46fe64 S_g8c46fe64;
typedef struct S_g8c46fe68 S_g8c46fe68;
typedef struct S_g8c46fe6c S_g8c46fe6c;
typedef struct S_g8c46fe70 S_g8c46fe70;
typedef struct S_g8c46fe74 S_g8c46fe74;
typedef struct S_g8c46fe78 S_g8c46fe78;
typedef struct S_vv18 S_vv18;
typedef struct S_vv18_42c S_vv18_42c;
typedef struct S_vv18_42c_8 S_vv18_42c_8;
typedef struct S_vv18_430 S_vv18_430;
typedef struct S_vv18_430_4 S_vv18_430_4;
typedef struct S_vv19 S_vv19;
typedef struct S_vv19_42c S_vv19_42c;
typedef struct S_vv19_42c_8 S_vv19_42c_8;
typedef struct S_vv19_430 S_vv19_430;
typedef struct S_vv19_430_4 S_vv19_430_4;
struct S_vv18 {
    char unknown0[0x42c];
    S_vv18_42c *f42c;
    S_vv18_430 *f430;
};
struct S_vv18_42c {
    char unknown0[0x8];
    S_vv18_42c_8 *f08;
};
struct S_L8c3078c4 {
    char unknown0[0x34];
    int f34;
    char unknown38[0xc];
    int f44;
};
struct S_vv19 {
    char unknown0[0x42c];
    S_vv19_42c *f42c;
    S_vv19_430 *f430;
};
struct S_vv19_42c {
    char unknown0[0x8];
    S_vv19_42c_8 *f08;
};
struct S_g8c46fe60 {
    int f00;
    int f04;
    int f08;
};
struct S_g8c46fe64 {
    int f00;
    int f04;
    int f08;
};
struct S_g8c46fe68 {
    int f00;
    int f04;
    int f08;
};
struct S_g8c46fe6c {
    int f00;
    int f04;
    int f08;
};
extern S_g8c46fe60 *g_8c46fe60;
extern S_g8c46fe64 *g_8c46fe64;
extern S_g8c46fe68 *g_8c46fe68;
extern S_g8c46fe6c *g_8c46fe6c;
extern S_g8c46fe70 *g_8c46fe70;
extern S_g8c46fe74 *g_8c46fe74;
extern S_g8c46fe78 *g_8c46fe78;
extern S_L8c3078c4 g_8c3078c4;
extern char g_8c3079d8[];
extern char g_8c307a60[];
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
void load_assets_ene_re8_b_beast_8c0e5584(void)
{
    int v9;
    float v10;
    int v14;
    float v15;
    S_vv18 *v18;
    S_vv19 *v19;
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
        t2 = operation_8c059f44((void *)((void *)0x8c3078b4), (int)(g_8c307a60 + 0x1af));
        g_8c46fe70 = (S_g8c46fe70 *)(int)(t2);
        *(float *)(g_8c3079d8 + 0xc) = 10.0f;
        *(float *)(g_8c3079d8 + 0x38) = 10.0f;
        *(float *)(g_8c3079d8 + 0x64) = 9.0f;
    } else {
        t3 = game_malloc_8c011ecc(0x440);
        if (t3 != 0) {
            call_8c03d610(t3, 1, (void *)((void *)0x8c3078b4), 0, 0, 0);
        }
        g_8c46fe70 = (S_g8c46fe70 *)(int)(t3);
        *(float *)(g_8c3079d8 + 0xc) = 7.0f;
        *(float *)(g_8c3079d8 + 0x38) = 7.0f;
        *(float *)(g_8c3079d8 + 0x64) = 8.0f;
    }
    t4 = game_malloc_8c011ecc(0x18);
    if (t4 != 0) {
        v9 = (int)2;
        v10 = (float)1.0f;
        call_8c118ea4(t4, v9, 7.0f, 12.0f, v10);
    }
    g_8c46fe74 = (S_g8c46fe74 *)(int)(t4);
    t5 = game_malloc_8c011ecc(0x18);
    if (t5 != 0) {
        v14 = (int)2;
        v15 = (float)1.0f;
        call_8c118ea4(t5, v14, 7.0f, 12.0f, v15);
    }
    g_8c46fe78 = (S_g8c46fe78 *)(int)(t5);
    v18 = (S_vv18 *)g_8c46fe70;
    draw_grid_selected_rows(g_8c46fe74, (void *)(v18->f42c->f08), (void *)(*(S_vv18_430_4 **)((char *)((char *)v18->f430 + 0x4) + ((&g_8c3078c4)->f34 << 3))), 5, 8);
    draw_grid_selected_rows(g_8c46fe78, (void *)(v18->f42c->f08), (void *)(*(S_vv19_430_4 **)((char *)((char *)v18->f430 + 0x4) + ((&g_8c3078c4)->f44 << 3))), 0xa, 0xd);
    t6 = operator_new_8c18de4c(0xc);
    g_8c46fe60 = (S_g8c46fe60 *)(int)(t6);
    t7 = operator_new_8c18de4c(0xc);
    g_8c46fe64 = (S_g8c46fe64 *)(int)(t7);
    t8 = operator_new_8c18de4c(0xc);
    g_8c46fe68 = (S_g8c46fe68 *)(int)(t8);
    t9 = operator_new_8c18de4c(0xc);
    g_8c46fe6c = (S_g8c46fe6c *)(int)(t9);
    t10 = record24_8c17948c(0x4b);
    g_8c46fe60->f00 = (int)(t10);
    t11 = record24_8c17948c(0x4c);
    g_8c46fe60->f04 = (int)(t11);
    t12 = record24_8c17948c(0x4d);
    g_8c46fe60->f08 = (int)(t12);
    t13 = record30_8c1794a0(0x4e);
    g_8c46fe64->f00 = (int)(t13);
    t14 = record30_8c1794a0(0x4f);
    g_8c46fe64->f04 = (int)(t14);
    t15 = record30_8c1794a0(0x50);
    g_8c46fe64->f08 = (int)(t15);
    t16 = block32_8c1794b4(0x4a);
    g_8c46fe68->f00 = (int)(t16);
    t17 = block32_8c1794b4(0x4b);
    g_8c46fe68->f04 = (int)(t17);
    t18 = block32_8c1794b4(0x4c);
    g_8c46fe68->f08 = (int)(t18);
    t19 = record30_8c1794c8(0x4a);
    g_8c46fe6c->f00 = (int)(t19);
    t20 = record30_8c1794c8(0x4b);
    g_8c46fe6c->f04 = (int)(t20);
    t21 = record30_8c1794c8(0x4c);
    g_8c46fe6c->f08 = (int)(t21);
}
