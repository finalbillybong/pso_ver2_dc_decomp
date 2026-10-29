typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2f2bfc S_L8c2f2bfc;
typedef struct S_L8c4671cc S_L8c4671cc;
typedef struct S_g8c4671a4 S_g8c4671a4;
typedef struct S_g8c4671d8 S_g8c4671d8;
typedef struct S_g8c4671dc S_g8c4671dc;
typedef struct S_g8c4671e0 S_g8c4671e0;
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
struct S_L8c2f2bfc {
    char unknown0[0x24];
    int f24;
    char unknown28[0xc];
    int f34;
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
struct S_g8c4671a4 {
    int f00;
    int f04;
    int f08;
};
extern int g_8c4671a0;
extern S_g8c4671a4 *g_8c4671a4;
extern int g_8c4671a8;
extern int g_8c4671ac;
extern int g_8c4671b0;
extern S_g8c4671d8 *g_8c4671d8;
extern S_g8c4671dc *g_8c4671dc;
extern S_g8c4671e0 *g_8c4671e0;
extern S_L8c2f2bfc g_8c2f2bfc;
extern S_L8c4671cc g_8c4671cc;
extern char g_8c2f2cd8[];
extern char gc_8c4671cc[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, int);
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern void call_8c118ea4(int, int, float, float, float);
extern void draw_grid_selected_rows(void *, void *, void *, int, int);
extern int call_8c18de4c(int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void operation_8c04cad8(void)
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
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c2f2bec), (int)(g_8c2f2cd8 + 0xd5));
        g_8c4671d8 = (S_g8c4671d8 *)(int)(t2);
    } else {
        t3 = call_8c011ecc(0x440);
        if (t3 != 0) {
            call_8c03d610(t3, 1, (void *)((void *)0x8c2f2bec), 0, 0, 0);
        }
        g_8c4671d8 = (S_g8c4671d8 *)(int)(t3);
    }
    g_8c4671b0 = 0;
    *(float *)(gc_8c4671cc + 0x8) = 0.0f;
    *(float *)(gc_8c4671cc + 0x4) = 0.0f;
    *(float *)(gc_8c4671cc + 0x0) = 0.0f;
    t4 = call_8c011ecc(0x18);
    if (t4 != 0) {
        v6 = (int)2;
        v7 = (float)0.0f;
        call_8c118ea4(t4, v6, v7, 20.0f, 0.7f);
    }
    g_8c4671dc = (S_g8c4671dc *)(int)(t4);
    t5 = call_8c011ecc(0x18);
    if (t5 != 0) {
        v11 = (int)2;
        v12 = (float)0.0f;
        call_8c118ea4(t5, v11, v12, 20.0f, 0.7f);
    }
    g_8c4671e0 = (S_g8c4671e0 *)(int)(t5);
    v15 = (S_vv15 *)g_8c4671d8;
    t1 = 0x42c;
    t2 = 0x430;
    draw_grid_selected_rows(g_8c4671dc, (void *)((*(S_vv15_42c **)((char *)v15 + t1))->f08), (void *)(*(S_vv15_430_4 **)((char *)((char *)*(S_vv15_430 **)((char *)v15 + t2) + 0x4) + ((&g_8c2f2bfc)->f24 << 3))), 0x17, 0x19);
    v16 = (S_vv16 *)g_8c4671d8;
    draw_grid_selected_rows(g_8c4671e0, (void *)(v16->f42c->f08), (void *)(*(S_vv16_430_4 **)((char *)((char *)v16->f430 + 0x4) + ((&g_8c2f2bfc)->f34 << 3))), 0xd, 0xf);
    t6 = call_8c18de4c(0xc);
    g_8c4671a4 = (S_g8c4671a4 *)(int)(t6);
    t7 = record24_8c17948c(0x4e);
    g_8c4671a0 = (int)(t7);
    t8 = record30_8c1794a0(0x51);
    g_8c4671a4->f00 = (int)(t8);
    t9 = record30_8c1794a0(0x52);
    g_8c4671a4->f08 = (int)(t9);
    t10 = record30_8c1794a0(0x53);
    g_8c4671a4->f04 = (int)(t10);
    t11 = block32_8c1794b4(0x4d);
    g_8c4671a8 = (int)(t11);
    t12 = record30_8c1794c8(0x4d);
    g_8c4671ac = (int)(t12);
}
