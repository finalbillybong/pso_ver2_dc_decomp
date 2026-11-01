/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14317c
 * function: load_assets_boss2_de_rol_le_8c14317c
 * language: c
 * reference size: 784 bytes
 * compiled size: 784 bytes (+0.0%)
 * differing lines: 52 of 295 reference instruction lines
 * differing bytes: 50
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
typedef struct S_L8c4da2fc S_L8c4da2fc;
typedef struct S_L8c4da5b8 S_L8c4da5b8;
typedef struct S_c8c03ef88 S_c8c03ef88;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct S_g8c4da370 S_g8c4da370;
typedef struct S_vv11_0 S_vv11_0;
typedef struct S_vv13 S_vv13;
typedef struct S_vv13_42c S_vv13_42c;
typedef struct S_vv13_42c_28 S_vv13_42c_28;
typedef struct S_vv13_42c_28_2c S_vv13_42c_28_2c;
typedef struct S_vv15 S_vv15;
typedef struct S_vv15_2c S_vv15_2c;
typedef struct S_vv15_2c_4 S_vv15_2c_4;
typedef struct S_vv15_30 S_vv15_30;
typedef struct S_vv15_30_4 S_vv15_30_4;
typedef struct S_vv15_4 S_vv15_4;
typedef struct S_vv18 S_vv18;
typedef struct S_vv18_30 S_vv18_30;
typedef struct S_vv18_30_4 S_vv18_30_4;
typedef struct S_vv5_0 S_vv5_0;
typedef struct S_vv7_0 S_vv7_0;
typedef struct S_vv9_0 S_vv9_0;
typedef struct S_x20528 S_x20528;
struct S_vv13 {
    char unknown0[0x42c];
    S_vv13_42c *f42c;
};
struct S_vv13_42c {
    char unknown0[0x28];
    S_vv13_42c_28 *f28;
};
struct S_vv13_42c_28 {
    char unknown0[0x2c];
    S_vv13_42c_28_2c *f2c;
};
struct S_vv15 {
    char unknown0[0x4];
    S_vv15_4 *f04;
    char unknown8[0x24];
    S_vv15_2c *f2c;
    S_vv15_30 *f30;
};
struct S_vv15_4 {
    char unknown0[0x4];
    int f04;
};
struct S_vv15_2c {
    char unknown0[0x4];
    S_vv15_2c_4 *f04;
};
struct S_vv15_2c_4 {
    char unknown0[0x4];
    int f04;
};
struct S_L8c4da2fc {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_vv15_30 {
    char unknown0[0x4];
    S_vv15_30_4 *f04;
};
struct S_vv15_30_4 {
    char unknown0[0x4];
    int f04;
};
struct S_vv18 {
    char unknown0[0x30];
    S_vv18_30 *f30;
};
struct S_vv18_30 {
    char unknown0[0x4];
    S_vv18_30_4 *f04;
};
struct S_vv18_30_4 {
    char unknown0[0x4];
    int f04;
};
struct S_c8c03ef88 {
    char unknown0[0x2c];
    int f2c;
};
struct S_x20528 {
    int f00;
    int f04;
    float f08;
    float f0c;
    float f10;
    int f14;
    int f18;
    int f1c;
    float f20;
    float f24;
    float f28;
    int f2c;
    int f30;
};
struct S_L8c4da5b8 {
    char unknown0[0x2c];
    int f2c;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
extern char g_8c315118[];
extern S_x20528 g_8c4da3b0[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, int);
extern int operation_8c059f04(int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
extern void call_8c141ed0(void);
extern void call_8c1656ac(void);
extern void query_vector_position(void *, void *);
extern void operation_8c1aab54(void);
extern S_c8c03ef88 *call_8c03ef88(int, int);
extern void operation_8c175f64(void);
extern void operation_8c176438(void);
void load_assets_boss2_de_rol_le_8c14317c(void)
{
    int i;
    int k;
    float *f;
    float *g;
    S_L8c4da2fc *q;
    S_vv13 *v13;
    int v14;
    S_vv15 *v15;
    int v17;
    S_vv18 *v18;
    char *v27;
    int v20;
    S_x20528 *e;
    int v19;
    int v21;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    S_c8c03ef88 *t8;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c314fac), (int)(g_8c315118 + 0x28e));
        *(int *)0x8c4da370 = (int)(t2);
    } else {
        t3 = operation_8c059f04((int)((void *)0x8c314fac));
        *(int *)0x8c4da370 = (int)(t3);
    }
    f = (float *)0x8c4da380;
    g = (float *)0x8c4da390;
    f[0] = 0.0f;
    *(int *)0x8c4da37c = *(int *)0x8c4da378 = *(int *)0x8c4da374 = 0;
    f[1] = f[2] = f[3] = 0.0f;
    g[0] = 0.0f;
    g[1] = 0.0f;
    g[2] = 0.0f;
    *(int *)0x8c4da3a8 = *(int *)0x8c4da3a4 = *(int *)0x8c4da3a0 = *(int *)0x8c4da39c = 0;
    i = (int)0;
    while (1 > i) {
        k = (int)(i << 2);
        t4 = record24_8c17948c((int)(*(S_vv5_0 **)((char *)((char *)k + 0x0) + ((int)((void *)0x8c314e88)))));
        *(int *)((char *)((char *)k + 0x0) + ((int)((void *)0x8c4da358))) = (int)(t4);
        i = (int)(i + 1);
    }
    i = (int)0;
    while (3 > i) {
        k = (int)(i << 2);
        t5 = record30_8c1794a0((int)(*(S_vv7_0 **)((char *)((char *)k + 0x0) + ((int)((void *)0x8c314e8c)))));
        *(int *)((char *)((char *)k + 0x0) + ((int)((void *)0x8c4da35c))) = (int)(t5);
        i = (int)(i + 1);
    }
    i = (int)0;
    while (1 > i) {
        k = (int)(i << 2);
        t6 = block32_8c1794b4((int)(*(S_vv9_0 **)((char *)((char *)k + 0x0) + ((int)((void *)0x8c314e98)))));
        *(int *)((char *)((char *)k + 0x0) + ((int)((void *)0x8c4da368))) = (int)(t6);
        i = (int)(i + 1);
    }
    i = (int)0;
    while (1 > i) {
        k = (int)(i << 2);
        t7 = record30_8c1794c8((int)(*(S_vv11_0 **)((char *)((char *)k + 0x0) + ((int)((void *)0x8c314e9c)))));
        *(int *)((char *)((char *)k + 0x0) + ((int)((void *)0x8c4da36c))) = (int)(t7);
        i = (int)(i + 1);
    }
    *(int *)0x8c4da3ac = 0;
    call_8c141ed0();
    call_8c1656ac();
    k = (int)0;
    while (5 > k) {
        query_vector_position((void *)(k * 0xc + 0x8c286344), (void *)(k * 0xc + 0x8c4da2c0));
        k = (int)(k + 1);
    }
    operation_8c1aab54();
    v14 = (int)0;
    v13 = (S_vv13 *)*(S_g8c4da370 **)0x8c4da370;
    v15 = (S_vv15 *)v13->f42c->f28->f2c;
    while (0xa > v14) {
        i = (int)(v14 << 2);
        *(int *)((char *)0x8c4da308 + (i)) = v15->f04->f04 + 8;
        *(int *)((char *)0x8c4da330 + (i)) = v15->f2c->f04->f04 + 8;
        v17 = (int)v15->f30;
        v14 = (int)(v14 + 1);
        v15 = (S_vv15 *)v17;
    }
    q = (S_L8c4da2fc *)0x8c4da2fc;
    *(int *)q = v15->f04->f04 + 8;
    v18 = (S_vv18 *)v15->f30;
    q->f04 = v15->f30->f04->f04 + 8;
    q->f08 = v18->f30->f04->f04 + 8;
    v27 = (char *)v13->f42c->f28;
    t8 = call_8c03ef88((int)(v27), 0x4d);
    *(S_c8c03ef88 **)0x8c4da5ec = t8;
    *(int *)0x8c4da5f0 = (int)(t8->f2c);
    for (v20 = 0; v20 < 0xb; v20++) {
        e = (S_x20528 *)((char *)g_8c4da3b0 + v20 * 0x34);
        e->f00 = 0xf;
        e->f04 = 0;
        e->f08 = 0.0f;
        e->f0c = 0.0f;
        e->f10 = 0.0f;
        e->f14 = 0;
        e->f18 = 0;
        e->f1c = 0;
        e->f20 = 0.0f;
        e->f24 = 0.0f;
        e->f28 = 0.0f;
        e->f2c = 0;
        e->f30 = 0;
    }
    for (v21 = 0; v21 < 0xa; v21++) {
        *(int *)((char *)&g_8c4da3b0[0].f2c + v21 * 0x34) = (int)((char *)g_8c4da3b0 + (v21 + 1) * 0x34);
    }
    e = (S_x20528 *)((char *)g_8c4da3b0 + 0x208);
    e->f00 = 0x1f;
    e->f2c = 0;
    operation_8c175f64();
    operation_8c176438();
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 |= 1;
        if (*(int *)0x8c4d59d8 != 0) {
            (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 |= 0x10;
        }
    }
}
